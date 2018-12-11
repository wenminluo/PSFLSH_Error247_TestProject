#include "NISTPropertyBase.h"
#include <tchar.h>

using std::make_unique;

namespace RefigerantProperties
{
	namespace NIST
	{

		NISTPropertyBase::NISTPropertyBase()
			: m_bCacheRefrigerantData(true)
			, m_strNistRefPropDllFileName("")
			, m_nNumberOfComponent(0)
			, m_nMolecularWeight(0.0f)
			, m_hRefpropDll(NULL)
			, m_bIsDllLoadedSucess(false) {

			//<1> Export function pointer initialization.
#pragma region "Export function initialization"
			ABFL1dll = NULL;
			ABFL2dll = NULL;
			ACTVYdll = NULL;
			AGdll = NULL;
			CCRITdll = NULL;
			CP0dll = NULL;
			CRITPdll = NULL ;
			CSATKdll =NULL ;
			CV2PKdll = NULL;
			CVCPKdll;
			CVCPdll;
			DBDTdll;
			DBFL1dll;
			DBFL2dll;
			DDDPdll;
			DDDTdll;
			DEFLSHdll;
			DHD1dll;
			DHFLSHdll;
			DIELECdll;
			DOTFILLdll;
			/*		fp_DPDD2dllTYPE DPDD2dll;
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
					fp_XMOLEdllTYPE XMOLEdll;*/
#pragma endregion "Export function initialization"

			//<2> Pointer object initialization.
			m_pxLiquid = make_unique<double[]>(g_cnMaxNumberOfComponents);
			m_pxVapor = make_unique<double[]>(g_cnMaxNumberOfComponents);
			m_pxMole = make_unique<double[]>(g_cnMaxNumberOfComponents);
			m_pstrErrorBuff = make_unique<char[]>(g_cnMaxLengthOfErrorMessage);

			//<3> Load dll and export functions from it
			m_bIsDllLoadedSucess = LoadDlls();



		}


		NISTPropertyBase::~NISTPropertyBase()
		{
			//[1] Free current handle of dll
			if (m_hRefpropDll)
			{
				::FreeLibrary(m_hRefpropDll);
				m_hRefpropDll = NULL;
			}
		}

		//private
		string NISTPropertyBase::GetRefpropDataFileSubFolder()
		{
			return "";
		}

		/*void*/ bool NISTPropertyBase::LoadDlls()
		{
			//[1] Load refprop.dll and all the export functions belong to it.   
			//<1> Free current handle of dll
			if (m_hRefpropDll)
			{
				::FreeLibrary(m_hRefpropDll);
				m_hRefpropDll = NULL;
			}

			//<2> Get ".exe" Fold path.
			TCHAR szDllDir[MAX_PATH * 2];
			memset(szDllDir, 0, MAX_PATH * 2);
			if (ERROR_SUCCESS != GetModuleFileNameW(NULL, szDllDir, MAX_PATH * 2))
			{
				//<3> The directory of "refprop.dll".
				TCHAR *pLastSlash = wcsrchr(szDllDir, '\\');
				wcsncpy_s(szDllDir, szDllDir, pLastSlash - szDllDir);

				swprintf_s(szDllDir, L"%s\\%s", szDllDir, GetRefpropDllNameW().c_str());
				m_hRefpropDll = ::LoadLibraryW(szDllDir);

				//<4> Export the functions of the refprop.dll
				if (NULL != m_hRefpropDll)
				{
#pragma region "Export functions from dll"
					ABFL1dll = (fp_ABFL1dllTYPE)GetProcAddress(m_hRefpropDll, "ABFL1dll");
					ABFL2dll = (fp_ABFL2dllTYPE)GetProcAddress(m_hRefpropDll, "ABFL2dll");
					ACTVYdll = (fp_ACTVYdllTYPE)GetProcAddress(m_hRefpropDll, "ACTVYdll");
					AGdll = (fp_AGdllTYPE)GetProcAddress(m_hRefpropDll, "AGdll");
					CCRITdll = (fp_CCRITdllTYPE)GetProcAddress(m_hRefpropDll, "CCRITdll");
					CP0dll = (fp_CP0dllTYPE)GetProcAddress(m_hRefpropDll, "CP0dll");
					CRITPdll = (fp_CRITPdllTYPE)GetProcAddress(m_hRefpropDll, "CRITPdll");
					CSATKdll = (fp_CSATKdllTYPE)GetProcAddress(m_hRefpropDll, "CSATKdll");
					CV2PKdll = (fp_CV2PKdllTYPE)GetProcAddress(m_hRefpropDll, "CV2PKdll");
					CVCPKdll = (fp_CVCPKdllTYPE)GetProcAddress(m_hRefpropDll, "CVCPKdll");
					CVCPdll = (fp_CVCPdllTYPE)GetProcAddress(m_hRefpropDll, "CVCPdll");
					DBDTdll = (fp_DBDTdllTYPE)GetProcAddress(m_hRefpropDll, "DBDTdll");
					DBFL1dll = (fp_DBFL1dllTYPE)GetProcAddress(m_hRefpropDll, "DBFL1dll");
					DBFL2dll = (fp_DBFL2dllTYPE)GetProcAddress(m_hRefpropDll, "DBFL2dll");
					DDDPdll = (fp_DDDPdllTYPE)GetProcAddress(m_hRefpropDll, "DDDPdll");
					DDDTdll = (fp_DDDTdllTYPE)GetProcAddress(m_hRefpropDll, "DDDTdll");
					DEFLSHdll = (fp_DEFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "DEFLSHdll");
					DHD1dll = (fp_DHD1dllTYPE)GetProcAddress(m_hRefpropDll, "DHD1dll");
					DHFLSHdll = (fp_DHFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "DHFLSHdll");
					DIELECdll = (fp_DIELECdllTYPE)GetProcAddress(m_hRefpropDll, "DIELECdll");
					DOTFILLdll = (fp_DOTFILLdllTYPE)GetProcAddress(m_hRefpropDll, "DOTFILLdll");
					DPDD2dll = (fp_DPDD2dllTYPE)GetProcAddress(m_hRefpropDll, "DPDD2dll");
					DPDDKdll = (fp_DPDDKdllTYPE)GetProcAddress(m_hRefpropDll, "DPDDKdll");
					DPDDdll = (fp_DPDDdllTYPE)GetProcAddress(m_hRefpropDll, "DPDDdll");
					DPDTKdll = (fp_DPDTKdllTYPE)GetProcAddress(m_hRefpropDll, "DPDTKdll");
					DPDTdll = (fp_DPDTdllTYPE)GetProcAddress(m_hRefpropDll, "DPDTdll");
					DPTSATKdll = (fp_DPTSATKdllTYPE)GetProcAddress(m_hRefpropDll, "DPTSATKdll");
					DSFLSHdll = (fp_DSFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "DSFLSHdll");
					ENTHALdll = (fp_ENTHALdllTYPE)GetProcAddress(m_hRefpropDll, "ENTHALdll");
					ENTROdll = (fp_ENTROdllTYPE)GetProcAddress(m_hRefpropDll, "ENTROdll");
					ESFLSHdll = (fp_ESFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "ESFLSHdll");
					FGCTYdll = (fp_FGCTYdllTYPE)GetProcAddress(m_hRefpropDll, "FGCTYdll");
					FPVdll = (fp_FPVdllTYPE)GetProcAddress(m_hRefpropDll, "FPVdll");
					GERG04dll = (fp_GERG04dllTYPE)GetProcAddress(m_hRefpropDll, "GERG04dll");
					GETFIJdll = (fp_GETFIJdllTYPE)GetProcAddress(m_hRefpropDll, "GETFIJdll");
					GETKTVdll = (fp_GETKTVdllTYPE)GetProcAddress(m_hRefpropDll, "GETKTVdll");
					GIBBSdll = (fp_GIBBSdllTYPE)GetProcAddress(m_hRefpropDll, "GIBBSdll");
					HSFLSHdll = (fp_HSFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "HSFLSHdll");
					INFOdll = (fp_INFOdllTYPE)GetProcAddress(m_hRefpropDll, "INFOdll");
					LIMITKdll = (fp_LIMITKdllTYPE)GetProcAddress(m_hRefpropDll, "LIMITKdll");
					LIMITSdll = (fp_LIMITSdllTYPE)GetProcAddress(m_hRefpropDll, "LIMITSdll");
					LIMITXdll = (fp_LIMITXdllTYPE)GetProcAddress(m_hRefpropDll, "LIMITXdll");
					MELTPdll = (fp_MELTPdllTYPE)GetProcAddress(m_hRefpropDll, "MELTPdll");
					MELTTdll = (fp_MELTTdllTYPE)GetProcAddress(m_hRefpropDll, "MELTTdll");
					MLTH2Odll = (fp_MLTH2OdllTYPE)GetProcAddress(m_hRefpropDll, "MLTH2Odll");
					NAMEdll = (fp_NAMEdllTYPE)GetProcAddress(m_hRefpropDll, "NAMEdll");
					PDFL1dll = (fp_PDFL1dllTYPE)GetProcAddress(m_hRefpropDll, "PDFL1dll");
					PDFLSHdll = (fp_PDFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "PDFLSHdll");
					PEFLSHdll = (fp_PEFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "PEFLSHdll");
					PHFL1dll = (fp_PHFL1dllTYPE)GetProcAddress(m_hRefpropDll, "PHFL1dll");
					PHFLSHdll = (fp_PHFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "PHFLSHdll");
					PQFLSHdll = (fp_PQFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "PQFLSHdll");
					PREOSdll = (fp_PREOSdllTYPE)GetProcAddress(m_hRefpropDll, "PREOSdll");
					PRESSdll = (fp_PRESSdllTYPE)GetProcAddress(m_hRefpropDll, "PRESSdll");
					PSFL1dll = (fp_PSFL1dllTYPE)GetProcAddress(m_hRefpropDll, "PSFL1dll");
					PSFLSHdll = (fp_PSFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "PSFLSHdll");
					PUREFLDdll = (fp_PUREFLDdllTYPE)GetProcAddress(m_hRefpropDll, "PUREFLDdll");
					QMASSdll = (fp_QMASSdllTYPE)GetProcAddress(m_hRefpropDll, "QMASSdll");
					QMOLEdll = (fp_QMOLEdllTYPE)GetProcAddress(m_hRefpropDll, "QMOLEdll");
					SATDdll = (fp_SATDdllTYPE)GetProcAddress(m_hRefpropDll, "SATDdll");
					SATEdll = (fp_SATEdllTYPE)GetProcAddress(m_hRefpropDll, "SATEdll");
					SATHdll = (fp_SATHdllTYPE)GetProcAddress(m_hRefpropDll, "SATHdll");
					SATPdll = (fp_SATPdllTYPE)GetProcAddress(m_hRefpropDll, "SATPdll");
					SATSdll = (fp_SATSdllTYPE)GetProcAddress(m_hRefpropDll, "SATSdll");
					SATTdll = (fp_SATTdllTYPE)GetProcAddress(m_hRefpropDll, "SATTdll");
					SETAGAdll = (fp_SETAGAdllTYPE)GetProcAddress(m_hRefpropDll, "SETAGAdll");
					SETKTVdll = (fp_SETKTVdllTYPE)GetProcAddress(m_hRefpropDll, "SETKTVdll");
					SETMIXdll = (fp_SETMIXdllTYPE)GetProcAddress(m_hRefpropDll, "SETMIXdll");
					SETMODdll = (fp_SETMODdllTYPE)GetProcAddress(m_hRefpropDll, "SETMODdll");
					SETREFdll = (fp_SETREFdllTYPE)GetProcAddress(m_hRefpropDll, "SETREFdll");
					SETUPdll = (fp_SETUPdllTYPE)GetProcAddress(m_hRefpropDll, "SETUPdll");
					SPECGRdll = (fp_SPECGRdllTYPE)GetProcAddress(m_hRefpropDll, "SPECGRdll");
					SUBLPdll = (fp_SUBLPdllTYPE)GetProcAddress(m_hRefpropDll, "SUBLPdll");
					SUBLTdll = (fp_SUBLTdllTYPE)GetProcAddress(m_hRefpropDll, "SUBLTdll");
					SURFTdll = (fp_SURFTdllTYPE)GetProcAddress(m_hRefpropDll, "SURFTdll");
					SURTENdll = (fp_SURTENdllTYPE)GetProcAddress(m_hRefpropDll, "SURTENdll");
					TDFLSHdll = (fp_TDFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "TDFLSHdll");
					TEFLSHdll = (fp_TEFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "TEFLSHdll");
					THERM0dll = (fp_THERM0dllTYPE)GetProcAddress(m_hRefpropDll, "THERM0dll");
					THERM2dll = (fp_THERM2dllTYPE)GetProcAddress(m_hRefpropDll, "THERM2dll");
					THERM3dll = (fp_THERM3dllTYPE)GetProcAddress(m_hRefpropDll, "THERM3dll");
					THERMdll = (fp_THERMdllTYPE)GetProcAddress(m_hRefpropDll, "THERMdll");
					THFLSHdll = (fp_THFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "THFLSHdll");
					TPFLSHdll = (fp_TPFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "TPFLSHdll");
					TPRHOdll = (fp_TPRHOdllTYPE)GetProcAddress(m_hRefpropDll, "TPRHOdll");
					TQFLSHdll = (fp_TQFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "TQFLSHdll");
					TRNPRPdll = (fp_TRNPRPdllTYPE)GetProcAddress(m_hRefpropDll, "TRNPRPdll");
					TSFLSHdll = (fp_TSFLSHdllTYPE)GetProcAddress(m_hRefpropDll, "TSFLSHdll");
					VIRBdll = (fp_VIRBdllTYPE)GetProcAddress(m_hRefpropDll, "VIRBdll");
					VIRCdll = (fp_VIRCdllTYPE)GetProcAddress(m_hRefpropDll, "VIRCdll");
					WMOLdll = (fp_WMOLdllTYPE)GetProcAddress(m_hRefpropDll, "WMOLdll");
					XMASSdll = (fp_XMASSdllTYPE)GetProcAddress(m_hRefpropDll, "XMASSdll");
					XMOLEdll = (fp_XMOLEdllTYPE)GetProcAddress(m_hRefpropDll, "XMOLEdll");

#pragma endregion "Export functions from dll"

					return true;
				}

			}

			return false;
		}

		/*	string NISTPropertyBase::getFilePathName(const string& rootFilePath, const string& fileFolder)
			{

			}*/

		double NISTPropertyBase::Enthalpy(double temperatureKevin, double density)
		{

			assert(ENTHALdll != NULL);
			double dEnthalpy = 0;
			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);

			ENTHALdll(temperatureKevin, density, m_pxMole.get(), dEnthalpy);

			return convertMoleBaseToWeightBase(dEnthalpy);

		}
		void NISTPropertyBase::PHFlash1(double dPressure
			, double dEnthalpy
			, RefrigerantPhases phase
			, double& dTemperature
			, double& dDensity)
		{

			assert(PHFL1dll != NULL);

			dEnthalpy = convertWeightBaseToMoleBase(dEnthalpy);
			long lError = 0;
			long lPhase = (long)phase;

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);

			PHFL1dll(dPressure, dEnthalpy, m_pxMole.get()
				, lPhase, dTemperature, dDensity
				, lError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);
			// If there is an exception.
			if (0 != lError)
			{
				
                // Throw exception information. 
				throw(NISTRefpropException(lError, m_pstrErrorBuff.get()));
			}

			dDensity = dDensity*m_nMolecularWeight;

		}

		bool NISTPropertyBase::EqualsTo(Refrigerants refrigerant)
		{
			return false;

		}

		// public
		bool NISTPropertyBase::CheckFileNameLength(const string& fileNameR12, long maxFileNameLength)
		{
			if ((long)fileNameR12.length() > maxFileNameLength)
			{
				return false;
			}

			return true;



		}

		void NISTPropertyBase::SetCacheRefrigerantData(bool cacheRefrigerantData)
		{

		}

		void NISTPropertyBase::SetRefrigerant(Refrigerants refrigerant)
		{

			if ( refrigerant!=Refrigerants::UnknownRef )
			{
			
				/*string referenceOption = "DEF";*/

				long lError = 0;
				memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
				memset(m_pxLiquid.get(), 0, g_cnMaxNumberOfComponents);

				char referenceOption[g_cnLengthOfReference + 1] = { 0 };
				strcpy_s(referenceOption, "DEF");
				//////////////////////////////////////////////////////////////////////////

				//String^ fluidFilePathName = getFilePathName(rootFilePath, "Fluids");      // + "Fluids";
				//String^  mixtureFilePathName = getFilePathName(rootFilePath, "mixture");
				//String^ strFuildFileNames = String::Empty;
				//////////////////////////////////////////////////////////////////////////
				//<2> Get ".exe" Fold path.
				CHAR szDllDir[MAX_PATH * 2];
				memset(szDllDir, 0, MAX_PATH * 2);
				if (ERROR_SUCCESS != GetModuleFileNameA(NULL, szDllDir, MAX_PATH * 2))
				{
					//<3> The directory of "refprop.dll".
					CHAR *pLastSlash = strrchr(szDllDir, '\\');
					strncpy_s(szDllDir, szDllDir, pLastSlash - szDllDir);
					string strExeFoldPath = szDllDir;

					string strFuildFileNames("");
					string strmixturesFileName = (string)szDllDir + "\\HMX.BNC";
					//////////////////////////////////////////////////////////////////////////

					//////////////////////////////////////////////////////////////////////////
					switch (refrigerant)
					{
					case RefigerantProperties::NIST::UnknownRef:
						break;
					case RefigerantProperties::NIST::R12:
					{
						m_nNumberOfComponent = 1;
						strFuildFileNames = strExeFoldPath + "\\R12.fld";
						m_pxLiquid[0] = 1.0;
					}
						break;
					case RefigerantProperties::NIST::R114:
						break;
					case RefigerantProperties::NIST::R134:
					{
						m_nNumberOfComponent = 1;
						strFuildFileNames = strExeFoldPath + "\\R134.fld";
						m_pxLiquid[0] = 1.0;
					}
						break;
					case RefigerantProperties::NIST::R500:
						break;
					case RefigerantProperties::NIST::R410A:
					{
						m_nNumberOfComponent = 2;
						//String^ fileNameR32 = fluidFilePathName + "R32.fld";
						//CheckFileNameLength(fileNameR32, maxLengthOfFilePath);
						string fileNameR32 = strExeFoldPath + "R32.fld";
						strFuildFileNames = fileNameR32;

						/*String^ fileNameR125 = fluidFilePathName + "R125.fld";
						CheckFileNameLength(fileNameR125, maxLengthOfFilePath);*/

						string fileNameR125 = strExeFoldPath + "R32.fld";

						strFuildFileNames += "|" + fileNameR125;
						//strFuildFileNames += "|" +  fluidFilePathName + "R134a.fld";

						//xLiquid[0] = 0.5; //0.697615; .697614699375863
						//xLiquid[1] = 0.5; //0.302385; .302385300624138
 
						m_pxLiquid[0] = 0.5;
						m_pxLiquid[1] = 0.5;

						//String^ strMixtureFileName = mixtureFilePathName + "R410A.mix";
						string strMixtureFileName = strExeFoldPath = "\\R410A.mix";

						/*if (strMixtureFileName->Length > maxLengthOfFilePath)
						{
							throw (gcnew Exception(String::Format("File {0} does not exist", strMixtureFileName)));
						}*/

						char hFiles2[10000] = {0};
						char mixtureFileName[g_cnRefpropcharlength + 1] = {0};
						strcpy_s(mixtureFileName, strMixtureFileName.c_str());

					/*	IntPtr mixtureFileNamesPtr = Marshal::StringToHGlobalAnsi(strMixtureFileName);
						strcpy_s(mixtureFileName, (LPCSTR)mixtureFileNamesPtr.ToPointer());
						Marshal::FreeHGlobal(mixtureFileNamesPtr);

						IntPtr hFiles2Ptr = Marshal::StringToHGlobalAnsi(strFuildFileNames);
						strcpy_s(hFiles2, (LPCSTR)hFiles2Ptr.ToPointer());
						Marshal::FreeHGlobal(hFiles2Ptr);*/

						//double* xj =  new double[maxNumberOfComponents];

						//initializeDoubleArrayToZero(xMole, maxNumberOfComponents);
						memset(m_pxMole.get(), 0, g_cnMaxNumberOfComponents);

						long iNumberOfComponents = m_nNumberOfComponent;

						char mixturesFileName[g_cnRefpropcharlength + 1] = { 0 };
						strcpy_s(mixturesFileName, strmixturesFileName.c_str());

						//typedef void (__stdcall *fp_SETMIXdllTYPE)(char*,char*,char*,long &,char*,double *,long &,char*,long ,long ,long ,long ,long );
						NISTPropertyBase::SETMIXdll(mixtureFileName, mixturesFileName, referenceOption, iNumberOfComponents
							      , hFiles2, m_pxMole.get(), lError, m_pstrErrorBuff.get()
							      , 255L, 255L,  g_cnLengthOfReference, 10000L, 255L); //toDO What of meaning of those constants

						// Throw exception.
						if (lError!=0)
						{
							// Throw exception information. 
							throw(NISTRefpropException(lError, m_pstrErrorBuff.get()));
						}

					}
						break;
					case RefigerantProperties::NIST::WATER:
						break;
					case RefigerantProperties::NIST::R1233ZD:
					{
						m_nNumberOfComponent = 1;
						strFuildFileNames = strExeFoldPath + "\\R1233ZD.fld";
						m_pxLiquid[0] = 1.0;
					}
						break;
					case RefigerantProperties::NIST::R22:
					{
						m_nNumberOfComponent = 1;
						strFuildFileNames = strExeFoldPath + "\\R22.fld";
						m_pxLiquid[0] = 1.0;
					}
						break;
					case RefigerantProperties::NIST::R407C:
						break;
					case RefigerantProperties::NIST::R502:
						break;
					default:
						break;
					}
					//////////////////////////////////////////////////////////////////////////

			/*		char fuildFileNames[refpropcharlength*maxNumberOfComponents];

					{
						IntPtr fluidFileNamesPtr = Marshal::StringToHGlobalAnsi(strFuildFileNames);
						strcpy_s(fuildFileNames, (LPCSTR)fluidFileNamesPtr.ToPointer());
						Marshal::FreeHGlobal(fluidFileNamesPtr);
					}*/


					long iNumberOfComponent = m_nNumberOfComponent;
					//typedef void (__stdcall *fp_SETUPdllTYPE)(long &,char*,char*,char*,long &,char*,long ,long ,long ,long );
					

					char mixturesFileName[g_cnRefpropcharlength + 1] = { 0 };
					strcpy_s(mixturesFileName, strmixturesFileName.c_str());

					char fuildFileNames[g_cnRefpropcharlength + 1] = { 0 };
					strcpy_s(fuildFileNames, strFuildFileNames.c_str());

				

					SETUPdll(iNumberOfComponent, fuildFileNames
						                    , mixturesFileName, referenceOption
						                    , lError, m_pstrErrorBuff.get()
						,g_cnRefpropcharlength* g_cnMaxNumberOfComponents
						, g_cnRefpropcharlength,g_cnLengthOfReference
						,  g_cnMaxLengthOfErrorMessage);

					if (lError != 0) {
						
						// Throw exception information. 
						throw(NISTRefpropException(lError, m_pstrErrorBuff.get()));
					}

					/*initializeDoubleArrayToZero(xMole, maxNumberOfComponents);*/
					memset(m_pxMole.get(), 0, g_cnMaxNumberOfComponents);

					double temporary = 0;
					XMOLEdll(  m_pxLiquid.get() , m_pxMole.get(), temporary);
					m_nMolecularWeight = temporary;

					double hRef = 0.0;
					double sRef = 0.0;
					double Tref = 0.0;
					double pref = 0.0;

					NISTPropertyBase::SETREFdll(referenceOption, iNumberOfComponent
						             , m_pxMole.get(), hRef, sRef, Tref, pref, lError
						             , m_pstrErrorBuff.get(), 3L, 255L);

					if (lError != 0) {

						// Throw exception information. 
						throw(NISTRefpropException(lError, m_pstrErrorBuff.get()));

					}

				}

				
			}

			
		}

		//Refrigerants NISTPropertyBase::GetRefrigerant()
		//{

		//}

		/*MeasurementSystem NISTPropertyBase::GetUoMSystem()
		{
			return MeasurementSystem::SI;
		}*/

		double NISTPropertyBase::SaturatePressure(double temperatureKevin, RefrigerantPhases refrigerantPhase)
		{
			assert(SATTdll != NULL);

			double pressure = 0.0;
			long lRefrigerantPhase, lError;
			double dDensityLiquid, dDensityVapor;
			lRefrigerantPhase = (long)refrigerantPhase;
			//initializeDoubleArrayToZero(xLiquid, maxNumberOfComponents);
			//initializeDoubleArrayToZero(xVapor, maxNumberOfComponents);

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);

			SATTdll(temperatureKevin, m_pxMole.get(), lRefrigerantPhase
				, pressure, dDensityLiquid, dDensityVapor
				, m_pxLiquid.get(), m_pxVapor.get()
				, lError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			if (lError != 0) {

				// Throw exception information. 
				throw(NISTRefpropException(lError, m_pstrErrorBuff.get()));
			}

			return pressure;
		}

		double NISTPropertyBase::SaturateTemperature(double pressureKPA, RefrigerantPhases refrigerantPhase)
		{
			assert(SATPdll != NULL);

			double temperature = 0.0;
			long lError = 0;
			double densityLiquid, densityVapor;
			long iRefrigerantPhase = (long)refrigerantPhase;

			//initializeDoubleArrayToZero(xLiquid, maxNumberOfComponents);
			//initializeDoubleArrayToZero(xVapor, maxNumberOfComponents);

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			SATPdll(pressureKPA, m_pxMole.get(), iRefrigerantPhase
				, temperature, densityLiquid, densityVapor
				, m_pxLiquid.get(), m_pxVapor.get(), lError
				, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			if (lError != 0) {
				// Throw exception information. 
				throw(NISTRefpropException(lError, m_pstrErrorBuff.get()));
			}

			return temperature;
		}

		double NISTPropertyBase::Enthalpy(double temperatureKevin, double pressureKPA, double quantity)
		{
			assert(TPRHOdll != NULL);

			RefrigerantPhases phase;
			long kPhaseGuess;
			double enthalpy = 0;

			if (quantity < 0)
			{
				phase = RefrigerantPhases::SubcooledLiquid;
			}
			else if (quantity == 0.0)
			{
				phase = RefrigerantPhases::SaturatedLiquid;
			}
			else if (quantity >= 1.0)
			{
				phase = RefrigerantPhases::Vapor;
			}
			else
			{
				enthalpy = (1 - quantity) * Enthalpy(temperatureKevin, pressureKPA, 0.0) + quantity * Enthalpy(temperatureKevin, pressureKPA, 1.0);
			}

			double density;
			long   lError = 0;
			long kPhase = (long)phase;

			kPhaseGuess = kPhase;
			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			TPRHOdll(temperatureKevin, pressureKPA, m_pxMole.get()
				, kPhase, kPhaseGuess, density
				, lError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			enthalpy = Enthalpy(temperatureKevin, density);

			if (lError != 0)
			{
				// Throw exception information. 
				throw(NISTRefpropException(lError, m_pstrErrorBuff.get()));
			}
			return enthalpy;
		}

		double NISTPropertyBase::EnthalpyVapor(double temperatureKevin, double pressureKPA)
		{

			assert(TPRHOdll);

			long lError = 0;
			double enthalpy = 0;
			double density = 0.0;
			long iPhase = 2; //(long)RefrigerantPhases::Vapor;
			long iPhaseGuess = 0;  //iPhase;

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);

			TPRHOdll(temperatureKevin, pressureKPA, m_pxMole.get()
				, iPhase, iPhaseGuess, density
				, lError, m_pstrErrorBuff.get()
				, g_cnMaxLengthOfErrorMessage);

			if (lError != 0)
			{
				// Throw exception information. 
				throw(NISTRefpropException(lError, m_pstrErrorBuff.get()));
			}
			enthalpy = Enthalpy(temperatureKevin, density);

			return enthalpy;
		}

		double NISTPropertyBase::EnthalpyLiquid(double temperatureKevin, double pressureKPA)
		{
			assert(TPRHOdll);

			long lError = 0;
			double enthalpy = 0;
			double density = 0.0;
			long iPhase = 1; //(long)RefrigerantPhases::SubcooledLiquid;
			long iPhaseGuess = 0; //iPhase;


			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);

			TPRHOdll(temperatureKevin, pressureKPA, m_pxMole.get()
				, iPhase, iPhaseGuess, density
				, lError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			if (lError != 0)
			{
				// Throw exception information. 
				throw(NISTRefpropException(lError, m_pstrErrorBuff.get()));
			}
			enthalpy = Enthalpy(temperatureKevin, density);

			return enthalpy;
		}

		double NISTPropertyBase::TemperatureVapor(double pressure, double enthalpy)
		{


			double temperaure = 0.0;
			double density = 0.0;
			temperaure = SaturateTemperature(pressure, RefrigerantPhases::Vapor);


			PHFlash1(pressure, enthalpy, RefrigerantPhases::Vapor, temperaure, density);

			return temperaure;
		}

		double NISTPropertyBase::TemperatureLiquid(double pressure, double enthalpy)
		{


			double temperaure = 0.0;
			double density = 0.0;
			temperaure = SaturateTemperature(pressure, RefrigerantPhases::Liquid);
			PHFlash1(pressure, enthalpy, RefrigerantPhases::Liquid, temperaure, density);
			return temperaure;
		}

		double NISTPropertyBase::TemperatureTwoPhase(double pressure, double enthalpy, double quantity)
		{
			assert(PHFLSHdll);

			double temperaure = 0.0;
			double densityMole, densityLiquidMole, densityVaporMole, UJ, SJ, Cv, Cp, w;

			long lError(0);
			double enthalpyMole = convertWeightBaseToMoleBase(enthalpy);

			double x0[g_cnMaxNumberOfComponents];
			memset(x0, 0, g_cnMaxNumberOfComponents);

			double y0[g_cnMaxNumberOfComponents];
			memset(y0, 0, g_cnMaxNumberOfComponents);

			/*initializeDoubleArrayToZero(x0, maxNumberOfComponents);
			initializeDoubleArrayToZero(y0, maxNumberOfComponents);*/

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);

			PHFLSHdll(pressure, enthalpyMole, m_pxMole.get()
				, temperaure, densityMole, densityLiquidMole
				, densityVaporMole, x0, y0
				, quantity, UJ, SJ, Cv, Cp, w, lError
				, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			// PHFLSHdll(p, h, x(1), t, d, Dl, Dv, xliq(1), xvap(1), q, e, s, Cvcalc, Cpcalc, w, ierr, herr, 255&)

			if (lError != 0)
			{
				// Throw exception information. 
				throw(NISTRefpropException(lError, m_pstrErrorBuff.get()));
			}
			return temperaure;
		}

		double NISTPropertyBase::Quantity(double pressure, double enthalpy)
		{
			assert(PHFLSHdll);

			double temperaure = 0.0;
			double densityMole, densityLiquidMole, densityVaporMole, UJ, SJ, Cv, Cp, w;
			double quantity = 0.0;

			long iError;
			double enthalpyMole = convertWeightBaseToMoleBase(enthalpy);
			double x0[g_cnMaxNumberOfComponents];
			memset(x0, 0, g_cnMaxNumberOfComponents);

			double y0[g_cnMaxNumberOfComponents];
			memset(y0, 0, g_cnMaxNumberOfComponents);

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			PHFLSHdll(pressure, enthalpyMole, m_pxMole.get()
				, temperaure, densityMole, densityLiquidMole
				, densityVaporMole, x0, y0, quantity
				, UJ, SJ, Cv, Cp, w
				, iError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);



			if (quantity > 0.0 && quantity < 1.0)
			{
				assert(QMASSdll != NULL);

				double qkg = 0.0;
				double wliq = 0.0;
				double wvap = 0.0;
				double xlkg[g_cnMaxNumberOfComponents];
				memset(xlkg, 0, g_cnMaxNumberOfComponents);

				double xvkg[g_cnMaxNumberOfComponents];
				memset(xvkg, 0, g_cnMaxNumberOfComponents);


				QMASSdll(quantity, x0, y0
					, qkg, xlkg, xvkg
					, wliq, wvap, iError
					, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

				quantity = qkg;
			}
			// PHFLSHdll(p, h, x(1), t, d, Dl, Dv, xliq(1), xvap(1), q, e, s, Cvcalc, Cpcalc, w, ierr, herr, 255&)

			if (iError != 0)
			{
				/*throw (gcnew Exception(gcnew String(strError)));*/
			}
			return quantity;
		}

		double NISTPropertyBase::DensityVapor(double temperatureKevin, double pressureKPA)
		{
			assert(TPRHOdll != NULL);

			long iError = 0;
			//double dd = 0.0;
			long iPhase = 2; //(long)RefrigerantPhases::Vapor;
			long iPhaseGuess = 0;  //iPhase;

			double d = 0.0;

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);

			TPRHOdll(temperatureKevin, pressureKPA, m_pxMole.get()
				, iPhase, iPhaseGuess, d
				, iError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			if (iError != 0)
			{

			}

			return (d * m_nMolecularWeight);
		}

		double NISTPropertyBase::DensityLiquid(double temperatureKevin, double pressureKPA)
		{
			assert(TPRHOdll != NULL);

			long iError = 0;
			//double dd = 0.0;
			long iPhase = 1; //(long)RefrigerantPhases::Liquid;
			long iPhaseGuess = 0;  //iPhase;

			double d = 0.0;

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			TPRHOdll(temperatureKevin, pressureKPA, m_pxMole.get()
				, iPhase, iPhaseGuess, d, iError
				, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			if (iError != 0)
			{
				/*throw (gcnew Exception(gcnew String(strError)));*/
			}

			return (d * m_nMolecularWeight);
		}

		double NISTPropertyBase::EnthalpyByPressureEntropy(double pressurekPA, double entropy)
		{
			assert(PSFLSHdll != NULL);

			double temperaure = 0.0;
			double densityMole, densityLiquidMole, densityVaporMole, e, h, Cv, Cp, w;
			double quantity = 0.0;

			long iError;
			double x0[g_cnMaxNumberOfComponents];
			memset(x0, 0, g_cnMaxNumberOfComponents);

			double y0[g_cnMaxNumberOfComponents];
			memset(y0, 0, g_cnMaxNumberOfComponents);


			double s = convertWeightBaseToMoleBase(entropy);

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			PSFLSHdll(pressurekPA, s, m_pxMole.get()
				, temperaure, densityMole, densityLiquidMole
				, densityVaporMole, x0, y0
				, quantity, e, h, Cv, Cp, w
				, iError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			if (iError != 0)
			{
				////////
				////Test: 输出数组值
				//::OutputDebugStringA("xMole end---\n");
				//for (size_t i = 0; i < maxNumberOfComponents; i++)
				//{
				//	::OutputDebugStringA(std::to_string(xMole[i]).c_str());
				//	::OutputDebugStringA("\t");
				//}
				//::OutputDebugStringA("\n");
				////Test: end
				::OutputDebugStringA("PSFLSHdll Error begin---\n");

				double dTMP = convertMoleBaseToWeightBase(h);
				::OutputDebugStringA(("dTMP20181202:" + std::to_string(dTMP) + "\n").c_str());
				::OutputDebugStringA(("molecularWeight:" + std::to_string(m_nMolecularWeight) + "\n").c_str());

				::OutputDebugStringA(("pressurekPA11:" + std::to_string(pressurekPA) + "\n").c_str());


				::OutputDebugStringA(("s:" + std::to_string(s) + "\n").c_str());


				////////
				//Test: xMole 数组值输出 
				::OutputDebugStringA("xMole Begin\n");
				for (size_t i = 0; i < g_cnMaxNumberOfComponents; i++)
				{

					::OutputDebugStringA(std::to_string(m_pxMole[i]).c_str());
					::OutputDebugStringA("\t");
				}
				::OutputDebugStringA("xMole End\n");
				//Test: end
				//////

				::OutputDebugStringA(("temperaure:" + std::to_string(temperaure) + "\n").c_str());

				::OutputDebugStringA(("densityMole:" + std::to_string(densityMole) + "\n").c_str());

				::OutputDebugStringA(("densityLiquidMole:" + std::to_string(densityLiquidMole) + "\n").c_str());

				::OutputDebugStringA(("densityVaporMole:" + std::to_string(densityVaporMole) + "\n").c_str());

				::OutputDebugStringA("xLiquid Begin---\n");
				for (size_t i = 0; i < g_cnMaxNumberOfComponents; ++i)
				{
					::OutputDebugStringA(std::to_string(/*x0*/m_pxLiquid[i]).c_str());
					::OutputDebugStringA("\t");
				}
				::OutputDebugStringA("xLiquid End---");

				::OutputDebugStringA("xVapor Begin---");
				for (size_t i = 0; i < g_cnMaxNumberOfComponents; ++i)
				{
					::OutputDebugStringA(std::to_string(/*y0*/m_pxVapor[i]).c_str());
					::OutputDebugStringA("\t");
				}
				::OutputDebugStringA("xVapor End---");



				::OutputDebugStringA(("quantity:" + std::to_string(quantity) + "\n").c_str());

				::OutputDebugStringA(("e:" + std::to_string(e) + "\n").c_str());

				::OutputDebugStringA(("h:" + std::to_string(h) + "\n").c_str());

				::OutputDebugStringA(("Cv:" + std::to_string(Cv) + "\n").c_str());

				::OutputDebugStringA(("Cp:" + std::to_string(Cp) + "\n").c_str());

				::OutputDebugStringA(("w:" + std::to_string(w) + "\n").c_str());

				::OutputDebugStringA(("iError:" + std::to_string(iError) + "\n").c_str());


				::OutputDebugStringA("strError:\n");
				::OutputDebugStringA(m_pstrErrorBuff.get());

				::OutputDebugStringA("PSFLSHdll Error end---");
				::OutputDebugStringA("\n");
				//////

				/*throw (gcnew Exception(gcnew String(strError)));*/

			}

			return convertMoleBaseToWeightBase(h);
		}

		double NISTPropertyBase::EnthalpyByPressureEntropy1(double pressurekPA, double entropy)
		{
			assert(PSFLSHdll != NULL);

			double temperaure = 0.0;
			double densityMole, densityLiquidMole, densityVaporMole, e, h, Cv, Cp, w;
			double quantity = 0.0;

			long iError;
			double x0[g_cnMaxNumberOfComponents];
			memset(x0, 0, g_cnMaxNumberOfComponents);

			double y0[g_cnMaxNumberOfComponents];
			memset(y0, 0, g_cnMaxNumberOfComponents);


			double s = convertWeightBaseToMoleBase(entropy);

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			PSFLSHdll(pressurekPA, s, m_pxMole.get()
				, temperaure, densityMole, densityLiquidMole
				, densityVaporMole, x0, y0
				, quantity, e, h, Cv, Cp
				, w, iError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			///////////////////////////
			//[luowenmin 2018/12/02] 
			if (0 != iError)
			{
				/*throw (gcnew Exception(gcnew String(strError)));*/
			}
			////////////////////////////

			return convertMoleBaseToWeightBase(h);
		}

		double NISTPropertyBase::EntropyVapor(double temperatureKevin, double pressureKPA)
		{
			assert(TPRHOdll != NULL
				&&THERMdll != NULL);


			long iError = 0;
			//double dd = 0.0;
			long iPhase = 2; //(long)RefrigerantPhases::Vapor;
			long iPhaseGuess = 0;  //iPhase;
			double d = 0.0;

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			TPRHOdll(temperatureKevin, pressureKPA, m_pxMole.get()
				, iPhase, iPhaseGuess, d
				, iError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			if (iError != 0)
			{

			}

			double pp, e, h, s, cv, cp, w, hjt;

			THERMdll(temperatureKevin, d, m_pxMole.get(), pp, e, h, s, cv, cp, w, hjt);

			return convertMoleBaseToWeightBase(s);
		}

		double NISTPropertyBase::CalcLiquidPropertiesByTemperaturePressure(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density)
		{
			assert(THERMdll != NULL
				&&NULL != TPRHOdll);

			long iError = 0;
			double d = 0.0;
			long iPhase = 1; //(long)RefrigerantPhases::SubcooledLiquid;
			long iPhaseGuess = 0; //iPhase;
		/*	char strError[maxLengthOfErrorMessage + 1];*/

		// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			TPRHOdll(temperatureKevin, pressureKPA, m_pxMole.get()
				, iPhase, iPhaseGuess, d
				, iError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			if (iError != 0)
			{
				/*throw (gcnew Exception(gcnew String(strError)));*/
			}
			density = convertMoleBaseToWeightBase(d);
			//enthalpy = Enthalpy(temperaure, density);

			double pp, e, h, s, cv, cp, w, hjt;

			THERMdll(temperatureKevin, d, m_pxMole.get()
				, pp, e, h, s, cv, cp, w, hjt);

			enthalpy = convertMoleBaseToWeightBase(h);
			entropy = convertMoleBaseToWeightBase(s);

			return enthalpy;

		}

		double NISTPropertyBase::CalcVaporPropertiesByTemperaturePressure1(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density, double/*%*/ cv1, double/*%*/ cp1, double/*%*/  w1)
		{
			assert(NULL != THERMdll
				&&NULL != TPRHOdll);

			long iError = 0;
			//double dd = 0.0;
			long iPhase = 2; //(long)RefrigerantPhases::Vapor;
			long iPhaseGuess = 0;  //iPhase;
			double d = 0.0;

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			TPRHOdll(temperatureKevin, pressureKPA, m_pxMole.get()
				, iPhase, iPhaseGuess, d, iError
				, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			if (iError != 0)
			{

			}

			density = convertMoleBaseToWeightBase(d);
			//enthalpy = Enthalpy(temperaure, density);

			double pp, e, h, s, cv, cp, w, hjt;
			THERMdll(temperatureKevin, d, m_pxMole.get()
				, pp, e, h, s, cv
				, cp, w, hjt);

			enthalpy = convertMoleBaseToWeightBase(h);
			entropy = convertMoleBaseToWeightBase(s);
			cv1 = convertMoleBaseToWeightBase(cv);
			cp1 = convertMoleBaseToWeightBase(cp);
			density = convertWeightBaseToMoleBase(d);
			w1 = w;

			return enthalpy;
		}

		double NISTPropertyBase::CalcVaporPropertiesByTemperaturePressure(double temperatureKevin, double pressureKPA, double/*%*/ enthalpy, double/*%*/ entropy, double/*%*/ density)
		{
			assert(NULL != TPRHOdll
				&& NULL != THERMdll);

			long iError = 0;
			//double dd = 0.0;
			long iPhase = 2; //(long)RefrigerantPhases::Vapor;
			long iPhaseGuess = 0;  //iPhase;
	/*		char strError[g_cnMaxLengthOfErrorMessage + 1];*/
			double d = 0.0;

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			TPRHOdll(temperatureKevin, pressureKPA, m_pxMole.get()
				, iPhase, iPhaseGuess, d
				, iError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			if (iError != 0)
			{
				/*throw (gcnew Exception(gcnew String(strError)));*/
			}
			density = convertMoleBaseToWeightBase(d);
			//enthalpy = Enthalpy(temperaure, density);

			double pp, e, h, s, cv, cp, w, hjt;

			THERMdll(temperatureKevin, d, m_pxMole.get(), pp, e, h, s, cv, cp, w, hjt);
			enthalpy = convertMoleBaseToWeightBase(h);
			entropy = convertMoleBaseToWeightBase(s);

			return enthalpy;
		}

		double NISTPropertyBase::CalcVaporPropertiesByPressureEntropy(double pressureKPA, double entropy, double/*%*/ temperatureKevin, double/*%*/ enthalpy, double/*%*/ density)
		{

			assert(NULL != PSFLSHdll);

			long iError;
			double x0[g_cnMaxNumberOfComponents];
			double y0[g_cnMaxNumberOfComponents];

			/*	initializeDoubleArrayToZero(x0, maxNumberOfComponents);
				initializeDoubleArrayToZero(y0, maxNumberOfComponents);*/

			double s = convertWeightBaseToMoleBase(entropy);

			double temperaure = 0.0;
			double densityMole, densityLiquidMole, densityVaporMole, e, h, Cv, Cp, w;
			double quantity = 0.0;

			h = convertWeightBaseToMoleBase(enthalpy);
			densityMole = convertWeightBaseToMoleBase(density);
			temperaure = temperatureKevin;

			// Resert error buffer.
			::memset(m_pstrErrorBuff.get(), 0, g_cnMaxLengthOfErrorMessage);
			PSFLSHdll(pressureKPA, s, m_pxMole.get(), temperaure
				, densityMole, densityLiquidMole, densityVaporMole
				, x0, y0, quantity, e, h, Cv, Cp
				, w, iError, m_pstrErrorBuff.get(), g_cnMaxLengthOfErrorMessage);

			///////////////////////////
			//[luowenmin 2018/12/02] 
			if (0 != iError)
			{
				/*throw (gcnew Exception(gcnew String(strError)));*/
			}
			////////////////////////////

			enthalpy = convertMoleBaseToWeightBase(h);
			entropy = convertMoleBaseToWeightBase(s);
			density = convertMoleBaseToWeightBase(densityMole);

			temperatureKevin = temperaure;
			return enthalpy;
		}

		//
	}
};