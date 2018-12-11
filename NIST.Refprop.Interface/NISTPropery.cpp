#include "NISTPropery.h"
#include "NISTPropertyBase.h"

namespace RefigerantProperties
{
	namespace NIST
	{

		// protected
		NISTProperty::NISTProperty()
			: m_pRefpropImp(new NISTPropertyBase())
		{

		}


		NISTProperty::~NISTProperty()
		{
			if (m_pRefpropImp)
			{
				delete m_pRefpropImp;
				m_pRefpropImp = NULL;
			}
		}
		//

		//public
		bool NISTProperty::CheckFileNameLength(const string& fileNameR12, long maxFileNameLength)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->CheckFileNameLength(fileNameR12, maxFileNameLength);

			return false;

		}
		void NISTProperty::SetCacheRefrigerantData(bool cacheRefrigerantData)
		{
			if ( m_pRefpropImp )
				m_pRefpropImp->SetCacheRefrigerantData( cacheRefrigerantData );


		}

		void NISTProperty::SetRefrigerant(/*Refrigerants*/int refrigerant)
		{
			if ( m_pRefpropImp )
				m_pRefpropImp->SetRefrigerant( (Refrigerants)refrigerant );
		}

		double NISTProperty::SaturatePressure(double temperatureKevin, /*RefrigerantPhases*/int refrigerantPhase)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->SaturatePressure(temperatureKevin,  (RefrigerantPhases)refrigerantPhase);

			return 0.0f;
		}

		double NISTProperty::SaturateTemperature(double pressureKPA, /*RefrigerantPhases*/int refrigerantPhase)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->SaturateTemperature(pressureKPA, (RefrigerantPhases)refrigerantPhase);

			return 0.0f;

		}
		double NISTProperty::Enthalpy(double temperatureKevin, double pressureKPA, double quantity)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->Enthalpy(temperatureKevin,  pressureKPA,  quantity);

			return 0.0f;
		}

		double NISTProperty::EnthalpyVapor(double temperatureKevin, double pressureKPA)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->EnthalpyVapor( temperatureKevin,  pressureKPA);

			return 0.0f;
		}

		double NISTProperty::EnthalpyLiquid(double temperatureKevin, double pressureKPA)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->EnthalpyLiquid( temperatureKevin,  pressureKPA);

			return 0.0f;
		}

		double NISTProperty::TemperatureVapor(double pressure, double enthalpy)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->TemperatureVapor(pressure, enthalpy);

			return 0.0f;
		}

		double NISTProperty::TemperatureLiquid(double pressure, double enthalpy)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->TemperatureLiquid( pressure, enthalpy);

			return 0.0f;
		}

		double NISTProperty::TemperatureTwoPhase(double pressure, double enthalpy, double quantity)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->TemperatureTwoPhase(pressure, enthalpy, quantity);

			return 0.0f;
		}

		double NISTProperty::Quantity(double pressure, double enthalpy)
		{
			if (m_pRefpropImp)
				m_pRefpropImp->Quantity( pressure, enthalpy);

			return 0.0f;
		}

		double NISTProperty::DensityVapor(double temperatureKevin, double pressureKPA)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->DensityVapor(temperatureKevin, pressureKPA);

			return 0.0f;
		}

		double NISTProperty::DensityLiquid(double temperatureKevin, double pressureKPA)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->DensityLiquid( temperatureKevin,  pressureKPA);

			return 0.0f;
		}

		double NISTProperty::EnthalpyByPressureEntropy(double pressurekPA, double entropy)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->EnthalpyByPressureEntropy( pressurekPA, entropy);

			return 0.0f;
		}
		double NISTProperty::EnthalpyByPressureEntropy1(double pressurekPA, double entropy)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->EnthalpyByPressureEntropy1( pressurekPA,  entropy);

			return 0.0f;
		}

		double NISTProperty::EntropyVapor(double temperatureKevin, double pressureKPA)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->EntropyVapor(temperatureKevin, pressureKPA);

			return 0.0f;
		}

		double NISTProperty::CalcLiquidPropertiesByTemperaturePressure(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->CalcLiquidPropertiesByTemperaturePressure(temperatureKevin, pressureKPA, enthalpy, entropy, density);

			return 0.0f;

		}

		double NISTProperty::CalcVaporPropertiesByTemperaturePressure1(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density, double/*%*/ cv1, double/*%*/ cp1, double/*%*/  w1)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->CalcVaporPropertiesByTemperaturePressure1( temperatureKevin,  pressureKPA,  enthalpy,  entropy,  density,  cv1,  cp1,  w1);

			return 0.0f;
		}

		double NISTProperty::CalcVaporPropertiesByTemperaturePressure(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density)
		{
			if (m_pRefpropImp)
				return m_pRefpropImp->CalcVaporPropertiesByTemperaturePressure( temperatureKevin,  pressureKPA,  enthalpy,  entropy, density);

			return 0.0f;
		}

		double NISTProperty::CalcVaporPropertiesByPressureEntropy(double pressureKPA, double entropy, double/*%*/ temperatureKevin, double/*%*/ enthalpy, double/*%*/ density)
		{
			if ( m_pRefpropImp )
				return m_pRefpropImp->CalcVaporPropertiesByPressureEntropy(pressureKPA, entropy, temperatureKevin, enthalpy, density);

			return 0.0f;
			   
		}
		//
	}
}


