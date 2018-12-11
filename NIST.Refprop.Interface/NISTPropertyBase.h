/*!
* \file 	NISTPropertyBase.h
* \brief
*
*	Refprop.dll Interface package
*
* \author	lwm email:business122@163.com
* \version  1.0.0
* \date		2018/12/07
*/
#ifndef _H_NISTPROPERTYBASE_H_
#define _H_NISTPROPERTYBASE_H_

#include <string>
#include <assert.h>
#include <memory>
#include <Windows.h>
#include "CommonDef.h"

using std::string;
using std::wstring;
using std::unique_ptr;

namespace RefigerantProperties
{
	namespace NIST
	{
#pragma region "NIST functions definition"
		typedef void(__stdcall *fp_ABFL1dllTYPE)(double &, double &, double *, long &, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_ABFL2dllTYPE)(double &, double &, double *, long &, long &, double &, double &, double &, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double *, double *, double &, long &, char*, long);
		typedef void(__stdcall *fp_ACTVYdllTYPE)(double &, double &, double *, double &);
		typedef void(__stdcall *fp_AGdllTYPE)(double &, double &, double *, double &, double &);
		typedef void(__stdcall *fp_CCRITdllTYPE)(double &, double &, double &, double *, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_CP0dllTYPE)(double &, double *, double &);
		typedef void(__stdcall *fp_CRITPdllTYPE)(double *, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_CSATKdllTYPE)(long &, double &, long &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_CV2PKdllTYPE)(long &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_CVCPKdllTYPE)(long &, double &, double &, double &, double &);
		typedef void(__stdcall *fp_CVCPdllTYPE)(double &, double &, double *, double &, double &);
		typedef void(__stdcall *fp_DBDTdllTYPE)(double &, double *, double &);
		typedef void(__stdcall *fp_DBFL1dllTYPE)(double &, double &, double *, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_DBFL2dllTYPE)(double &, double &, double *, long &, double &, double &, double &, double &, double &, double *, double *, double &, long &, char*, long);
		typedef void(__stdcall *fp_DDDPdllTYPE)(double &, double &, double *, double &);
		typedef void(__stdcall *fp_DDDTdllTYPE)(double &, double &, double *, double &);
		typedef void(__stdcall *fp_DEFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_DHD1dllTYPE)(double &, double &, double *, double &, double &, double &, double &, double &, double &);
		typedef void(__stdcall *fp_DHFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_DIELECdllTYPE)(double &, double &, double *, double &);
		typedef void(__stdcall *fp_DOTFILLdllTYPE)(long &, double *, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_DPDD2dllTYPE)(double &, double &, double *, double &);
		typedef void(__stdcall *fp_DPDDKdllTYPE)(long &, double &, double &, double &);
		typedef void(__stdcall *fp_DPDDdllTYPE)(double &, double &, double *, double &);
		typedef void(__stdcall *fp_DPDTKdllTYPE)(long &, double &, double &, double &);
		typedef void(__stdcall *fp_DPDTdllTYPE)(double &, double &, double *, double &);
		typedef void(__stdcall *fp_DPTSATKdllTYPE)(long &, double &, long &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_DSFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_ENTHALdllTYPE)(double &, double &, double *, double &);
		typedef void(__stdcall *fp_ENTROdllTYPE)(double &, double &, double *, double &);
		typedef void(__stdcall *fp_ESFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_FGCTYdllTYPE)(double &, double &, double *, double *);
		typedef void(__stdcall *fp_FPVdllTYPE)(double &, double &, double &, double *, double &);
		typedef void(__stdcall *fp_GERG04dllTYPE)(long &, long &, long &, char*, long);
		typedef void(__stdcall *fp_GETFIJdllTYPE)(char*, double *, char*, char*, long, long, long);
		typedef void(__stdcall *fp_GETKTVdllTYPE)(long &, long &, char*, double *, char*, char*, char*, char*, long, long, long, long, long);
		typedef void(__stdcall *fp_GIBBSdllTYPE)(double &, double &, double *, double &, double &);
		typedef void(__stdcall *fp_HSFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_INFOdllTYPE)(long &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &);
		typedef void(__stdcall *fp_LIMITKdllTYPE)(char*, long &, double &, double &, double &, double &, double &, double &, double &, long &, char*, long, long);
		typedef void(__stdcall *fp_LIMITSdllTYPE)(char*, double *, double &, double &, double &, double &, long);
		typedef void(__stdcall *fp_LIMITXdllTYPE)(char*, double &, double &, double &, double *, double &, double &, double &, double &, long &, char*, long, long);
		typedef void(__stdcall *fp_MELTPdllTYPE)(double &, double *, double &, long &, char*, long);
		typedef void(__stdcall *fp_MELTTdllTYPE)(double &, double *, double &, long &, char*, long);
		typedef void(__stdcall *fp_MLTH2OdllTYPE)(double &, double &, double &);
		typedef void(__stdcall *fp_NAMEdllTYPE)(long &, char*, char*, char*, long, long, long);
		typedef void(__stdcall *fp_PDFL1dllTYPE)(double &, double &, double *, double &, long &, char*, long);
		typedef void(__stdcall *fp_PDFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_PEFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_PHFL1dllTYPE)(double &, double &, double *, long &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_PHFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_PQFLSHdllTYPE)(double &, double &, double *, long &, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_PREOSdllTYPE)(long &);
		typedef void(__stdcall *fp_PRESSdllTYPE)(double &, double &, double *, double &);
		typedef void(__stdcall *fp_PSFL1dllTYPE)(double &, double &, double *, long &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_PSFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_PUREFLDdllTYPE)(long &);
		typedef void(__stdcall *fp_QMASSdllTYPE)(double &, double *, double *, double &, double *, double *, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_QMOLEdllTYPE)(double &, double *, double *, double &, double *, double *, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_SATDdllTYPE)(double &, double *, long &, long &, double &, double &, double &, double &, double *, double *, long &, char*, long);
		typedef void(__stdcall *fp_SATEdllTYPE)(double &, double *, long &, long &, long &, double &, double &, double &, long &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_SATHdllTYPE)(double &, double *, long &, long &, long &, double &, double &, double &, long &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_SATPdllTYPE)(double &, double *, long &, double &, double &, double &, double *, double *, long &, char*, long);
		typedef void(__stdcall *fp_SATSdllTYPE)(double &, double *, long &, long &, long &, double &, double &, double &, long &, double &, double &, double &, long &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_SATTdllTYPE)(double &, double *, long &, double &, double &, double &, double *, double *, long &, char*, long);
		typedef void(__stdcall *fp_SETAGAdllTYPE)(long &, char*, long);
		typedef void(__stdcall *fp_SETKTVdllTYPE)(long &, long &, char*, double *, char*, long &, char*, long, long, long);
		typedef void(__stdcall *fp_SETMIXdllTYPE)(char*, char*, char*, long &, char*, double *, long &, char*, long, long, long, long, long);
		typedef void(__stdcall *fp_SETMODdllTYPE)(long &, char*, char*, char*, long &, char*, long, long, long, long);
		typedef void(__stdcall *fp_SETREFdllTYPE)(char*, long &, double *, double &, double &, double &, double &, long &, char*, long, long);
		typedef void(__stdcall *fp_SETUPdllTYPE)(long &, char*, char*, char*, long &, char*, long, long, long, long);
		typedef void(__stdcall *fp_SPECGRdllTYPE)(double &, double &, double &, double &);
		typedef void(__stdcall *fp_SUBLPdllTYPE)(double &, double *, double &, long &, char*, long);
		typedef void(__stdcall *fp_SUBLTdllTYPE)(double &, double *, double &, long &, char*, long);
		typedef void(__stdcall *fp_SURFTdllTYPE)(double &, double &, double *, double &, long &, char*, long);
		typedef void(__stdcall *fp_SURTENdllTYPE)(double &, double &, double &, double *, double *, double &, long &, char*, long);
		typedef void(__stdcall *fp_TDFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_TEFLSHdllTYPE)(double &, double &, double *, long &, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_THERM0dllTYPE)(double &, double &, double *, double &, double &, double &, double &, double &, double &, double &, double &, double &);
		typedef void(__stdcall *fp_THERM2dllTYPE)(double &, double &, double *, double &, double &, double &, double &, double &, double &, double &, double *, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &);
		typedef void(__stdcall *fp_THERM3dllTYPE)(double &, double &, double *, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &);
		typedef void(__stdcall *fp_THERMdllTYPE)(double &, double &, double *, double &, double &, double &, double &, double &, double &, double &, double &);
		typedef void(__stdcall *fp_THFLSHdllTYPE)(double &, double &, double *, long &, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_TPFLSHdllTYPE)(double &, double &, double *, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_TPRHOdllTYPE)(double &, double &, double *, long &, long &, double &, long &, char*, long);
		typedef void(__stdcall *fp_TQFLSHdllTYPE)(double &, double &, double *, long &, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_TRNPRPdllTYPE)(double &, double &, double *, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_TSFLSHdllTYPE)(double &, double &, double *, long &, double &, double &, double &, double &, double *, double *, double &, double &, double &, double &, double &, double &, long &, char*, long);
		typedef void(__stdcall *fp_VIRBdllTYPE)(double &, double *, double &);
		typedef void(__stdcall *fp_VIRCdllTYPE)(double &, double *, double &);
		typedef void(__stdcall *fp_WMOLdllTYPE)(double *, double &);
		typedef void(__stdcall *fp_XMASSdllTYPE)(double *, double *, double &);
		typedef void(__stdcall *fp_XMOLEdllTYPE)(double *, double *, double &);
#pragma endregion

#pragma region "Global variable"
		const unsigned g_cnRefpropcharlength = 255;
		const unsigned g_cnMaxLengthOfFilePath = 255;
		const unsigned g_cnLengthOfReference = 3;
		const unsigned g_cnMaxLengthOfErrorMessage = 255;
		const unsigned g_cnMaxNumberOfComponents = 20;  // Note: ncmax is the max number of components
#pragma endregion 



		class NISTPropertyBase
		{
		private:
#pragma region "NIST functions declaration"
			fp_ABFL1dllTYPE ABFL1dll;
			fp_ABFL2dllTYPE ABFL2dll;
			fp_ACTVYdllTYPE ACTVYdll;
			fp_AGdllTYPE AGdll;
			fp_CCRITdllTYPE CCRITdll;
			fp_CP0dllTYPE CP0dll;
			fp_CRITPdllTYPE CRITPdll;
			fp_CSATKdllTYPE CSATKdll;
			fp_CV2PKdllTYPE CV2PKdll;
			fp_CVCPKdllTYPE CVCPKdll;
			fp_CVCPdllTYPE CVCPdll;
			fp_DBDTdllTYPE DBDTdll;
			fp_DBFL1dllTYPE DBFL1dll;
			fp_DBFL2dllTYPE DBFL2dll;
			fp_DDDPdllTYPE DDDPdll;
			fp_DDDTdllTYPE DDDTdll;
			fp_DEFLSHdllTYPE DEFLSHdll;
			fp_DHD1dllTYPE DHD1dll;
			fp_DHFLSHdllTYPE DHFLSHdll;
			fp_DIELECdllTYPE DIELECdll;
			fp_DOTFILLdllTYPE DOTFILLdll;
			fp_DPDD2dllTYPE DPDD2dll;
			fp_DPDDKdllTYPE DPDDKdll;
			fp_DPDDdllTYPE DPDDdll;
			fp_DPDTKdllTYPE DPDTKdll;
			fp_DPDTdllTYPE DPDTdll;
			fp_DPTSATKdllTYPE DPTSATKdll;
			fp_DSFLSHdllTYPE DSFLSHdll;
			fp_ENTHALdllTYPE ENTHALdll;
			fp_ENTROdllTYPE ENTROdll;
			fp_ESFLSHdllTYPE ESFLSHdll;
			fp_FGCTYdllTYPE FGCTYdll;
			fp_FPVdllTYPE FPVdll;
			fp_GERG04dllTYPE GERG04dll;
			fp_GETFIJdllTYPE GETFIJdll;
			fp_GETKTVdllTYPE GETKTVdll;
			fp_GIBBSdllTYPE GIBBSdll;
			fp_HSFLSHdllTYPE HSFLSHdll;
			fp_INFOdllTYPE INFOdll;
			fp_LIMITKdllTYPE LIMITKdll;
			fp_LIMITSdllTYPE LIMITSdll;
			fp_LIMITXdllTYPE LIMITXdll;
			fp_MELTPdllTYPE MELTPdll;
			fp_MELTTdllTYPE MELTTdll;
			fp_MLTH2OdllTYPE MLTH2Odll;
			fp_NAMEdllTYPE NAMEdll;
			fp_PDFL1dllTYPE PDFL1dll;
			fp_PDFLSHdllTYPE PDFLSHdll;
			fp_PEFLSHdllTYPE PEFLSHdll;
			fp_PHFL1dllTYPE PHFL1dll;
			fp_PHFLSHdllTYPE PHFLSHdll;
			fp_PQFLSHdllTYPE PQFLSHdll;
			fp_PREOSdllTYPE PREOSdll;
			fp_PRESSdllTYPE PRESSdll;
			fp_PSFL1dllTYPE PSFL1dll;
			fp_PSFLSHdllTYPE PSFLSHdll;
			fp_PUREFLDdllTYPE PUREFLDdll;
			fp_QMASSdllTYPE QMASSdll;
			fp_QMOLEdllTYPE QMOLEdll;
			fp_SATDdllTYPE SATDdll;
			fp_SATEdllTYPE SATEdll;
			fp_SATHdllTYPE SATHdll;
			fp_SATPdllTYPE SATPdll;
			fp_SATSdllTYPE SATSdll;
			fp_SATTdllTYPE SATTdll;
			fp_SETAGAdllTYPE SETAGAdll;
			fp_SETKTVdllTYPE SETKTVdll;
			fp_SETMIXdllTYPE SETMIXdll;
			fp_SETMODdllTYPE SETMODdll;
			fp_SETREFdllTYPE SETREFdll;
			fp_SETUPdllTYPE SETUPdll;
			fp_SPECGRdllTYPE SPECGRdll;
			fp_SUBLPdllTYPE SUBLPdll;
			fp_SUBLTdllTYPE SUBLTdll;
			fp_SURFTdllTYPE SURFTdll;
			fp_SURTENdllTYPE SURTENdll;
			fp_TDFLSHdllTYPE TDFLSHdll;
			fp_TEFLSHdllTYPE TEFLSHdll;
			fp_THERM0dllTYPE THERM0dll;
			fp_THERM2dllTYPE THERM2dll;
			fp_THERM3dllTYPE THERM3dll;
			fp_THERMdllTYPE THERMdll;
			fp_THFLSHdllTYPE THFLSHdll;
			fp_TPFLSHdllTYPE TPFLSHdll;
			fp_TPRHOdllTYPE TPRHOdll;
			fp_TQFLSHdllTYPE TQFLSHdll;
			fp_TRNPRPdllTYPE TRNPRPdll;
			fp_TSFLSHdllTYPE TSFLSHdll;
			fp_VIRBdllTYPE VIRBdll;
			fp_VIRCdllTYPE VIRCdll;
			fp_WMOLdllTYPE WMOLdll;
			fp_XMASSdllTYPE XMASSdll;
			fp_XMOLEdllTYPE XMOLEdll;
#pragma endregion
			bool m_bCacheRefrigerantData;
			string m_strNistRefPropDllFileName;
			int m_nNumberOfComponent;

			double m_nMolecularWeight;  // Molecular weight.
			HINSTANCE m_hRefpropDll;    // The handle of the refprop.dll.
			bool m_bIsDllLoadedSucess;          // The flag that if the dll loaded sucess. 

			unique_ptr<double[]> m_pxLiquid; //Weight fraction of each refrigerant component in refrigerant liquid
			unique_ptr<double[]> m_pxVapor;  //Weight fraction of each refrigerant component in refrigerant vapor
			unique_ptr<double[]> m_pxMole;   //Mole based refrigerant fraction of each component.

			unique_ptr<char[]> m_pstrErrorBuff; // Error message buffer.

			inline double convertMoleBaseToWeightBase(double value)
			{
				assert(m_nMolecularWeight);
				return(value / m_nMolecularWeight);
			}

			inline double convertWeightBaseToMoleBase(double value)
			{
				return (value*m_nMolecularWeight);
			}

			/*	/// \brief Initialize the array
				/// \param Array pointer                     [in/out] aArray
				/// \param The element number of the array   [in] nNumberOfElements
				inline void initializeDoubleArrayToZero( double* dArray, int nNumberOfElements )
				{
					for (int i = 0;i<nNumberOfElements; ++i)
					{
						dArray[i] = 0;
					}
				}*/


			/*virtual*/ string GetRefpropDllName() const
			{
				return "refpropv91.dll";
			}

			/*virtual*/ wstring GetRefpropDllNameW() const
			{
				return L"refpropv91.dll";
			}

			/*virtual*/ string GetRefpropDataFileSubFolder();

			/*virtual*/ /*void*/ bool LoadDlls();

			//string getFilePathName(const string& rootFilePath, const string& fileFolder);

			double Enthalpy(double temperatureKevin, double density);
			void PHFlash1(double PKPA, double HJ
				, RefrigerantPhases KPH
				, double& temperature
				, double& density);

			bool EqualsTo(Refrigerants refrigerant);

		public:

			NISTPropertyBase();
			~NISTPropertyBase();

			virtual bool CheckFileNameLength(const string& fileNameR12, long maxFileNameLength);
			void SetCacheRefrigerantData(bool cacheRefrigerantData);
			virtual void   SetRefrigerant(Refrigerants refrigerant);
			/*virtual Refrigerants GetRefrigerant();*/
	/*		virtual MeasurementSystem GetUoMSystem();*/
			virtual double SaturatePressure(double temperatureKevin, RefrigerantPhases refrigerantPhase);
			virtual double SaturateTemperature(double pressureKPA, RefrigerantPhases refrigerantPhase);
			virtual double Enthalpy(double temperatureKevin, double pressureKPA, double quantity);
			virtual double EnthalpyVapor(double temperatureKevin, double pressureKPA);
			virtual double EnthalpyLiquid(double temperatureKevin, double pressureKPA);
			virtual double TemperatureVapor(double pressure, double enthalpy);
			virtual double TemperatureLiquid(double pressure, double enthalpy);
			virtual double TemperatureTwoPhase(double pressure, double enthalpy, double quantity);
			virtual double Quantity(double pressure, double enthalpy);
			virtual double DensityVapor(double temperatureKevin, double pressureKPA);
			//virtual double DensityVapor_1(double temperatureKevin, double pressureKPA);  
			virtual double DensityLiquid(double temperatureKevin, double pressureKPA);
			virtual double EnthalpyByPressureEntropy(double pressurekPA, double entropy);
			virtual double EnthalpyByPressureEntropy1(double pressurekPA, double entropy);
			virtual double EntropyVapor(double temperatureKevin, double pressureKPA);
			virtual double CalcLiquidPropertiesByTemperaturePressure(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density);
			virtual double CalcVaporPropertiesByTemperaturePressure1(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density, double/*%*/ cv1, double/*%*/ cp1, double/*%*/  w1);
			virtual double CalcVaporPropertiesByTemperaturePressure(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density);
			virtual double CalcVaporPropertiesByPressureEntropy(double pressureKPA, double entropy, double/*%*/ temperatureKevin, double/*%*/ enthalpy, double/*%*/ density);

		};



	}
}



#endif // _H_NISTPROPERTYBASE_H_
