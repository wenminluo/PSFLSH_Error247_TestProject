/*!
* \file 	CommonDef.h
* \brief
*
*	 Module universal interface
*
* \author	lwm email:business122@163.com
* \version  1.0.0
* \date		2018/12/10
*/

#ifndef _H_COMMONDEF_H_
#define _H_COMMONDEF_H_

#include <string>
using std::string;


namespace RefigerantProperties
{
	namespace NIST
	{
#pragma region "Global enum"
		enum  RefrigerantPhases
		{
			UnknownRefPhase = 0,
			SaturatedLiquid = 1,
			SaturatedVapor = 2,
			TwoPhase = 3,

			SubcooledLiquid = 4,
			SuperHeatedVapor = 8,
			Liquid = SaturatedLiquid | SubcooledLiquid,
			Vapor = SaturatedVapor | SuperHeatedVapor

		};

		enum  Refrigerants
		{
			UnknownRef = -1,
			R12 = 0,
			R114 = 1,
			R134 = 2,
			R500 = 3,
			R410A = 4,
			WATER = 5,
			R1233ZD = 6,
			R22 = 22,
			R407C = 407,
			R502 = 502,
		};
#pragma endregion

#pragma region "Auxiliary class"
		class CStandardSettings
		{
		public:

			const double capacityFactor = 3.51685284206667f;
			const double flowFactor = 0.0630901964;
			const double foulFactor = 176.110225314329;
			const double pressureFactor = 6.894757293;
			const double velocityFactor = 0.3048;
			const double weightFactor = 0.45359237;
			const double pressureDropFactor = 4.01474213311279;
			const double basePressureSI = 101.3f;
			const double CapacitySIWXE = 800.0f;
			const double CapacitySIWSC = 3516.0f;

			const double EvapEWTIP = 54.00f;
			const double EvapLWTIP = 44.00f;
			const double EvapFlowFactorIP = 2.4f;
			const double CondEWTIP = 85.00f;
			const double CondLWTIP = 94.30f;
			const double CondFlowFactorIP = 3.0f;
			const double EvapfoulFactorIP = 0.0001f;
			const double CondfoulFactorIP = 0.00025f;

			const double EvapEWTSI = 12.00f;
			const double EvapLWTSI = 7.00f;
			const double EvapFlowFactorSI = 0.172 / 3.6;
			const double CondEWTSI = 30.00f;
			const double CondLWTSI = 35.00f;
			const double CondFlowFactorSI = 0.215 / 3.6;
			const double EvapfoulFactorSI = 0.0180f;
			const double CondfoulFactorSI = 0.0440f;

			const double CapacityHighSI = 6000;
			const double CapacityLowSI = 350;
			const double EvapEWTHighSI = 23;
			const double EvapEWTLowSI = 4;
			const double EvapLWTHighSI = 20;
			const double EvapLWTLowSI = 3;
			const double EvapFlowHighSI = 1000;
			const double EvapFlowLowSI = 1;

			const double CondEWTHighSI = 43;
			const double CondEWTHighIP = 105;
			const double CondEWTLowSI = 17;
			const double CondEWTLowIP = 55;
			const double CondLWTHighSI = 45;
			const double CondLWTLowSI = 17;
			const double CondFlowHighSI = 1000;
			const double CondFlowLowSI = 1;
		};

		class MeasurementSystem
		{
		private:
			static CStandardSettings StandardSettings;

		public:

			static double CapacityConvertor(double capacity, string fromUnit, string toUnit)
			{
				double value = capacity;
				if (fromUnit == toUnit)
					value = capacity;
				else
				{
					if (toUnit == "IP")
						value = capacity / StandardSettings.capacityFactor;
					else
						value = capacity * StandardSettings.capacityFactor;
				}
				return value;
			}

			static double EfficiencyConvertor(double efficiency, string fromUnit, string toUnit)
			{
				double value = efficiency;
				if (fromUnit == toUnit)
					value = efficiency;
				else
				{
					value = StandardSettings.capacityFactor / efficiency;
				}
				return value;
			}

			static double TempConvertor(double temp, string fromUnit, string toUnit)
			{
				double value = temp;
				if (fromUnit == toUnit)
					value = temp;
				else
				{
					if (toUnit == "IP")
						value = temp * 1.8 + 32;
					else
						value = (temp - 32) / 1.8;
				}
				return value;
			}

			static double DeltaTempConvertor(double temp, string fromUnit, string toUnit)
			{
				double value = temp;
				if (fromUnit == toUnit)
					value = temp;
				else
				{
					if (toUnit == "IP")
						value = temp * 1.8;
					else
						value = temp / 1.8;
				}
				return value;
			}

			static double FlowConvertor(double flow, string fromUnit, string toUnit)
			{
				double value = flow;
				if (fromUnit == toUnit)
					value = flow;
				else
				{
					if (toUnit == "IP")
						value = flow / StandardSettings.flowFactor;
					else
						value = flow * StandardSettings.flowFactor;
				}
				return value;
			}

			static double FoulConvertor(double foul, string fromUnit, string toUnit)
			{
				double value = foul;
				if (fromUnit == toUnit)
					value = foul;
				else
				{
					if (toUnit == "IP")
						value = foul / StandardSettings.foulFactor;
					else
						value = foul * StandardSettings.foulFactor;
				}
				return value;
			}

			static double PressureConvertor(double pressure, string fromUnit, string toUnit)
			{
				double value = pressure;
				if (fromUnit == toUnit)
					value = pressure;
				else
				{
					if (toUnit == "IP")
						value = pressure / StandardSettings.pressureFactor;
					else
						value = pressure * StandardSettings.pressureFactor;
				}
				return value;
			}

			static double PressureDropConvertor(double pressureDrop, string fromUnit, string toUnit)
			{
				double value = pressureDrop;
				if (fromUnit == toUnit)
					value = pressureDrop;
				else
				{
					if (toUnit == "IP")
						value = pressureDrop * StandardSettings.pressureDropFactor / 12;
					else
						value = pressureDrop / StandardSettings.pressureDropFactor * 12;
				}
				return value;
			}

			static double VelocityConvertor(double velocity, string fromUnit, string toUnit)
			{
				double value = velocity;
				if (fromUnit == toUnit)
					value = velocity;
				else
				{
					if (toUnit == "IP")
						value = velocity / StandardSettings.velocityFactor;
					else
						value = velocity * StandardSettings.velocityFactor;
				}
				return value;
			}

			static string DesignPressureConvertor(string pressure, string fromUnit, string toUnit)
			{
				string value = pressure;
				if (fromUnit == toUnit)
					value = pressure;
				else
				{
					if (toUnit == "IP")
					{
						if (pressure == "1.0")
							value = "150";
						else if (pressure == "1.6")
							value = "232";
						else if (pressure == "2.0")
							value = "300";
					}
					else
					{
						if (pressure == "150")
							value = "1.0";
						else if (pressure == "232")
							value = "1.6";
						else if (pressure == "300")
							value = "2.0";
					}
				}
				return value;
			}

			static double WeightConvertor(double weight, string fromUnit, string toUnit)
			{
				double value = weight;
				if (fromUnit == toUnit)
					value = weight;
				else
				{
					if (toUnit == "IP")
						value = weight / StandardSettings.weightFactor;
					else
						value = weight * StandardSettings.weightFactor;
				}
				return value;
			}

			static double getDefaultEvapFoulFactor(string toUnit)
			{
				double value = 0.0f;
				if (toUnit == "IP")
					value = StandardSettings.EvapfoulFactorIP;
				else
					value = StandardSettings.EvapfoulFactorSI;
				return value;
			}

			static double getDefaultEvapEWT(string toUnit)
			{
				double value = 0.0f;
				if (toUnit == "IP")
					value = StandardSettings.EvapEWTIP;
				else
					value = StandardSettings.EvapEWTSI;
				return value;
			}
			static double getDefaultEvapLWT(string toUnit)
			{
				double value = 0.0f;
				if (toUnit == "IP")
					value = StandardSettings.EvapLWTIP;
				else
					value = StandardSettings.EvapLWTSI;
				return value;
			}
			static double getDefaultEvapFlow(string toUnit)
			{
				double value = 0.0f;
				if (toUnit == "IP")
					value = StandardSettings.EvapFlowFactorIP;
				else
					value = StandardSettings.EvapFlowFactorSI;
				return value;
			}
			static double getDefaultCondEWT(string toUnit)
			{
				double value = 0.0f;
				if (toUnit == "IP")
					value = StandardSettings.CondEWTIP;
				else
					value = StandardSettings.CondEWTSI;
				return value;
			}
			static double getDefaultCondLWT(string toUnit)
			{
				double value = 0.0f;
				if (toUnit == "IP")
					value = StandardSettings.CondLWTIP;
				else
					value = StandardSettings.CondLWTSI;
				return value;
			}
			static double getDefaultCondFlow(string toUnit)
			{
				double value = 0.0f;
				if (toUnit == "IP")
					value = StandardSettings.CondFlowFactorIP;
				else
					value = StandardSettings.CondFlowFactorSI;
				return value;
			}
			static double getDefaultCondFoulFactor(string toUnit)
			{
				double value = 0.0f;
				if (toUnit == "IP")
					value = StandardSettings.CondfoulFactorIP;
				else
					value = StandardSettings.CondfoulFactorSI;
				return value;
			}
		};
#pragma endregion 

#pragma region "Exception class"
		class NISTRefpropException
		{
        
		private:
			long   m_lErrorNum; // Error number.
			string m_strError;  // Error information.

		public:
			explicit NISTRefpropException( long lErrorNum, const string& strError)
			                : m_lErrorNum(lErrorNum)
				             , m_strError(strError){

			}

		};

#pragma endregion "Exception class"

	}
}

#endif // _H_COMMONDEF_H_


