using System.Windows.Forms;
//NIST Refprop.dll test
using RefigerantProperties.NIST;

namespace WindowsFormsApplication1
{

    public partial class Form1 : Form
    {
        private void NISTRefpropTest_1(NISTProperty NISTInstance)
        {

            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.477957, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.477957, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.477943, 191.298353);
            NISTInstance.SaturateTemperature(190.398353, 10);
            NISTInstance.SaturatePressure(309.334553, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.334553, 190.398361, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SaturateTemperature(108.453329, 1);
            NISTInstance.EnthalpyLiquid(293.271850, 108.453329);
            NISTInstance.EnthalpyVapor(293.271850, 108.453329);
            NISTInstance.SaturatePressure(305.986098, 5);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.477957, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.477957, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.477943, 191.298353);
            NISTInstance.SaturateTemperature(190.398353, 10);
            NISTInstance.SaturatePressure(309.334553, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.334553, 190.398361, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SaturateTemperature(108.453329, 1);
            NISTInstance.EnthalpyLiquid(293.271850, 108.453329);
            NISTInstance.EnthalpyVapor(293.271850, 108.453329);
            NISTInstance.SaturatePressure(305.986098, 5);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(108.453329, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(190.398366, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(157.115943, 1.751088);
            NISTInstance.SaturateTemperature(169.185532, 1);
            NISTInstance.EnthalpyLiquid(305.792540, 169.185532);
            NISTInstance.EnthalpyVapor(305.792540, 169.185532);
            NISTInstance.EnthalpyLiquid(305.986102, 191.298361);
            NISTInstance.TemperatureVapor(169.185532, 426.116150);
            NISTInstance.SaturateTemperature(169.185532, 10);
            NISTInstance.EntropyVapor(303.582196, 169.185532);
            NISTInstance.EnthalpyByPressureEntropy(190.398366, 1.746667);
            NISTInstance.TemperatureVapor(190.398366, 436.020094);
            NISTInstance.SaturateTemperature(190.398366, 10);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.506067, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.506067, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.506057, 191.475151);
            NISTInstance.SaturateTemperature(190.575151, 10);
            NISTInstance.SaturatePressure(309.362764, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.362764, 190.575165, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(190.575164, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(157.460976, 1.751088);
            NISTInstance.SaturateTemperature(169.695282, 1);
            NISTInstance.EnthalpyLiquid(305.881571, 169.695282);
            NISTInstance.EnthalpyVapor(305.881571, 169.695282);
            NISTInstance.EnthalpyLiquid(306.070873, 191.475159);
            NISTInstance.TemperatureVapor(169.695282, 426.156006);
            NISTInstance.SaturateTemperature(169.695282, 10);
            NISTInstance.EntropyVapor(303.645462, 169.695282);
            NISTInstance.EnthalpyByPressureEntropy(190.575164, 1.746619);
            NISTInstance.TemperatureVapor(190.575164, 435.539104);
            NISTInstance.SaturateTemperature(190.575164, 10);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.423398, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.423398, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.423384, 190.955553);
            NISTInstance.SaturateTemperature(190.055553, 10);
            NISTInstance.SaturatePressure(309.279795, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.279795, 190.055573, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(190.055567, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(156.450459, 1.751088);
            NISTInstance.SaturateTemperature(168.207626, 1);
            NISTInstance.EnthalpyLiquid(305.621160, 168.207626);
            NISTInstance.EnthalpyVapor(305.621160, 168.207626);
            NISTInstance.EnthalpyLiquid(305.823646, 190.955561);
            NISTInstance.TemperatureVapor(168.207626, 426.039032);
            NISTInstance.SaturateTemperature(168.207626, 10);
            NISTInstance.EntropyVapor(303.460003, 168.207626);
            NISTInstance.EnthalpyByPressureEntropy(190.055567, 1.746759);
            NISTInstance.TemperatureVapor(190.055567, 435.514051);
            NISTInstance.SaturateTemperature(190.055567, 10);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.415599, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.415599, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.415598, 190.906593);
            NISTInstance.SaturateTemperature(190.006593, 10);
            NISTInstance.SaturatePressure(309.271966, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.271966, 190.006592, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(190.006593, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(156.355768, 1.751088);
            NISTInstance.SaturateTemperature(168.069031, 1);
            NISTInstance.EnthalpyLiquid(305.596808, 168.069031);
            NISTInstance.EnthalpyVapor(305.596808, 168.069031);
            NISTInstance.EnthalpyLiquid(305.800690, 190.906601);
            NISTInstance.TemperatureVapor(168.069031, 426.028046);
            NISTInstance.SaturateTemperature(168.069031, 10);
            NISTInstance.EntropyVapor(303.442613, 168.069031);
            NISTInstance.EnthalpyByPressureEntropy(190.006593, 1.746772);
            NISTInstance.TemperatureVapor(190.006593, 435.552361);
            NISTInstance.SaturateTemperature(190.006593, 10);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.412446, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.412446, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.412453, 190.886801);
            NISTInstance.SaturateTemperature(189.986801, 10);
            NISTInstance.SaturatePressure(309.268800, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.268800, 189.986801, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(189.986802, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(156.317518, 1.751088);
            NISTInstance.SaturateTemperature(168.013092, 1);
            NISTInstance.EnthalpyLiquid(305.586976, 168.013092);
            NISTInstance.EnthalpyVapor(305.586976, 168.013092);
            NISTInstance.EnthalpyLiquid(305.791433, 190.886810);
            NISTInstance.TemperatureVapor(168.013092, 426.023621);
            NISTInstance.SaturateTemperature(168.013092, 10);
            NISTInstance.EntropyVapor(303.435604, 168.013092);
            NISTInstance.EnthalpyByPressureEntropy(189.986802, 1.746778);
            NISTInstance.TemperatureVapor(189.986802, 435.565691);
            NISTInstance.SaturateTemperature(189.986802, 10);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.410818, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.410818, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.410813, 190.876583);
            NISTInstance.SaturateTemperature(189.976583, 10);
            NISTInstance.SaturatePressure(309.267168, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.267168, 189.976593, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(189.976597, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(156.297811, 1.751088);
            NISTInstance.SaturateTemperature(167.984283, 1);
            NISTInstance.EnthalpyLiquid(305.581911, 167.984283);
            NISTInstance.EnthalpyVapor(305.581911, 167.984283);
            NISTInstance.EnthalpyLiquid(305.786618, 190.876591);
            NISTInstance.TemperatureVapor(167.984283, 426.021332);
            NISTInstance.SaturateTemperature(167.984283, 10);
            NISTInstance.EntropyVapor(303.431983, 167.984283);
            NISTInstance.EnthalpyByPressureEntropy(189.976597, 1.746780);
            NISTInstance.TemperatureVapor(189.976597, 435.572222);
            NISTInstance.SaturateTemperature(189.976597, 10);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.409970, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.409970, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.409986, 190.871257);
            NISTInstance.SaturateTemperature(189.971257, 10);
            NISTInstance.SaturatePressure(309.266316, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.266316, 189.971268, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(189.971271, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(156.287516, 1.751088);
            NISTInstance.SaturateTemperature(167.969223, 1);
            NISTInstance.EnthalpyLiquid(305.579263, 167.969223);
            NISTInstance.EnthalpyVapor(305.579263, 167.969223);
            NISTInstance.EnthalpyLiquid(305.784177, 190.871265);
            NISTInstance.TemperatureVapor(167.969223, 426.020111);
            NISTInstance.SaturateTemperature(167.969223, 10);
            NISTInstance.EntropyVapor(303.430062, 167.969223);
            NISTInstance.EnthalpyByPressureEntropy(189.971271, 1.746782);
            NISTInstance.TemperatureVapor(189.971271, 435.575470);
            NISTInstance.SaturateTemperature(189.971271, 10);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.409564, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.409564, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.409575, 190.868706);
            NISTInstance.SaturateTemperature(189.968706, 10);
            NISTInstance.SaturatePressure(309.265909, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.265909, 189.968719, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(189.968719, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(156.282596, 1.751088);
            NISTInstance.SaturateTemperature(167.962036, 1);
            NISTInstance.EnthalpyLiquid(305.577999, 167.962036);
            NISTInstance.EnthalpyVapor(305.577999, 167.962036);
            NISTInstance.EnthalpyLiquid(305.782990, 190.868714);
            NISTInstance.TemperatureVapor(167.962036, 426.019562);
            NISTInstance.SaturateTemperature(167.962036, 10);
            NISTInstance.EntropyVapor(303.429184, 167.962036);
            NISTInstance.EnthalpyByPressureEntropy(189.968719, 1.746782);
            NISTInstance.TemperatureVapor(189.968719, 435.577192);
            NISTInstance.SaturateTemperature(189.968719, 10);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.409360, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.409360, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.409367, 190.867430);
            NISTInstance.SaturateTemperature(189.967430, 10);
            NISTInstance.SaturatePressure(309.265706, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.265706, 189.967438, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(189.967444, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(156.280137, 1.751088);
            NISTInstance.SaturateTemperature(167.958435, 1);
            NISTInstance.EnthalpyLiquid(305.577366, 167.958435);
            NISTInstance.EnthalpyVapor(305.577366, 167.958435);
            NISTInstance.EnthalpyLiquid(305.782380, 190.867439);
            NISTInstance.TemperatureVapor(167.958435, 426.019257);
            NISTInstance.SaturateTemperature(167.958435, 10);
            NISTInstance.EntropyVapor(303.428709, 167.958435);
            NISTInstance.EnthalpyByPressureEntropy(189.967444, 1.746783);
            NISTInstance.TemperatureVapor(189.967444, 435.578018);
            NISTInstance.SaturateTemperature(189.967444, 10);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.409258, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.409258, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.409261, 190.866799);
            NISTInstance.SaturateTemperature(189.966799, 10);
            NISTInstance.SaturatePressure(309.265604, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.265604, 189.966812, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(189.966812, 1.751088);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.477957, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(309.477957, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.DensityVapor(309.477943, 191.298353);
            NISTInstance.SaturateTemperature(190.398353, 10);
            NISTInstance.SaturatePressure(309.334553, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(309.334553, 190.398361, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SaturatePressure(279.685630, 2);
            NISTInstance.DensityVapor(279.685630, 63.406392);
            NISTInstance.SaturateTemperature(61.776392, 10);
            NISTInstance.SaturatePressure(279.064646, 2);
            NISTInstance.CalcVaporPropertiesByTemperaturePressure1(279.620201, 61.776394, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
            NISTInstance.SaturateTemperature(108.453329, 1);
            NISTInstance.EnthalpyLiquid(293.271850, 108.453329);
            NISTInstance.EnthalpyVapor(293.271850, 108.453329);
            NISTInstance.SaturatePressure(305.986098, 5);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.SetRefrigerant(6);
            NISTInstance.EnthalpyByPressureEntropy(108.453329, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(190.398366, 1.751088);
            NISTInstance.EnthalpyByPressureEntropy(116.624090, 1.751088);
            // PSFLSHdll Error begin---	
            // dTMP:0.000000	
            // molecularWeight:130.496190	
            // pressurekPA11:116.624090	
            // s:228.510315	
            // xMole Begin	
            // 1.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	


            // xMole End	
            // temperaure:0.000000	
            // densityMole:187.053123	
            // densityLiquidMole:0.000000	
            // densityVaporMole:0.000000	
            // xLiquid Begin	
            // 1.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	

            // 0.000000	
            // 0.000000	
            // xLiquid End	
            // xVapor Begin	
            // 1.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	

            // -6277438562204192200000000000000000000000000000000000000000000000000.000000	


            // xVapor End	
            // quantity:999.000000	
            // e:3.501247	
            // h:0.000000	
            // Cv:1157625.000000	
            // Cp:0.000001	
            // w:2.122018	
            // iError:248	
            // strError:	
            // [PSFLSH error 248] single-phase iteration did not converge, T, deltaT =         NaN 0.32813E+21 K.	
            // PSFLSHdll Error end---	

        }
    }
}