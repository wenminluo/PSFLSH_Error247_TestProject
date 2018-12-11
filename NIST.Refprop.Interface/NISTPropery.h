/*!
* \file 	NISTPropery.h
* \brief	
*
*	NIST Refprop C# interface
*
* \author	lwm email:business122@163.com
* \version  1.0.0
* \date		2018/12/10
*/
#ifndef _H_NISTPROP_H_
#define _H_NISTPROP_H_
//#include <memory>
#include "CommonDef.h"

//using std::unique_ptr;
//using namespace System;

namespace RefigerantProperties
{
	namespace NIST
	{
		class NISTPropertyBase;

		public ref class NISTProperty
		{

		private:
			static NISTProperty^ instance;

			 //unique_ptr<NISTPropertyBase> m_pRefpropImp;    //Actual interface object pointer.
			NISTPropertyBase* m_pRefpropImp;    //Actual interface object pointer.
       
		protected:
			NISTProperty();
			~NISTProperty();

		public:

			static property NISTProperty^ getInstance
			{
				NISTProperty^ get()
				{
					if ( !instance )
					{
						instance = gcnew NISTProperty();
					}

					return instance;
				}

				
			}

			 bool CheckFileNameLength(const string& fileNameR12, long maxFileNameLength);
			 void SetCacheRefrigerantData(bool cacheRefrigerantData);
			 void  SetRefrigerant(/*Refrigerants*/int refrigerant);
			/*virtual Refrigerants GetRefrigerant();*/
			/*		virtual MeasurementSystem GetUoMSystem();*/
			 double SaturatePressure(double temperatureKevin, /*RefrigerantPhases*/int refrigerantPhase);
			 double SaturateTemperature(double pressureKPA, /*RefrigerantPhases*/int refrigerantPhase);
			 double Enthalpy(double temperatureKevin, double pressureKPA, double quantity);
			 double EnthalpyVapor(double temperatureKevin, double pressureKPA);
			 double EnthalpyLiquid(double temperatureKevin, double pressureKPA);
			 double TemperatureVapor(double pressure, double enthalpy);
			 double TemperatureLiquid(double pressure, double enthalpy);
			 double TemperatureTwoPhase(double pressure, double enthalpy, double quantity);
			 double Quantity(double pressure, double enthalpy);
			 double DensityVapor(double temperatureKevin, double pressureKPA);
			//virtual double DensityVapor_1(double temperatureKevin, double pressureKPA);  
			 double DensityLiquid(double temperatureKevin, double pressureKPA);
			 double EnthalpyByPressureEntropy(double pressurekPA, double entropy);
			 double EnthalpyByPressureEntropy1(double pressurekPA, double entropy);
			 double EntropyVapor(double temperatureKevin, double pressureKPA);
			 double CalcLiquidPropertiesByTemperaturePressure(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density);
			 double CalcVaporPropertiesByTemperaturePressure1(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density, double/*%*/ cv1, double/*%*/ cp1, double/*%*/  w1);
			 double CalcVaporPropertiesByTemperaturePressure(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density);
			 double CalcVaporPropertiesByPressureEntropy(double pressureKPA, double entropy, double/*%*/ temperatureKevin, double/*%*/ enthalpy, double/*%*/ density);
		};

	}
}

#endif // _H_NISTPROP_H_
