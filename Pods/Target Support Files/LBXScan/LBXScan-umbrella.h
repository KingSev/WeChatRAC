#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "LBXScanNative.h"
#import "LBXZBarWrapper.h"
#import "LBXZXCapture.h"
#import "LBXZXCaptureDelegate.h"
#import "ZXAztecDecoder.h"
#import "ZXAztecDetector.h"
#import "ZXAztecBinaryShiftToken.h"
#import "ZXAztecCode.h"
#import "ZXAztecEncoder.h"
#import "ZXAztecHighLevelEncoder.h"
#import "ZXAztecSimpleToken.h"
#import "ZXAztecState.h"
#import "ZXAztecToken.h"
#import "ZXAztecDetectorResult.h"
#import "ZXAztecReader.h"
#import "ZXAztecWriter.h"
#import "ZXingObjCAztec.h"
#import "ZXAbstractDoCoMoResultParser.h"
#import "ZXAddressBookAUResultParser.h"
#import "ZXAddressBookDoCoMoResultParser.h"
#import "ZXAddressBookParsedResult.h"
#import "ZXBizcardResultParser.h"
#import "ZXBookmarkDoCoMoResultParser.h"
#import "ZXCalendarParsedResult.h"
#import "ZXEmailAddressParsedResult.h"
#import "ZXEmailAddressResultParser.h"
#import "ZXEmailDoCoMoResultParser.h"
#import "ZXExpandedProductParsedResult.h"
#import "ZXExpandedProductResultParser.h"
#import "ZXGeoParsedResult.h"
#import "ZXGeoResultParser.h"
#import "ZXISBNParsedResult.h"
#import "ZXISBNResultParser.h"
#import "ZXParsedResult.h"
#import "ZXParsedResultType.h"
#import "ZXProductParsedResult.h"
#import "ZXProductResultParser.h"
#import "ZXResultParser.h"
#import "ZXSMSMMSResultParser.h"
#import "ZXSMSParsedResult.h"
#import "ZXSMSTOMMSTOResultParser.h"
#import "ZXSMTPResultParser.h"
#import "ZXTelParsedResult.h"
#import "ZXTelResultParser.h"
#import "ZXTextParsedResult.h"
#import "ZXURIParsedResult.h"
#import "ZXURIResultParser.h"
#import "ZXURLTOResultParser.h"
#import "ZXVCardResultParser.h"
#import "ZXVEventResultParser.h"
#import "ZXVINParsedResult.h"
#import "ZXVINResultParser.h"
#import "ZXWifiParsedResult.h"
#import "ZXWifiResultParser.h"
#import "ZXCapture.h"
#import "ZXCaptureDelegate.h"
#import "ZXCGImageLuminanceSource.h"
#import "ZXImage.h"
#import "ZXMathUtils.h"
#import "ZXMonochromeRectangleDetector.h"
#import "ZXWhiteRectangleDetector.h"
#import "ZXGenericGF.h"
#import "ZXGenericGFPoly.h"
#import "ZXReedSolomonDecoder.h"
#import "ZXReedSolomonEncoder.h"
#import "ZXBitArray.h"
#import "ZXBitMatrix.h"
#import "ZXBitSource.h"
#import "ZXBoolArray.h"
#import "ZXByteArray.h"
#import "ZXCharacterSetECI.h"
#import "ZXDecoderResult.h"
#import "ZXDefaultGridSampler.h"
#import "ZXDetectorResult.h"
#import "ZXGlobalHistogramBinarizer.h"
#import "ZXGridSampler.h"
#import "ZXHybridBinarizer.h"
#import "ZXIntArray.h"
#import "ZXPerspectiveTransform.h"
#import "ZXStringUtils.h"
#import "ZXBarcodeFormat.h"
#import "ZXBinarizer.h"
#import "ZXBinaryBitmap.h"
#import "ZXByteMatrix.h"
#import "ZXDecodeHints.h"
#import "ZXDimension.h"
#import "ZXEncodeHints.h"
#import "ZXErrors.h"
#import "ZXingObjCCore.h"
#import "ZXInvertedLuminanceSource.h"
#import "ZXLuminanceSource.h"
#import "ZXPlanarYUVLuminanceSource.h"
#import "ZXReader.h"
#import "ZXResult.h"
#import "ZXResultMetadataType.h"
#import "ZXResultPoint.h"
#import "ZXResultPointCallback.h"
#import "ZXRGBLuminanceSource.h"
#import "ZXWriter.h"
#import "ZXDataMatrixBitMatrixParser.h"
#import "ZXDataMatrixDataBlock.h"
#import "ZXDataMatrixDecodedBitStreamParser.h"
#import "ZXDataMatrixDecoder.h"
#import "ZXDataMatrixVersion.h"
#import "ZXDataMatrixDetector.h"
#import "ZXDataMatrixASCIIEncoder.h"
#import "ZXDataMatrixBase256Encoder.h"
#import "ZXDataMatrixC40Encoder.h"
#import "ZXDataMatrixDefaultPlacement.h"
#import "ZXDataMatrixEdifactEncoder.h"
#import "ZXDataMatrixEncoder.h"
#import "ZXDataMatrixEncoderContext.h"
#import "ZXDataMatrixErrorCorrection.h"
#import "ZXDataMatrixHighLevelEncoder.h"
#import "ZXDataMatrixSymbolInfo.h"
#import "ZXDataMatrixSymbolInfo144.h"
#import "ZXDataMatrixTextEncoder.h"
#import "ZXDataMatrixX12Encoder.h"
#import "ZXDataMatrixReader.h"
#import "ZXDataMatrixWriter.h"
#import "ZXingObjCDataMatrix.h"
#import "ZXMaxiCodeBitMatrixParser.h"
#import "ZXMaxiCodeDecodedBitStreamParser.h"
#import "ZXMaxiCodeDecoder.h"
#import "ZXingObjCMaxiCode.h"
#import "ZXMaxiCodeReader.h"
#import "ZXByQuadrantReader.h"
#import "ZXGenericMultipleBarcodeReader.h"
#import "ZXMultipleBarcodeReader.h"
#import "ZXAbstractExpandedDecoder.h"
#import "ZXAI013103decoder.h"
#import "ZXAI01320xDecoder.h"
#import "ZXAI01392xDecoder.h"
#import "ZXAI01393xDecoder.h"
#import "ZXAI013x0x1xDecoder.h"
#import "ZXAI013x0xDecoder.h"
#import "ZXAI01AndOtherAIs.h"
#import "ZXAI01decoder.h"
#import "ZXAI01weightDecoder.h"
#import "ZXAnyAIDecoder.h"
#import "ZXRSSExpandedBlockParsedResult.h"
#import "ZXRSSExpandedCurrentParsingState.h"
#import "ZXRSSExpandedDecodedChar.h"
#import "ZXRSSExpandedDecodedInformation.h"
#import "ZXRSSExpandedDecodedNumeric.h"
#import "ZXRSSExpandedDecodedObject.h"
#import "ZXRSSExpandedFieldParser.h"
#import "ZXRSSExpandedGeneralAppIdDecoder.h"
#import "ZXBitArrayBuilder.h"
#import "ZXRSSExpandedPair.h"
#import "ZXRSSExpandedReader.h"
#import "ZXRSSExpandedRow.h"
#import "ZXAbstractRSSReader.h"
#import "ZXRSS14Reader.h"
#import "ZXRSSDataCharacter.h"
#import "ZXRSSFinderPattern.h"
#import "ZXRSSPair.h"
#import "ZXRSSUtils.h"
#import "ZXCodaBarReader.h"
#import "ZXCodaBarWriter.h"
#import "ZXCode128Reader.h"
#import "ZXCode128Writer.h"
#import "ZXCode39Reader.h"
#import "ZXCode39Writer.h"
#import "ZXCode93Reader.h"
#import "ZXEAN13Reader.h"
#import "ZXEAN13Writer.h"
#import "ZXEAN8Reader.h"
#import "ZXEAN8Writer.h"
#import "ZXEANManufacturerOrgSupport.h"
#import "ZXingObjCOneD.h"
#import "ZXITFReader.h"
#import "ZXITFWriter.h"
#import "ZXMultiFormatOneDReader.h"
#import "ZXMultiFormatUPCEANReader.h"
#import "ZXOneDimensionalCodeWriter.h"
#import "ZXOneDReader.h"
#import "ZXUPCAReader.h"
#import "ZXUPCAWriter.h"
#import "ZXUPCEANExtension2Support.h"
#import "ZXUPCEANExtension5Support.h"
#import "ZXUPCEANExtensionSupport.h"
#import "ZXUPCEANReader.h"
#import "ZXUPCEANWriter.h"
#import "ZXUPCEReader.h"
#import "ZXModulusGF.h"
#import "ZXModulusPoly.h"
#import "ZXPDF417ECErrorCorrection.h"
#import "ZXPDF417BarcodeMetadata.h"
#import "ZXPDF417BarcodeValue.h"
#import "ZXPDF417BoundingBox.h"
#import "ZXPDF417Codeword.h"
#import "ZXPDF417CodewordDecoder.h"
#import "ZXPDF417DecodedBitStreamParser.h"
#import "ZXPDF417DetectionResult.h"
#import "ZXPDF417DetectionResultColumn.h"
#import "ZXPDF417DetectionResultRowIndicatorColumn.h"
#import "ZXPDF417ScanningDecoder.h"
#import "ZXPDF417Detector.h"
#import "ZXPDF417DetectorResult.h"
#import "ZXPDF417.h"
#import "ZXPDF417BarcodeMatrix.h"
#import "ZXPDF417BarcodeRow.h"
#import "ZXPDF417Dimensions.h"
#import "ZXPDF417ErrorCorrection.h"
#import "ZXPDF417HighLevelEncoder.h"
#import "ZXingObjCPDF417.h"
#import "ZXPDF417Common.h"
#import "ZXPDF417Reader.h"
#import "ZXPDF417ResultMetadata.h"
#import "ZXPDF417Writer.h"
#import "ZXQRCodeBitMatrixParser.h"
#import "ZXQRCodeDataBlock.h"
#import "ZXQRCodeDataMask.h"
#import "ZXQRCodeDecodedBitStreamParser.h"
#import "ZXQRCodeDecoder.h"
#import "ZXQRCodeDecoderMetaData.h"
#import "ZXQRCodeErrorCorrectionLevel.h"
#import "ZXQRCodeFormatInformation.h"
#import "ZXQRCodeMode.h"
#import "ZXQRCodeVersion.h"
#import "ZXQRCodeAlignmentPattern.h"
#import "ZXQRCodeAlignmentPatternFinder.h"
#import "ZXQRCodeDetector.h"
#import "ZXQRCodeFinderPattern.h"
#import "ZXQRCodeFinderPatternFinder.h"
#import "ZXQRCodeFinderPatternInfo.h"
#import "ZXQRCode.h"
#import "ZXQRCodeBlockPair.h"
#import "ZXQRCodeEncoder.h"
#import "ZXQRCodeMaskUtil.h"
#import "ZXQRCodeMatrixUtil.h"
#import "ZXMultiDetector.h"
#import "ZXMultiFinderPatternFinder.h"
#import "ZXQRCodeMultiReader.h"
#import "ZXingObjCQRCode.h"
#import "ZXQRCodeReader.h"
#import "ZXQRCodeWriter.h"
#import "ZXingObjC.h"
#import "ZXMultiFormatReader.h"
#import "ZXMultiFormatWriter.h"
#import "ZXingWrapper.h"
#import "LBXScanLineAnimation.h"
#import "LBXScanNetAnimation.h"
#import "LBXScanVideoZoomView.h"
#import "LBXScanView.h"
#import "LBXScanViewStyle.h"

FOUNDATION_EXPORT double LBXScanVersionNumber;
FOUNDATION_EXPORT const unsigned char LBXScanVersionString[];

