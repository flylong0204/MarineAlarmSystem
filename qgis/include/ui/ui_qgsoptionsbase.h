/********************************************************************************
** Form generated from reading UI file 'qgsoptionsbase.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOPTIONSBASE_H
#define UI_QGSOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbuttonv2.h"
#include "qgscolorschemelist.h"
#include "qgsscalecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOptionsBase
{
public:
    QVBoxLayout *verticalLayout_5;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_15;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptionsPageGeneral;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *mOptionsScrollArea_01;
    QWidget *mOptionsScrollAreaContents_01;
    QVBoxLayout *verticalLayout_28;
    QgsCollapsibleGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *cmbStyle;
    QHBoxLayout *horizontalLayout_3;
    QLabel *textLabel1_4;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *cmbTheme;
    QHBoxLayout *horizontalLayout_7;
    QLabel *textLabel1_5;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *cmbIconSize;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_43;
    QRadioButton *mFontFamilyRadioQt;
    QRadioButton *mFontFamilyRadioCustom;
    QFontComboBox *mFontFamilyComboBox;
    QLabel *label_20;
    QSpinBox *spinFontSize;
    QHBoxLayout *horizontalLayout_28;
    QLabel *mMessageTimeoutLabel;
    QSpacerItem *horizontalSpacer_13;
    QSpinBox *mMessageTimeoutSpnBx;
    QHBoxLayout *horizontalLayout_29;
    QCheckBox *cbxHideSplash;
    QFrame *line_3;
    QCheckBox *cbxShowTips;
    QHBoxLayout *horizontalLayout_30;
    QCheckBox *mBoldGroupBoxTitleChkBx;
    QFrame *line_2;
    QCheckBox *mCustomGroupBoxChkBx;
    QHBoxLayout *horizontalLayout_31;
    QCheckBox *mNativeColorDialogsChkBx;
    QCheckBox *mLiveColorDialogsChkBx;
    QHBoxLayout *horizontalLayout_32;
    QCheckBox *mCustomSideBarSide;
    QgsCollapsibleGroupBox *groupBox_11;
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout_4;
    QComboBox *mProjectOnLaunchCmbBx;
    QPushButton *mProjectOnLaunchPushBtn;
    QSpacerItem *horizontalSpacer_35;
    QSpacerItem *horizontalSpacer_36;
    QLineEdit *mProjectOnLaunchLineEdit;
    QLabel *label_54;
    QCheckBox *cbxProjectDefaultNew;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *pbnProjectDefaultSetCurrent;
    QPushButton *pbnProjectDefaultReset;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_31;
    QLineEdit *leTemplateFolder;
    QPushButton *pbnTemplateFolderBrowse;
    QPushButton *pbnTemplateFolderReset;
    QCheckBox *chbAskToSaveProjectChanges;
    QCheckBox *mLayerDeleteConfirmationChkBx;
    QCheckBox *chbWarnOldProjectVersion;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_33;
    QComboBox *cmbEnableMacros;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *verticalSpacer_5;
    QWidget *mOptionsPageSystem;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *mOptionsScrollArea_03;
    QWidget *mOptionsScrollAreaContents_03;
    QVBoxLayout *verticalLayout_22;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *_6;
    QLabel *mSVGLabel;
    QSpacerItem *spacerItem;
    QPushButton *mBtnAddSVGPath;
    QPushButton *mBtnRemoveSVGPath;
    QListWidget *mListSVGPaths;
    QgsCollapsibleGroupBox *groupBox_4;
    QGridLayout *_3;
    QLabel *mSVGLabel_2;
    QSpacerItem *spacerItem1;
    QPushButton *mBtnAddPluginPath;
    QPushButton *mBtnRemovePluginPath;
    QListWidget *mListPluginPaths;
    QgsCollapsibleGroupBox *mQSettingsGrpBx;
    QGridLayout *gridLayout_13;
    QSpacerItem *horizontalSpacer_42;
    QPushButton *mRestoreDefaultWindowStateBtn;
    QLabel *mRestoreDefaultWindowStateLbl;
    QgsCollapsibleGroupBox *mEnvironmentGrpBx;
    QGridLayout *gridLayout_32;
    QPushButton *mRemoveCustomVarBtn;
    QPushButton *mAddCustomVarBtn;
    QgsCollapsibleGroupBox *mCurrentVariablesGrpBx;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *mCurrentVariablesTable;
    QCheckBox *mCurrentVariablesQGISChxBx;
    QCheckBox *mCustomVariablesChkBx;
    QSpacerItem *horizontalSpacer_14;
    QTableWidget *mCustomVariablesTable;
    QSpacerItem *verticalSpacer_11;
    QWidget *mOptionsPageDataSources;
    QVBoxLayout *verticalLayout_26;
    QScrollArea *mOptionsScrollArea_11;
    QWidget *mOptionsScrollAreaContents_11;
    QVBoxLayout *verticalLayout_27;
    QgsCollapsibleGroupBox *groupBox_18;
    QVBoxLayout *verticalLayout_23;
    QCheckBox *cbxAttributeTableDocked;
    QCheckBox *cbxCopyWKTGeomFromTable;
    QHBoxLayout *horizontalLayout_5;
    QLabel *textLabel1_7;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *cmbAttrTableBehaviour;
    QHBoxLayout *horizontalLayout_10;
    QLabel *textLabel1_12;
    QSpacerItem *horizontalSpacer_8;
    QSpinBox *spinBoxAttrTableRowCache;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *leNullValue;
    QgsCollapsibleGroupBox *groupBox_19;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_30;
    QSpacerItem *horizontalSpacer_12;
    QComboBox *cmbScanItemsInBrowser;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *cmbScanZipInBrowser;
    QHBoxLayout *horizontalLayout_12;
    QLabel *textLabel1_13;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *cmbPromptRasterSublayers;
    QCheckBox *cbxIgnoreShapeEncoding;
    QCheckBox *cbxAddPostgisDC;
    QCheckBox *cbxAddOracleDC;
    QSpacerItem *verticalSpacer_8;
    QWidget *mOptionsPageRendering;
    QVBoxLayout *verticalLayout_12;
    QScrollArea *mOptionsScrollArea_04;
    QWidget *mOptionsScrollAreaContents_04;
    QVBoxLayout *verticalLayout_29;
    QgsCollapsibleGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *chkAddedVisibility;
    QCheckBox *chkUseRenderCaching;
    QHBoxLayout *horizontalLayout_26;
    QCheckBox *chkParallelRendering;
    QFrame *line_6;
    QCheckBox *chkMaxThreads;
    QSpinBox *spinMaxThreads;
    QSpacerItem *horizontalSpacer_41;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_56;
    QSpinBox *spinMapUpdateInterval;
    QSpacerItem *horizontalSpacer_46;
    QgsCollapsibleGroupBox *mSimplifyDrawingGroupBox;
    QGridLayout *_14;
    QLabel *label_59;
    QLabel *label_65;
    QDoubleSpinBox *mSimplifyDrawingSpinBox;
    QLabel *mSimplifyDrawingPx;
    QSpacerItem *horizontalSpacer_40;
    QCheckBox *mSimplifyDrawingAtProvider;
    QLabel *mSimplifyMaxScaleLabel;
    QgsScaleComboBox *mSimplifyMaximumScaleComboBox;
    QgsCollapsibleGroupBox *groupBox_8;
    QVBoxLayout *_5;
    QCheckBox *chkAntiAliasing;
    QgsCollapsibleGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_22;
    QSpinBox *spnRed;
    QLabel *label_23;
    QSpinBox *spnGreen;
    QLabel *label_24;
    QSpinBox *spnBlue;
    QSpacerItem *horizontalSpacer_20;
    QGroupBox *groupBox_17;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_37;
    QComboBox *cboxContrastEnhancementAlgorithmSingleBand;
    QSpacerItem *horizontalSpacer_23;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_38;
    QComboBox *cboxContrastEnhancementAlgorithmMultiBandSingleByte;
    QSpacerItem *horizontalSpacer_24;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_39;
    QComboBox *cboxContrastEnhancementAlgorithmMultiBandMultiByte;
    QSpacerItem *horizontalSpacer_25;
    QFrame *line;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_40;
    QComboBox *cboxContrastEnhancementLimits;
    QSpacerItem *horizontalSpacer_26;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_36;
    QDoubleSpinBox *mRasterCumulativeCutLowerDoubleSpinBox;
    QLabel *label_34;
    QDoubleSpinBox *mRasterCumulativeCutUpperDoubleSpinBox;
    QLabel *label_35;
    QSpacerItem *horizontalSpacer_18;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_25;
    QDoubleSpinBox *spnThreeBandStdDev;
    QSpacerItem *horizontalSpacer_21;
    QgsCollapsibleGroupBox *groupBox_22;
    QVBoxLayout *verticalLayout_35;
    QLabel *label_55;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_37;
    QCheckBox *mLogCanvasRefreshChkBx;
    QSpacerItem *verticalSpacer_6;
    QWidget *mOptionsPageColors;
    QVBoxLayout *verticalLayout_38;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_46;
    QgsCollapsibleGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QPushButton *mButtonPasteColors;
    QPushButton *mButtonExportColors;
    QPushButton *mButtonAddColor;
    QPushButton *mButtonRemoveColor;
    QSpacerItem *verticalSpacer_12;
    QPushButton *mButtonCopyColors;
    QPushButton *mButtonImportColors;
    QgsColorSchemeList *mTreeCustomColors;
    QWidget *mOptionsPageMapCanvas;
    QVBoxLayout *verticalLayout_16;
    QScrollArea *mOptionsScrollArea_06;
    QWidget *mOptionsScrollAreaContents_06;
    QVBoxLayout *verticalLayout_25;
    QgsCollapsibleGroupBox *groupBox_9;
    QGridLayout *gridLayout_7;
    QgsColorButtonV2 *pbnCanvasColor;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label;
    QLabel *textLabel1_9;
    QgsColorButtonV2 *pbnSelectionColor;
    QgsCollapsibleGroupBox *mLegendGrpBx;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *cmbLegendDoubleClickAction;
    QGridLayout *gridLayout_3;
    QFrame *line_4;
    QSpacerItem *horizontalSpacer_34;
    QCheckBox *capitaliseCheckBox;
    QCheckBox *mLegendLayersBoldChkBx;
    QCheckBox *cbxLegendClassifiers;
    QCheckBox *mLegendGroupsBoldChkBx;
    QCheckBox *cbxCreateRasterLegendIcons;
    QLabel *label_53;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_58;
    QSpacerItem *horizontalSpacer_39;
    QSpinBox *mLegendGraphicResolutionSpinBox;
    QSpacerItem *spacerItem2;
    QWidget *mOptionsPageMapTools;
    QVBoxLayout *verticalLayout_14;
    QScrollArea *mOptionsScrollArea_05;
    QWidget *mOptionsScrollAreaContents_05;
    QVBoxLayout *verticalLayout_30;
    QgsCollapsibleGroupBox *mIdentifyGroupBox;
    QVBoxLayout *verticalLayout_37;
    QHBoxLayout *mIdentifyRadiusHorizontalLayout;
    QLabel *textLabel1_3;
    QDoubleSpinBox *spinBoxIdentifyValue;
    QSpacerItem *horizontalSpacer_44;
    QLabel *textLabel2;
    QHBoxLayout *mIdentifyHighlightHorizontalLayout;
    QLabel *mIdentifyHighlighColorLabel;
    QgsColorButtonV2 *mIdentifyHighlightColorButton;
    QLabel *mIdentifyHighlightBufferLabel;
    QDoubleSpinBox *mIdentifyHighlightBufferSpinBox;
    QLabel *mIdentifyHighlightMinWidthLabel;
    QDoubleSpinBox *mIdentifyHighlightMinWidthSpinBox;
    QSpacerItem *horizontalSpacer_45;
    QgsCollapsibleGroupBox *groupBox_6;
    QGridLayout *gridLayout_21;
    QLabel *textLabel1_10;
    QLabel *textLabel1_11;
    QRadioButton *radMeters;
    QRadioButton *radFeet;
    QRadioButton *radNautical;
    QRadioButton *radDegrees;
    QLabel *mAngleUnitsLabel;
    QRadioButton *mDegreesRadioButton;
    QRadioButton *mRadiansRadioButton;
    QLabel *label_12;
    QSpinBox *mDecimalPlacesSpinBox;
    QLabel *label_13;
    QCheckBox *mKeepBaseUnitCheckBox;
    QRadioButton *mGonRadioButton;
    QSpacerItem *spacerItem3;
    QgsColorButtonV2 *pbnMeasureColor;
    QgsCollapsibleGroupBox *groupBox_10;
    QGridLayout *_8;
    QLabel *label_3;
    QLabel *label_2;
    QDoubleSpinBox *spinZoomFactor;
    QComboBox *cmbWheelAction;
    QgsCollapsibleGroupBox *groupBox_15;
    QGridLayout *gridLayout_26;
    QListWidget *mListGlobalScales;
    QVBoxLayout *verticalLayout_13;
    QToolButton *pbnAddScale;
    QToolButton *pbnRemoveScale;
    QToolButton *pbnDefaultScaleValues;
    QSpacerItem *verticalSpacer_7;
    QToolButton *pbnImportScales;
    QToolButton *pbnExportScales;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptionsPageComposer;
    QVBoxLayout *verticalLayout_36;
    QScrollArea *mOptionsScrollArea_12;
    QWidget *mOptionsScrollAreaContents_12;
    QVBoxLayout *verticalLayout_39;
    QgsCollapsibleGroupBox *groupBox_3;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_60;
    QFontComboBox *mComposerFontComboBox;
    QgsCollapsibleGroupBox *groupBox_23;
    QGridLayout *gridLayout_9;
    QLabel *label_66;
    QComboBox *mGridStyleComboBox;
    QLabel *label_4;
    QgsColorButtonV2 *mGridColorButton;
    QgsCollapsibleGroupBox *groupBox_24;
    QGridLayout *gridLayout_11;
    QLabel *label_61;
    QDoubleSpinBox *mGridResolutionSpinBox;
    QLabel *label_63;
    QHBoxLayout *horizontalLayout_36;
    QDoubleSpinBox *mOffsetXSpinBox;
    QDoubleSpinBox *mOffsetYSpinBox;
    QLabel *label_62;
    QSpinBox *mSnapToleranceSpinBox;
    QSpacerItem *verticalSpacer_10;
    QWidget *mOptionsPageDigitizing;
    QVBoxLayout *verticalLayout_17;
    QScrollArea *mOptionsScrollArea_07;
    QWidget *mOptionsScrollAreaContents_07;
    QVBoxLayout *verticalLayout_31;
    QgsCollapsibleGroupBox *mEnterAttributeValuesGroupBox;
    QGridLayout *gridLayout_28;
    QComboBox *mValidateGeometries;
    QLabel *label_19;
    QCheckBox *chkDisableAttributeValuesDlg;
    QSpacerItem *horizontalSpacer_32;
    QCheckBox *chkReuseLastValues;
    QgsCollapsibleGroupBox *mRubberBandGroupBox;
    QGridLayout *_9;
    QLabel *mLineColorTextLabel;
    QSpinBox *mLineWidthSpinBox;
    QLabel *mLineWidthTextLabel;
    QSpacerItem *horizontalSpacer_33;
    QgsColorButtonV2 *mLineColorToolButton;
    QgsCollapsibleGroupBox *mSnappingGroupBox;
    QGridLayout *_10;
    QLabel *mDefaultSnapModeLabel;
    QComboBox *mDefaultSnapModeComboBox;
    QLabel *mDefaultSnappingToleranceTextLabel;
    QDoubleSpinBox *mDefaultSnappingToleranceSpinBox;
    QLabel *mVertexSearchRadiusVertexEditLabel;
    QDoubleSpinBox *mSearchRadiusVertexEditSpinBox;
    QComboBox *mDefaultSnappingToleranceComboBox;
    QComboBox *mSearchRadiusVertexEditComboBox;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QSpacerItem *spacerItem6;
    QCheckBox *cbxSnappingOptionsDocked;
    QgsCollapsibleGroupBox *mVertexMarkerGroupBox;
    QGridLayout *_11;
    QLabel *mMarkerStyleLabel;
    QSpacerItem *spacerItem7;
    QComboBox *mMarkerStyleComboBox;
    QSpinBox *mMarkerSizeSpinBox;
    QLabel *label_6;
    QSpacerItem *spacerItem8;
    QCheckBox *mMarkersOnlyForSelectedCheckBox;
    QgsCollapsibleGroupBox *groupBox_21;
    QGridLayout *gridLayout;
    QSpinBox *mOffsetQuadSegSpinBox;
    QLabel *label_28;
    QLabel *label_26;
    QComboBox *mOffsetJoinStyleComboBox;
    QLabel *label_27;
    QDoubleSpinBox *mCurveOffsetMiterLimitComboBox;
    QSpacerItem *horizontalSpacer_29;
    QSpacerItem *horizontalSpacer_30;
    QSpacerItem *horizontalSpacer_31;
    QSpacerItem *verticalSpacer_4;
    QWidget *mOptionsPageGDAL;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *mOptionsScrollArea_02;
    QWidget *mOptionsScrollAreaContents_02;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_29;
    QComboBox *cmbEditCreateOptions;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pbnEditPyramidsOptions;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pbnEditCreateOptions;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_24;
    QLabel *label_17;
    QTreeWidget *lstGdalDrivers;
    QWidget *mOptionsPageCRS;
    QVBoxLayout *verticalLayout_18;
    QScrollArea *mOptionsScrollArea_08;
    QWidget *mOptionsScrollAreaContents_08;
    QGridLayout *gridLayout_15;
    QSpacerItem *verticalSpacer;
    QgsCollapsibleGroupBox *grpProjectionBehaviour;
    QGridLayout *gridLayout_23;
    QLineEdit *leLayerGlobalCrs;
    QPushButton *pbnSelectProjection;
    QRadioButton *radUseProjectProjection;
    QRadioButton *radPromptForProjection;
    QRadioButton *radUseGlobalProjection;
    QSpacerItem *horizontalSpacer_27;
    QLabel *label_8;
    QgsCollapsibleGroupBox *grpOtfTransform;
    QGridLayout *gridLayout_22;
    QRadioButton *radOtfTransform;
    QRadioButton *radOtfAuto;
    QLineEdit *leProjectGlobalCrs;
    QRadioButton *radOtfNone;
    QPushButton *pbnSelectOtfProjection;
    QLabel *label_16;
    QgsCollapsibleGroupBox *mDefaultDatumTransformGroupBox;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_38;
    QPushButton *mAddDefaultTransformButton;
    QPushButton *mRemoveDefaultTransformButton;
    QSpacerItem *horizontalSpacer_38;
    QTreeWidget *mDefaultDatumTransformTreeWidget;
    QCheckBox *chkShowDatumTransformDialog;
    QWidget *mOptionsPageLocale;
    QVBoxLayout *verticalLayout_19;
    QScrollArea *mOptionsScrollArea_09;
    QWidget *mOptionsScrollAreaContents_09;
    QVBoxLayout *verticalLayout_32;
    QGroupBox *grpLocale;
    QGridLayout *_12;
    QLabel *label_5;
    QComboBox *cboLocale;
    QLabel *label_7;
    QGroupBox *groupBox_12;
    QGridLayout *_13;
    QLabel *lblSystemLocale;
    QSpacerItem *verticalSpacer_2;
    QWidget *mOptionsPageNetwork;
    QVBoxLayout *verticalLayout_20;
    QScrollArea *mOptionsScrollArea_10;
    QWidget *mOptionsScrollAreaContents_10;
    QVBoxLayout *verticalLayout_33;
    QGroupBox *groupBox_20;
    QVBoxLayout *verticalLayout_34;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *leWmsSearch;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mNetworkTimeoutLabel;
    QSpinBox *mNetworkTimeoutSpinBox;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_32;
    QSpinBox *mDefaultTileExpirySpinBox;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_57;
    QSpinBox *mDefaultTileMaxRetrySpinBox;
    QHBoxLayout *horizontalLayout_35;
    QLabel *lblUserAgent;
    QLineEdit *leUserAgent;
    QGroupBox *grpCache;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLineEdit *mCacheDirectory;
    QPushButton *mBrowseCacheDirectory;
    QLabel *label_11;
    QSpinBox *mCacheSize;
    QPushButton *mClearCache;
    QgsCollapsibleGroupBox *grpProxy;
    QGridLayout *gridLayout_1;
    QLabel *lblProxyHost;
    QLineEdit *leProxyHost;
    QLabel *lblProxyPort;
    QLineEdit *leProxyPort;
    QLabel *lblUser;
    QLineEdit *leProxyUser;
    QLabel *lblPassword;
    QLineEdit *leProxyPassword;
    QLabel *mTypeLabel;
    QComboBox *mProxyTypeComboBox;
    QSpacerItem *spacerItem9;
    QGroupBox *grpUrlExclude;
    QGridLayout *gridLayout_5;
    QPushButton *mRemoveUrlPushButton;
    QPushButton *mAddUrlPushButton;
    QListWidget *mExcludeUrlListWidget;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_9;
    QFrame *mButtonBoxFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsOptionsBase)
    {
        if (QgsOptionsBase->objectName().isEmpty())
            QgsOptionsBase->setObjectName(QString::fromUtf8("QgsOptionsBase"));
        QgsOptionsBase->resize(800, 600);
        QgsOptionsBase->setMinimumSize(QSize(780, 0));
        QgsOptionsBase->setModal(true);
        verticalLayout_5 = new QVBoxLayout(QgsOptionsBase);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mOptionsSplitter = new QSplitter(QgsOptionsBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setEnabled(true);
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/attributes.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/rendering.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/overlay.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/map_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionNewComposer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/digitising.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem8->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/gdal.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem9->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/CRS.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem10->setIcon(icon10);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/locale.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem11->setIcon(icon11);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/network_and_proxy.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem12->setIcon(icon12);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_15->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(mOptionsFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        mOptionsPageGeneral = new QWidget();
        mOptionsPageGeneral->setObjectName(QString::fromUtf8("mOptionsPageGeneral"));
        verticalLayout_3 = new QVBoxLayout(mOptionsPageGeneral);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mOptionsScrollArea_01 = new QScrollArea(mOptionsPageGeneral);
        mOptionsScrollArea_01->setObjectName(QString::fromUtf8("mOptionsScrollArea_01"));
        mOptionsScrollArea_01->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_01->setWidgetResizable(true);
        mOptionsScrollAreaContents_01 = new QWidget();
        mOptionsScrollAreaContents_01->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_01"));
        mOptionsScrollAreaContents_01->setGeometry(QRect(0, 0, 610, 670));
        verticalLayout_28 = new QVBoxLayout(mOptionsScrollAreaContents_01);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        groupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_01);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, -1);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_9->addWidget(label_18);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        cmbStyle = new QComboBox(groupBox);
        cmbStyle->setObjectName(QString::fromUtf8("cmbStyle"));

        horizontalLayout_9->addWidget(cmbStyle);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textLabel1_4 = new QLabel(groupBox);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel1_4->sizePolicy().hasHeightForWidth());
        textLabel1_4->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(textLabel1_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cmbTheme = new QComboBox(groupBox);
        cmbTheme->setObjectName(QString::fromUtf8("cmbTheme"));
        cmbTheme->setDuplicatesEnabled(false);

        horizontalLayout_3->addWidget(cmbTheme);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        textLabel1_5 = new QLabel(groupBox);
        textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
        sizePolicy1.setHeightForWidth(textLabel1_5->sizePolicy().hasHeightForWidth());
        textLabel1_5->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(textLabel1_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        cmbIconSize = new QComboBox(groupBox);
        cmbIconSize->setObjectName(QString::fromUtf8("cmbIconSize"));
        cmbIconSize->setDuplicatesEnabled(false);

        horizontalLayout_7->addWidget(cmbIconSize);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_43 = new QLabel(groupBox);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        horizontalLayout_27->addWidget(label_43);

        mFontFamilyRadioQt = new QRadioButton(groupBox);
        mFontFamilyRadioQt->setObjectName(QString::fromUtf8("mFontFamilyRadioQt"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mFontFamilyRadioQt->sizePolicy().hasHeightForWidth());
        mFontFamilyRadioQt->setSizePolicy(sizePolicy2);
        mFontFamilyRadioQt->setChecked(true);

        horizontalLayout_27->addWidget(mFontFamilyRadioQt);

        mFontFamilyRadioCustom = new QRadioButton(groupBox);
        mFontFamilyRadioCustom->setObjectName(QString::fromUtf8("mFontFamilyRadioCustom"));
        sizePolicy2.setHeightForWidth(mFontFamilyRadioCustom->sizePolicy().hasHeightForWidth());
        mFontFamilyRadioCustom->setSizePolicy(sizePolicy2);

        horizontalLayout_27->addWidget(mFontFamilyRadioCustom);

        mFontFamilyComboBox = new QFontComboBox(groupBox);
        mFontFamilyComboBox->setObjectName(QString::fromUtf8("mFontFamilyComboBox"));
        mFontFamilyComboBox->setEnabled(false);

        horizontalLayout_27->addWidget(mFontFamilyComboBox);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy3);

        horizontalLayout_27->addWidget(label_20);

        spinFontSize = new QSpinBox(groupBox);
        spinFontSize->setObjectName(QString::fromUtf8("spinFontSize"));
        sizePolicy2.setHeightForWidth(spinFontSize->sizePolicy().hasHeightForWidth());
        spinFontSize->setSizePolicy(sizePolicy2);
        spinFontSize->setMinimum(4);

        horizontalLayout_27->addWidget(spinFontSize);


        verticalLayout_2->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        mMessageTimeoutLabel = new QLabel(groupBox);
        mMessageTimeoutLabel->setObjectName(QString::fromUtf8("mMessageTimeoutLabel"));
        sizePolicy3.setHeightForWidth(mMessageTimeoutLabel->sizePolicy().hasHeightForWidth());
        mMessageTimeoutLabel->setSizePolicy(sizePolicy3);

        horizontalLayout_28->addWidget(mMessageTimeoutLabel);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_13);

        mMessageTimeoutSpnBx = new QSpinBox(groupBox);
        mMessageTimeoutSpnBx->setObjectName(QString::fromUtf8("mMessageTimeoutSpnBx"));
        mMessageTimeoutSpnBx->setMinimum(2);
        mMessageTimeoutSpnBx->setMaximum(20);
        mMessageTimeoutSpnBx->setValue(5);

        horizontalLayout_28->addWidget(mMessageTimeoutSpnBx);


        verticalLayout_2->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        cbxHideSplash = new QCheckBox(groupBox);
        cbxHideSplash->setObjectName(QString::fromUtf8("cbxHideSplash"));
        sizePolicy2.setHeightForWidth(cbxHideSplash->sizePolicy().hasHeightForWidth());
        cbxHideSplash->setSizePolicy(sizePolicy2);

        horizontalLayout_29->addWidget(cbxHideSplash);

        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMinimumSize(QSize(12, 0));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_29->addWidget(line_3);

        cbxShowTips = new QCheckBox(groupBox);
        cbxShowTips->setObjectName(QString::fromUtf8("cbxShowTips"));

        horizontalLayout_29->addWidget(cbxShowTips);


        verticalLayout_2->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        mBoldGroupBoxTitleChkBx = new QCheckBox(groupBox);
        mBoldGroupBoxTitleChkBx->setObjectName(QString::fromUtf8("mBoldGroupBoxTitleChkBx"));
        sizePolicy2.setHeightForWidth(mBoldGroupBoxTitleChkBx->sizePolicy().hasHeightForWidth());
        mBoldGroupBoxTitleChkBx->setSizePolicy(sizePolicy2);

        horizontalLayout_30->addWidget(mBoldGroupBoxTitleChkBx);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(12, 0));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_30->addWidget(line_2);

        mCustomGroupBoxChkBx = new QCheckBox(groupBox);
        mCustomGroupBoxChkBx->setObjectName(QString::fromUtf8("mCustomGroupBoxChkBx"));

        horizontalLayout_30->addWidget(mCustomGroupBoxChkBx);


        verticalLayout_2->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        mNativeColorDialogsChkBx = new QCheckBox(groupBox);
        mNativeColorDialogsChkBx->setObjectName(QString::fromUtf8("mNativeColorDialogsChkBx"));

        horizontalLayout_31->addWidget(mNativeColorDialogsChkBx);

        mLiveColorDialogsChkBx = new QCheckBox(groupBox);
        mLiveColorDialogsChkBx->setObjectName(QString::fromUtf8("mLiveColorDialogsChkBx"));

        horizontalLayout_31->addWidget(mLiveColorDialogsChkBx);


        verticalLayout_2->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        mCustomSideBarSide = new QCheckBox(groupBox);
        mCustomSideBarSide->setObjectName(QString::fromUtf8("mCustomSideBarSide"));

        horizontalLayout_32->addWidget(mCustomSideBarSide);


        verticalLayout_2->addLayout(horizontalLayout_32);


        verticalLayout_28->addWidget(groupBox);

        groupBox_11 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_01);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        vboxLayout = new QVBoxLayout(groupBox_11);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mProjectOnLaunchCmbBx = new QComboBox(groupBox_11);
        mProjectOnLaunchCmbBx->setObjectName(QString::fromUtf8("mProjectOnLaunchCmbBx"));
        sizePolicy2.setHeightForWidth(mProjectOnLaunchCmbBx->sizePolicy().hasHeightForWidth());
        mProjectOnLaunchCmbBx->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mProjectOnLaunchCmbBx, 0, 2, 1, 2);

        mProjectOnLaunchPushBtn = new QPushButton(groupBox_11);
        mProjectOnLaunchPushBtn->setObjectName(QString::fromUtf8("mProjectOnLaunchPushBtn"));
        sizePolicy2.setHeightForWidth(mProjectOnLaunchPushBtn->sizePolicy().hasHeightForWidth());
        mProjectOnLaunchPushBtn->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(mProjectOnLaunchPushBtn, 1, 5, 1, 1);

        horizontalSpacer_35 = new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_35, 1, 0, 1, 1);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_36, 0, 4, 1, 1);

        mProjectOnLaunchLineEdit = new QLineEdit(groupBox_11);
        mProjectOnLaunchLineEdit->setObjectName(QString::fromUtf8("mProjectOnLaunchLineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mProjectOnLaunchLineEdit->sizePolicy().hasHeightForWidth());
        mProjectOnLaunchLineEdit->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(mProjectOnLaunchLineEdit, 1, 1, 1, 4);

        label_54 = new QLabel(groupBox_11);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        sizePolicy3.setHeightForWidth(label_54->sizePolicy().hasHeightForWidth());
        label_54->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(label_54, 0, 0, 1, 2);


        vboxLayout->addLayout(gridLayout_4);

        cbxProjectDefaultNew = new QCheckBox(groupBox_11);
        cbxProjectDefaultNew->setObjectName(QString::fromUtf8("cbxProjectDefaultNew"));

        vboxLayout->addWidget(cbxProjectDefaultNew);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_22 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_22);

        pbnProjectDefaultSetCurrent = new QPushButton(groupBox_11);
        pbnProjectDefaultSetCurrent->setObjectName(QString::fromUtf8("pbnProjectDefaultSetCurrent"));

        horizontalLayout_16->addWidget(pbnProjectDefaultSetCurrent);

        pbnProjectDefaultReset = new QPushButton(groupBox_11);
        pbnProjectDefaultReset->setObjectName(QString::fromUtf8("pbnProjectDefaultReset"));

        horizontalLayout_16->addWidget(pbnProjectDefaultReset);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_9);


        vboxLayout->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_31 = new QLabel(groupBox_11);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_15->addWidget(label_31);

        leTemplateFolder = new QLineEdit(groupBox_11);
        leTemplateFolder->setObjectName(QString::fromUtf8("leTemplateFolder"));
        leTemplateFolder->setEnabled(false);

        horizontalLayout_15->addWidget(leTemplateFolder);

        pbnTemplateFolderBrowse = new QPushButton(groupBox_11);
        pbnTemplateFolderBrowse->setObjectName(QString::fromUtf8("pbnTemplateFolderBrowse"));

        horizontalLayout_15->addWidget(pbnTemplateFolderBrowse);

        pbnTemplateFolderReset = new QPushButton(groupBox_11);
        pbnTemplateFolderReset->setObjectName(QString::fromUtf8("pbnTemplateFolderReset"));

        horizontalLayout_15->addWidget(pbnTemplateFolderReset);


        vboxLayout->addLayout(horizontalLayout_15);

        chbAskToSaveProjectChanges = new QCheckBox(groupBox_11);
        chbAskToSaveProjectChanges->setObjectName(QString::fromUtf8("chbAskToSaveProjectChanges"));

        vboxLayout->addWidget(chbAskToSaveProjectChanges);

        mLayerDeleteConfirmationChkBx = new QCheckBox(groupBox_11);
        mLayerDeleteConfirmationChkBx->setObjectName(QString::fromUtf8("mLayerDeleteConfirmationChkBx"));

        vboxLayout->addWidget(mLayerDeleteConfirmationChkBx);

        chbWarnOldProjectVersion = new QCheckBox(groupBox_11);
        chbWarnOldProjectVersion->setObjectName(QString::fromUtf8("chbWarnOldProjectVersion"));

        vboxLayout->addWidget(chbWarnOldProjectVersion);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_33 = new QLabel(groupBox_11);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_21->addWidget(label_33);

        cmbEnableMacros = new QComboBox(groupBox_11);
        cmbEnableMacros->setObjectName(QString::fromUtf8("cmbEnableMacros"));
        cmbEnableMacros->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_21->addWidget(cmbEnableMacros);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_17);


        vboxLayout->addLayout(horizontalLayout_21);


        verticalLayout_28->addWidget(groupBox_11);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_5);

        mOptionsScrollArea_01->setWidget(mOptionsScrollAreaContents_01);

        verticalLayout_3->addWidget(mOptionsScrollArea_01);

        mOptionsStackedWidget->addWidget(mOptionsPageGeneral);
        mOptionsPageSystem = new QWidget();
        mOptionsPageSystem->setObjectName(QString::fromUtf8("mOptionsPageSystem"));
        verticalLayout_7 = new QVBoxLayout(mOptionsPageSystem);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        mOptionsScrollArea_03 = new QScrollArea(mOptionsPageSystem);
        mOptionsScrollArea_03->setObjectName(QString::fromUtf8("mOptionsScrollArea_03"));
        mOptionsScrollArea_03->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_03->setWidgetResizable(true);
        mOptionsScrollAreaContents_03 = new QWidget();
        mOptionsScrollAreaContents_03->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_03"));
        mOptionsScrollAreaContents_03->setGeometry(QRect(0, 0, 655, 862));
        verticalLayout_22 = new QVBoxLayout(mOptionsScrollAreaContents_03);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        groupBox_2 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        _6 = new QGridLayout(groupBox_2);
        _6->setSpacing(6);
        _6->setContentsMargins(11, 11, 11, 11);
        _6->setObjectName(QString::fromUtf8("_6"));
        mSVGLabel = new QLabel(groupBox_2);
        mSVGLabel->setObjectName(QString::fromUtf8("mSVGLabel"));

        _6->addWidget(mSVGLabel, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _6->addItem(spacerItem, 0, 1, 1, 1);

        mBtnAddSVGPath = new QPushButton(groupBox_2);
        mBtnAddSVGPath->setObjectName(QString::fromUtf8("mBtnAddSVGPath"));

        _6->addWidget(mBtnAddSVGPath, 0, 2, 1, 1);

        mBtnRemoveSVGPath = new QPushButton(groupBox_2);
        mBtnRemoveSVGPath->setObjectName(QString::fromUtf8("mBtnRemoveSVGPath"));

        _6->addWidget(mBtnRemoveSVGPath, 0, 3, 1, 1);

        mListSVGPaths = new QListWidget(groupBox_2);
        mListSVGPaths->setObjectName(QString::fromUtf8("mListSVGPaths"));
        mListSVGPaths->setMinimumSize(QSize(0, 120));

        _6->addWidget(mListSVGPaths, 1, 0, 1, 4);


        verticalLayout_22->addWidget(groupBox_2);

        groupBox_4 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        _3 = new QGridLayout(groupBox_4);
        _3->setSpacing(6);
        _3->setContentsMargins(11, 11, 11, 11);
        _3->setObjectName(QString::fromUtf8("_3"));
        mSVGLabel_2 = new QLabel(groupBox_4);
        mSVGLabel_2->setObjectName(QString::fromUtf8("mSVGLabel_2"));

        _3->addWidget(mSVGLabel_2, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem1, 0, 1, 1, 1);

        mBtnAddPluginPath = new QPushButton(groupBox_4);
        mBtnAddPluginPath->setObjectName(QString::fromUtf8("mBtnAddPluginPath"));

        _3->addWidget(mBtnAddPluginPath, 0, 2, 1, 1);

        mBtnRemovePluginPath = new QPushButton(groupBox_4);
        mBtnRemovePluginPath->setObjectName(QString::fromUtf8("mBtnRemovePluginPath"));

        _3->addWidget(mBtnRemovePluginPath, 0, 3, 1, 1);

        mListPluginPaths = new QListWidget(groupBox_4);
        mListPluginPaths->setObjectName(QString::fromUtf8("mListPluginPaths"));
        mListPluginPaths->setMinimumSize(QSize(0, 120));

        _3->addWidget(mListPluginPaths, 1, 0, 1, 4);


        verticalLayout_22->addWidget(groupBox_4);

        mQSettingsGrpBx = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        mQSettingsGrpBx->setObjectName(QString::fromUtf8("mQSettingsGrpBx"));
        gridLayout_13 = new QGridLayout(mQSettingsGrpBx);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_42, 0, 1, 1, 1);

        mRestoreDefaultWindowStateBtn = new QPushButton(mQSettingsGrpBx);
        mRestoreDefaultWindowStateBtn->setObjectName(QString::fromUtf8("mRestoreDefaultWindowStateBtn"));

        gridLayout_13->addWidget(mRestoreDefaultWindowStateBtn, 0, 2, 1, 1);

        mRestoreDefaultWindowStateLbl = new QLabel(mQSettingsGrpBx);
        mRestoreDefaultWindowStateLbl->setObjectName(QString::fromUtf8("mRestoreDefaultWindowStateLbl"));

        gridLayout_13->addWidget(mRestoreDefaultWindowStateLbl, 0, 0, 1, 1);


        verticalLayout_22->addWidget(mQSettingsGrpBx);

        mEnvironmentGrpBx = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_03);
        mEnvironmentGrpBx->setObjectName(QString::fromUtf8("mEnvironmentGrpBx"));
        mEnvironmentGrpBx->setMinimumSize(QSize(0, 0));
        gridLayout_32 = new QGridLayout(mEnvironmentGrpBx);
        gridLayout_32->setSpacing(6);
        gridLayout_32->setContentsMargins(11, 11, 11, 11);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        mRemoveCustomVarBtn = new QPushButton(mEnvironmentGrpBx);
        mRemoveCustomVarBtn->setObjectName(QString::fromUtf8("mRemoveCustomVarBtn"));
        sizePolicy2.setHeightForWidth(mRemoveCustomVarBtn->sizePolicy().hasHeightForWidth());
        mRemoveCustomVarBtn->setSizePolicy(sizePolicy2);

        gridLayout_32->addWidget(mRemoveCustomVarBtn, 1, 3, 1, 1);

        mAddCustomVarBtn = new QPushButton(mEnvironmentGrpBx);
        mAddCustomVarBtn->setObjectName(QString::fromUtf8("mAddCustomVarBtn"));
        sizePolicy2.setHeightForWidth(mAddCustomVarBtn->sizePolicy().hasHeightForWidth());
        mAddCustomVarBtn->setSizePolicy(sizePolicy2);

        gridLayout_32->addWidget(mAddCustomVarBtn, 1, 2, 1, 1);

        mCurrentVariablesGrpBx = new QgsCollapsibleGroupBox(mEnvironmentGrpBx);
        mCurrentVariablesGrpBx->setObjectName(QString::fromUtf8("mCurrentVariablesGrpBx"));
        mCurrentVariablesGrpBx->setMinimumSize(QSize(0, 0));
        mCurrentVariablesGrpBx->setProperty("collapsed", QVariant(false));
        mCurrentVariablesGrpBx->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_8 = new QVBoxLayout(mCurrentVariablesGrpBx);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        mCurrentVariablesTable = new QTableWidget(mCurrentVariablesGrpBx);
        if (mCurrentVariablesTable->columnCount() < 2)
            mCurrentVariablesTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mCurrentVariablesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mCurrentVariablesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mCurrentVariablesTable->setObjectName(QString::fromUtf8("mCurrentVariablesTable"));
        mCurrentVariablesTable->setMinimumSize(QSize(0, 120));
        mCurrentVariablesTable->setEditTriggers(QAbstractItemView::AllEditTriggers);
        mCurrentVariablesTable->setDragEnabled(true);
        mCurrentVariablesTable->setDragDropMode(QAbstractItemView::DragOnly);
        mCurrentVariablesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mCurrentVariablesTable->setSortingEnabled(true);
        mCurrentVariablesTable->setWordWrap(false);
        mCurrentVariablesTable->horizontalHeader()->setMinimumSectionSize(100);
        mCurrentVariablesTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        mCurrentVariablesTable->horizontalHeader()->setStretchLastSection(true);
        mCurrentVariablesTable->verticalHeader()->setVisible(false);

        verticalLayout_8->addWidget(mCurrentVariablesTable);

        mCurrentVariablesQGISChxBx = new QCheckBox(mCurrentVariablesGrpBx);
        mCurrentVariablesQGISChxBx->setObjectName(QString::fromUtf8("mCurrentVariablesQGISChxBx"));

        verticalLayout_8->addWidget(mCurrentVariablesQGISChxBx);


        gridLayout_32->addWidget(mCurrentVariablesGrpBx, 4, 0, 1, 4);

        mCustomVariablesChkBx = new QCheckBox(mEnvironmentGrpBx);
        mCustomVariablesChkBx->setObjectName(QString::fromUtf8("mCustomVariablesChkBx"));

        gridLayout_32->addWidget(mCustomVariablesChkBx, 1, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_32->addItem(horizontalSpacer_14, 1, 1, 1, 1);

        mCustomVariablesTable = new QTableWidget(mEnvironmentGrpBx);
        if (mCustomVariablesTable->columnCount() < 3)
            mCustomVariablesTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mCustomVariablesTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mCustomVariablesTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mCustomVariablesTable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        mCustomVariablesTable->setObjectName(QString::fromUtf8("mCustomVariablesTable"));
        mCustomVariablesTable->setMinimumSize(QSize(0, 120));
        mCustomVariablesTable->setEditTriggers(QAbstractItemView::AllEditTriggers);
        mCustomVariablesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mCustomVariablesTable->setSortingEnabled(true);
        mCustomVariablesTable->setWordWrap(false);
        mCustomVariablesTable->setCornerButtonEnabled(false);
        mCustomVariablesTable->horizontalHeader()->setMinimumSectionSize(4);
        mCustomVariablesTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        mCustomVariablesTable->horizontalHeader()->setStretchLastSection(true);
        mCustomVariablesTable->verticalHeader()->setVisible(false);

        gridLayout_32->addWidget(mCustomVariablesTable, 3, 0, 1, 4);


        verticalLayout_22->addWidget(mEnvironmentGrpBx);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_11);

        mOptionsScrollArea_03->setWidget(mOptionsScrollAreaContents_03);

        verticalLayout_7->addWidget(mOptionsScrollArea_03);

        mOptionsStackedWidget->addWidget(mOptionsPageSystem);
        mOptionsPageDataSources = new QWidget();
        mOptionsPageDataSources->setObjectName(QString::fromUtf8("mOptionsPageDataSources"));
        verticalLayout_26 = new QVBoxLayout(mOptionsPageDataSources);
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        mOptionsScrollArea_11 = new QScrollArea(mOptionsPageDataSources);
        mOptionsScrollArea_11->setObjectName(QString::fromUtf8("mOptionsScrollArea_11"));
        mOptionsScrollArea_11->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_11->setWidgetResizable(true);
        mOptionsScrollAreaContents_11 = new QWidget();
        mOptionsScrollAreaContents_11->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_11"));
        mOptionsScrollAreaContents_11->setGeometry(QRect(0, 0, 531, 440));
        verticalLayout_27 = new QVBoxLayout(mOptionsScrollAreaContents_11);
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        groupBox_18 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_11);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        verticalLayout_23 = new QVBoxLayout(groupBox_18);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        cbxAttributeTableDocked = new QCheckBox(groupBox_18);
        cbxAttributeTableDocked->setObjectName(QString::fromUtf8("cbxAttributeTableDocked"));

        verticalLayout_23->addWidget(cbxAttributeTableDocked);

        cbxCopyWKTGeomFromTable = new QCheckBox(groupBox_18);
        cbxCopyWKTGeomFromTable->setObjectName(QString::fromUtf8("cbxCopyWKTGeomFromTable"));

        verticalLayout_23->addWidget(cbxCopyWKTGeomFromTable);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        textLabel1_7 = new QLabel(groupBox_18);
        textLabel1_7->setObjectName(QString::fromUtf8("textLabel1_7"));
        sizePolicy1.setHeightForWidth(textLabel1_7->sizePolicy().hasHeightForWidth());
        textLabel1_7->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(textLabel1_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        cmbAttrTableBehaviour = new QComboBox(groupBox_18);
        cmbAttrTableBehaviour->setObjectName(QString::fromUtf8("cmbAttrTableBehaviour"));

        horizontalLayout_5->addWidget(cmbAttrTableBehaviour);


        verticalLayout_23->addLayout(horizontalLayout_5);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        textLabel1_12 = new QLabel(groupBox_18);
        textLabel1_12->setObjectName(QString::fromUtf8("textLabel1_12"));
        sizePolicy1.setHeightForWidth(textLabel1_12->sizePolicy().hasHeightForWidth());
        textLabel1_12->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(textLabel1_12);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        spinBoxAttrTableRowCache = new QSpinBox(groupBox_18);
        spinBoxAttrTableRowCache->setObjectName(QString::fromUtf8("spinBoxAttrTableRowCache"));
        spinBoxAttrTableRowCache->setMinimum(0);
        spinBoxAttrTableRowCache->setMaximum(100000);
        spinBoxAttrTableRowCache->setSingleStep(1000);
        spinBoxAttrTableRowCache->setValue(10000);

        horizontalLayout_10->addWidget(spinBoxAttrTableRowCache);


        verticalLayout_23->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_14 = new QLabel(groupBox_18);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_6->addWidget(label_14);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        leNullValue = new QLineEdit(groupBox_18);
        leNullValue->setObjectName(QString::fromUtf8("leNullValue"));

        horizontalLayout_6->addWidget(leNullValue);


        verticalLayout_23->addLayout(horizontalLayout_6);


        verticalLayout_27->addWidget(groupBox_18);

        groupBox_19 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_11);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        verticalLayout_24 = new QVBoxLayout(groupBox_19);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_30 = new QLabel(groupBox_19);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_14->addWidget(label_30);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_12);

        cmbScanItemsInBrowser = new QComboBox(groupBox_19);
        cmbScanItemsInBrowser->setObjectName(QString::fromUtf8("cmbScanItemsInBrowser"));

        horizontalLayout_14->addWidget(cmbScanItemsInBrowser);


        verticalLayout_24->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_29 = new QLabel(groupBox_19);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_13->addWidget(label_29);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        cmbScanZipInBrowser = new QComboBox(groupBox_19);
        cmbScanZipInBrowser->setObjectName(QString::fromUtf8("cmbScanZipInBrowser"));

        horizontalLayout_13->addWidget(cmbScanZipInBrowser);


        verticalLayout_24->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        textLabel1_13 = new QLabel(groupBox_19);
        textLabel1_13->setObjectName(QString::fromUtf8("textLabel1_13"));
        sizePolicy1.setHeightForWidth(textLabel1_13->sizePolicy().hasHeightForWidth());
        textLabel1_13->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(textLabel1_13);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        cmbPromptRasterSublayers = new QComboBox(groupBox_19);
        cmbPromptRasterSublayers->setObjectName(QString::fromUtf8("cmbPromptRasterSublayers"));

        horizontalLayout_12->addWidget(cmbPromptRasterSublayers);


        verticalLayout_24->addLayout(horizontalLayout_12);

        cbxIgnoreShapeEncoding = new QCheckBox(groupBox_19);
        cbxIgnoreShapeEncoding->setObjectName(QString::fromUtf8("cbxIgnoreShapeEncoding"));

        verticalLayout_24->addWidget(cbxIgnoreShapeEncoding);

        cbxAddPostgisDC = new QCheckBox(groupBox_19);
        cbxAddPostgisDC->setObjectName(QString::fromUtf8("cbxAddPostgisDC"));

        verticalLayout_24->addWidget(cbxAddPostgisDC);

        cbxAddOracleDC = new QCheckBox(groupBox_19);
        cbxAddOracleDC->setObjectName(QString::fromUtf8("cbxAddOracleDC"));

        verticalLayout_24->addWidget(cbxAddOracleDC);


        verticalLayout_27->addWidget(groupBox_19);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_8);

        mOptionsScrollArea_11->setWidget(mOptionsScrollAreaContents_11);

        verticalLayout_26->addWidget(mOptionsScrollArea_11);

        mOptionsStackedWidget->addWidget(mOptionsPageDataSources);
        mOptionsPageRendering = new QWidget();
        mOptionsPageRendering->setObjectName(QString::fromUtf8("mOptionsPageRendering"));
        verticalLayout_12 = new QVBoxLayout(mOptionsPageRendering);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        mOptionsScrollArea_04 = new QScrollArea(mOptionsPageRendering);
        mOptionsScrollArea_04->setObjectName(QString::fromUtf8("mOptionsScrollArea_04"));
        mOptionsScrollArea_04->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_04->setWidgetResizable(true);
        mOptionsScrollAreaContents_04 = new QWidget();
        mOptionsScrollAreaContents_04->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_04"));
        mOptionsScrollAreaContents_04->setGeometry(QRect(0, 0, 710, 796));
        verticalLayout_29 = new QVBoxLayout(mOptionsScrollAreaContents_04);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        groupBox_5 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_04);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_9 = new QVBoxLayout(groupBox_5);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        chkAddedVisibility = new QCheckBox(groupBox_5);
        chkAddedVisibility->setObjectName(QString::fromUtf8("chkAddedVisibility"));

        verticalLayout_9->addWidget(chkAddedVisibility);

        chkUseRenderCaching = new QCheckBox(groupBox_5);
        chkUseRenderCaching->setObjectName(QString::fromUtf8("chkUseRenderCaching"));

        verticalLayout_9->addWidget(chkUseRenderCaching);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        chkParallelRendering = new QCheckBox(groupBox_5);
        chkParallelRendering->setObjectName(QString::fromUtf8("chkParallelRendering"));

        horizontalLayout_26->addWidget(chkParallelRendering);

        line_6 = new QFrame(groupBox_5);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_26->addWidget(line_6);

        chkMaxThreads = new QCheckBox(groupBox_5);
        chkMaxThreads->setObjectName(QString::fromUtf8("chkMaxThreads"));

        horizontalLayout_26->addWidget(chkMaxThreads);

        spinMaxThreads = new QSpinBox(groupBox_5);
        spinMaxThreads->setObjectName(QString::fromUtf8("spinMaxThreads"));

        horizontalLayout_26->addWidget(spinMaxThreads);

        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_41);


        verticalLayout_9->addLayout(horizontalLayout_26);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_56 = new QLabel(groupBox_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        horizontalLayout_4->addWidget(label_56);

        spinMapUpdateInterval = new QSpinBox(groupBox_5);
        spinMapUpdateInterval->setObjectName(QString::fromUtf8("spinMapUpdateInterval"));
        spinMapUpdateInterval->setMaximum(999999);
        spinMapUpdateInterval->setSingleStep(50);
        spinMapUpdateInterval->setValue(250);

        horizontalLayout_4->addWidget(spinMapUpdateInterval);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_46);


        verticalLayout_9->addLayout(horizontalLayout_4);

        mSimplifyDrawingGroupBox = new QgsCollapsibleGroupBox(groupBox_5);
        mSimplifyDrawingGroupBox->setObjectName(QString::fromUtf8("mSimplifyDrawingGroupBox"));
        mSimplifyDrawingGroupBox->setFlat(true);
        mSimplifyDrawingGroupBox->setCheckable(true);
        _14 = new QGridLayout(mSimplifyDrawingGroupBox);
        _14->setSpacing(6);
        _14->setContentsMargins(11, 11, 11, 11);
        _14->setObjectName(QString::fromUtf8("_14"));
        label_59 = new QLabel(mSimplifyDrawingGroupBox);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        _14->addWidget(label_59, 0, 1, 1, 4);

        label_65 = new QLabel(mSimplifyDrawingGroupBox);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setMargin(2);

        _14->addWidget(label_65, 1, 1, 1, 1);

        mSimplifyDrawingSpinBox = new QDoubleSpinBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingSpinBox->setObjectName(QString::fromUtf8("mSimplifyDrawingSpinBox"));
        mSimplifyDrawingSpinBox->setDecimals(2);
        mSimplifyDrawingSpinBox->setMinimum(1);
        mSimplifyDrawingSpinBox->setMaximum(5);
        mSimplifyDrawingSpinBox->setSingleStep(0.2);
        mSimplifyDrawingSpinBox->setValue(1);

        _14->addWidget(mSimplifyDrawingSpinBox, 1, 2, 1, 1);

        mSimplifyDrawingPx = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyDrawingPx->setObjectName(QString::fromUtf8("mSimplifyDrawingPx"));
        mSimplifyDrawingPx->setMargin(2);

        _14->addWidget(mSimplifyDrawingPx, 1, 3, 1, 1);

        horizontalSpacer_40 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _14->addItem(horizontalSpacer_40, 1, 4, 1, 1);

        mSimplifyDrawingAtProvider = new QCheckBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingAtProvider->setObjectName(QString::fromUtf8("mSimplifyDrawingAtProvider"));

        _14->addWidget(mSimplifyDrawingAtProvider, 2, 1, 1, 4);

        mSimplifyMaxScaleLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyMaxScaleLabel->setObjectName(QString::fromUtf8("mSimplifyMaxScaleLabel"));
        mSimplifyMaxScaleLabel->setMargin(2);

        _14->addWidget(mSimplifyMaxScaleLabel, 3, 1, 1, 1);

        mSimplifyMaximumScaleComboBox = new QgsScaleComboBox(mSimplifyDrawingGroupBox);
        mSimplifyMaximumScaleComboBox->setObjectName(QString::fromUtf8("mSimplifyMaximumScaleComboBox"));
        sizePolicy4.setHeightForWidth(mSimplifyMaximumScaleComboBox->sizePolicy().hasHeightForWidth());
        mSimplifyMaximumScaleComboBox->setSizePolicy(sizePolicy4);

        _14->addWidget(mSimplifyMaximumScaleComboBox, 3, 2, 1, 1);


        verticalLayout_9->addWidget(mSimplifyDrawingGroupBox);


        verticalLayout_29->addWidget(groupBox_5);

        groupBox_8 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_04);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        _5 = new QVBoxLayout(groupBox_8);
        _5->setSpacing(6);
        _5->setContentsMargins(11, 11, 11, 11);
        _5->setObjectName(QString::fromUtf8("_5"));
        chkAntiAliasing = new QCheckBox(groupBox_8);
        chkAntiAliasing->setObjectName(QString::fromUtf8("chkAntiAliasing"));

        _5->addWidget(chkAntiAliasing);


        verticalLayout_29->addWidget(groupBox_8);

        groupBox_14 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_04);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        verticalLayout_10 = new QVBoxLayout(groupBox_14);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        widget = new QWidget(groupBox_14);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_19 = new QHBoxLayout(widget);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_19->addWidget(label_21);

        horizontalSpacer_19 = new QSpacerItem(15, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_19);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_19->addWidget(label_22);

        spnRed = new QSpinBox(widget);
        spnRed->setObjectName(QString::fromUtf8("spnRed"));

        horizontalLayout_19->addWidget(spnRed);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_19->addWidget(label_23);

        spnGreen = new QSpinBox(widget);
        spnGreen->setObjectName(QString::fromUtf8("spnGreen"));

        horizontalLayout_19->addWidget(spnGreen);

        label_24 = new QLabel(widget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_19->addWidget(label_24);

        spnBlue = new QSpinBox(widget);
        spnBlue->setObjectName(QString::fromUtf8("spnBlue"));

        horizontalLayout_19->addWidget(spnBlue);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_20);


        verticalLayout_10->addWidget(widget);

        groupBox_17 = new QGroupBox(groupBox_14);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setFlat(true);
        verticalLayout_11 = new QVBoxLayout(groupBox_17);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        widget_3 = new QWidget(groupBox_17);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_22 = new QHBoxLayout(widget_3);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_37 = new QLabel(widget_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout_22->addWidget(label_37);

        cboxContrastEnhancementAlgorithmSingleBand = new QComboBox(widget_3);
        cboxContrastEnhancementAlgorithmSingleBand->setObjectName(QString::fromUtf8("cboxContrastEnhancementAlgorithmSingleBand"));

        horizontalLayout_22->addWidget(cboxContrastEnhancementAlgorithmSingleBand);

        horizontalSpacer_23 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_23);


        verticalLayout_11->addWidget(widget_3);

        widget_4 = new QWidget(groupBox_17);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_23 = new QHBoxLayout(widget_4);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_38 = new QLabel(widget_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        horizontalLayout_23->addWidget(label_38);

        cboxContrastEnhancementAlgorithmMultiBandSingleByte = new QComboBox(widget_4);
        cboxContrastEnhancementAlgorithmMultiBandSingleByte->setObjectName(QString::fromUtf8("cboxContrastEnhancementAlgorithmMultiBandSingleByte"));

        horizontalLayout_23->addWidget(cboxContrastEnhancementAlgorithmMultiBandSingleByte);

        horizontalSpacer_24 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_24);


        verticalLayout_11->addWidget(widget_4);

        widget_5 = new QWidget(groupBox_17);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_24 = new QHBoxLayout(widget_5);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_39 = new QLabel(widget_5);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        horizontalLayout_24->addWidget(label_39);

        cboxContrastEnhancementAlgorithmMultiBandMultiByte = new QComboBox(widget_5);
        cboxContrastEnhancementAlgorithmMultiBandMultiByte->setObjectName(QString::fromUtf8("cboxContrastEnhancementAlgorithmMultiBandMultiByte"));

        horizontalLayout_24->addWidget(cboxContrastEnhancementAlgorithmMultiBandMultiByte);

        horizontalSpacer_25 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_25);


        verticalLayout_11->addWidget(widget_5);

        line = new QFrame(groupBox_17);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line);

        widget_6 = new QWidget(groupBox_17);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_25 = new QHBoxLayout(widget_6);
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_40 = new QLabel(widget_6);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_25->addWidget(label_40);

        cboxContrastEnhancementLimits = new QComboBox(widget_6);
        cboxContrastEnhancementLimits->setObjectName(QString::fromUtf8("cboxContrastEnhancementLimits"));

        horizontalLayout_25->addWidget(cboxContrastEnhancementLimits);

        horizontalSpacer_26 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_26);


        verticalLayout_11->addWidget(widget_6);

        widget_7 = new QWidget(groupBox_17);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_18 = new QHBoxLayout(widget_7);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_36 = new QLabel(widget_7);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_18->addWidget(label_36);

        mRasterCumulativeCutLowerDoubleSpinBox = new QDoubleSpinBox(widget_7);
        mRasterCumulativeCutLowerDoubleSpinBox->setObjectName(QString::fromUtf8("mRasterCumulativeCutLowerDoubleSpinBox"));
        mRasterCumulativeCutLowerDoubleSpinBox->setDecimals(1);

        horizontalLayout_18->addWidget(mRasterCumulativeCutLowerDoubleSpinBox);

        label_34 = new QLabel(widget_7);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_18->addWidget(label_34);

        mRasterCumulativeCutUpperDoubleSpinBox = new QDoubleSpinBox(widget_7);
        mRasterCumulativeCutUpperDoubleSpinBox->setObjectName(QString::fromUtf8("mRasterCumulativeCutUpperDoubleSpinBox"));
        mRasterCumulativeCutUpperDoubleSpinBox->setDecimals(1);

        horizontalLayout_18->addWidget(mRasterCumulativeCutUpperDoubleSpinBox);

        label_35 = new QLabel(widget_7);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        horizontalLayout_18->addWidget(label_35);

        horizontalSpacer_18 = new QSpacerItem(123, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);


        verticalLayout_11->addWidget(widget_7);

        widget_2 = new QWidget(groupBox_17);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_20 = new QHBoxLayout(widget_2);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_25 = new QLabel(widget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_20->addWidget(label_25);

        spnThreeBandStdDev = new QDoubleSpinBox(widget_2);
        spnThreeBandStdDev->setObjectName(QString::fromUtf8("spnThreeBandStdDev"));
        spnThreeBandStdDev->setMaximum(10);
        spnThreeBandStdDev->setSingleStep(0.1);

        horizontalLayout_20->addWidget(spnThreeBandStdDev);

        horizontalSpacer_21 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_21);


        verticalLayout_11->addWidget(widget_2);


        verticalLayout_10->addWidget(groupBox_17);


        verticalLayout_29->addWidget(groupBox_14);

        groupBox_22 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_04);
        groupBox_22->setObjectName(QString::fromUtf8("groupBox_22"));
        verticalLayout_35 = new QVBoxLayout(groupBox_22);
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setContentsMargins(11, 11, 11, 11);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        label_55 = new QLabel(groupBox_22);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        verticalLayout_35->addWidget(label_55);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_37 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_37, 0, 0, 1, 1);

        mLogCanvasRefreshChkBx = new QCheckBox(groupBox_22);
        mLogCanvasRefreshChkBx->setObjectName(QString::fromUtf8("mLogCanvasRefreshChkBx"));

        gridLayout_6->addWidget(mLogCanvasRefreshChkBx, 0, 1, 1, 1);


        verticalLayout_35->addLayout(gridLayout_6);


        verticalLayout_29->addWidget(groupBox_22);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_29->addItem(verticalSpacer_6);

        mOptionsScrollArea_04->setWidget(mOptionsScrollAreaContents_04);

        verticalLayout_12->addWidget(mOptionsScrollArea_04);

        mOptionsStackedWidget->addWidget(mOptionsPageRendering);
        mOptionsPageColors = new QWidget();
        mOptionsPageColors->setObjectName(QString::fromUtf8("mOptionsPageColors"));
        verticalLayout_38 = new QVBoxLayout(mOptionsPageColors);
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setContentsMargins(0, 0, 0, 0);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        scrollArea = new QScrollArea(mOptionsPageColors);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 239, 258));
        horizontalLayout_46 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        groupBox_7 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        mButtonPasteColors = new QPushButton(groupBox_7);
        mButtonPasteColors->setObjectName(QString::fromUtf8("mButtonPasteColors"));

        gridLayout_12->addWidget(mButtonPasteColors, 3, 1, 1, 1);

        mButtonExportColors = new QPushButton(groupBox_7);
        mButtonExportColors->setObjectName(QString::fromUtf8("mButtonExportColors"));

        gridLayout_12->addWidget(mButtonExportColors, 5, 1, 1, 1);

        mButtonAddColor = new QPushButton(groupBox_7);
        mButtonAddColor->setObjectName(QString::fromUtf8("mButtonAddColor"));

        gridLayout_12->addWidget(mButtonAddColor, 0, 1, 1, 1);

        mButtonRemoveColor = new QPushButton(groupBox_7);
        mButtonRemoveColor->setObjectName(QString::fromUtf8("mButtonRemoveColor"));

        gridLayout_12->addWidget(mButtonRemoveColor, 1, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_12, 6, 1, 1, 1);

        mButtonCopyColors = new QPushButton(groupBox_7);
        mButtonCopyColors->setObjectName(QString::fromUtf8("mButtonCopyColors"));

        gridLayout_12->addWidget(mButtonCopyColors, 2, 1, 1, 1);

        mButtonImportColors = new QPushButton(groupBox_7);
        mButtonImportColors->setObjectName(QString::fromUtf8("mButtonImportColors"));

        gridLayout_12->addWidget(mButtonImportColors, 4, 1, 1, 1);

        mTreeCustomColors = new QgsColorSchemeList(groupBox_7);
        mTreeCustomColors->setObjectName(QString::fromUtf8("mTreeCustomColors"));

        gridLayout_12->addWidget(mTreeCustomColors, 0, 0, 8, 1);


        horizontalLayout_46->addWidget(groupBox_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_38->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptionsPageColors);
        mOptionsPageMapCanvas = new QWidget();
        mOptionsPageMapCanvas->setObjectName(QString::fromUtf8("mOptionsPageMapCanvas"));
        verticalLayout_16 = new QVBoxLayout(mOptionsPageMapCanvas);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        mOptionsScrollArea_06 = new QScrollArea(mOptionsPageMapCanvas);
        mOptionsScrollArea_06->setObjectName(QString::fromUtf8("mOptionsScrollArea_06"));
        mOptionsScrollArea_06->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_06->setWidgetResizable(true);
        mOptionsScrollAreaContents_06 = new QWidget();
        mOptionsScrollAreaContents_06->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_06"));
        mOptionsScrollAreaContents_06->setGeometry(QRect(0, 0, 526, 327));
        verticalLayout_25 = new QVBoxLayout(mOptionsScrollAreaContents_06);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        groupBox_9 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_06);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_7 = new QGridLayout(groupBox_9);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pbnCanvasColor = new QgsColorButtonV2(groupBox_9);
        pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
        sizePolicy1.setHeightForWidth(pbnCanvasColor->sizePolicy().hasHeightForWidth());
        pbnCanvasColor->setSizePolicy(sizePolicy1);
        pbnCanvasColor->setMinimumSize(QSize(120, 0));
        pbnCanvasColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(pbnCanvasColor, 0, 4, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_28, 0, 6, 1, 1);

        label = new QLabel(groupBox_9);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(label, 0, 3, 1, 1);

        textLabel1_9 = new QLabel(groupBox_9);
        textLabel1_9->setObjectName(QString::fromUtf8("textLabel1_9"));
        sizePolicy3.setHeightForWidth(textLabel1_9->sizePolicy().hasHeightForWidth());
        textLabel1_9->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(textLabel1_9, 0, 0, 1, 1);

        pbnSelectionColor = new QgsColorButtonV2(groupBox_9);
        pbnSelectionColor->setObjectName(QString::fromUtf8("pbnSelectionColor"));
        sizePolicy1.setHeightForWidth(pbnSelectionColor->sizePolicy().hasHeightForWidth());
        pbnSelectionColor->setSizePolicy(sizePolicy1);
        pbnSelectionColor->setMinimumSize(QSize(120, 0));
        pbnSelectionColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(pbnSelectionColor, 0, 1, 1, 1);


        verticalLayout_25->addWidget(groupBox_9);

        mLegendGrpBx = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_06);
        mLegendGrpBx->setObjectName(QString::fromUtf8("mLegendGrpBx"));
        mLegendGrpBx->setMinimumSize(QSize(0, 0));
        verticalLayout_21 = new QVBoxLayout(mLegendGrpBx);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_15 = new QLabel(mLegendGrpBx);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        cmbLegendDoubleClickAction = new QComboBox(mLegendGrpBx);
        cmbLegendDoubleClickAction->setObjectName(QString::fromUtf8("cmbLegendDoubleClickAction"));

        horizontalLayout_8->addWidget(cmbLegendDoubleClickAction);


        verticalLayout_21->addLayout(horizontalLayout_8);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        line_4 = new QFrame(mLegendGrpBx);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setMinimumSize(QSize(12, 0));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 1, 2, 1, 1);

        horizontalSpacer_34 = new QSpacerItem(8, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_34, 1, 0, 1, 1);

        capitaliseCheckBox = new QCheckBox(mLegendGrpBx);
        capitaliseCheckBox->setObjectName(QString::fromUtf8("capitaliseCheckBox"));
        sizePolicy2.setHeightForWidth(capitaliseCheckBox->sizePolicy().hasHeightForWidth());
        capitaliseCheckBox->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(capitaliseCheckBox, 1, 1, 1, 1);

        mLegendLayersBoldChkBx = new QCheckBox(mLegendGrpBx);
        mLegendLayersBoldChkBx->setObjectName(QString::fromUtf8("mLegendLayersBoldChkBx"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mLegendLayersBoldChkBx->sizePolicy().hasHeightForWidth());
        mLegendLayersBoldChkBx->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(mLegendLayersBoldChkBx, 1, 3, 1, 1);

        cbxLegendClassifiers = new QCheckBox(mLegendGrpBx);
        cbxLegendClassifiers->setObjectName(QString::fromUtf8("cbxLegendClassifiers"));

        gridLayout_3->addWidget(cbxLegendClassifiers, 3, 1, 1, 3);

        mLegendGroupsBoldChkBx = new QCheckBox(mLegendGrpBx);
        mLegendGroupsBoldChkBx->setObjectName(QString::fromUtf8("mLegendGroupsBoldChkBx"));

        gridLayout_3->addWidget(mLegendGroupsBoldChkBx, 2, 1, 1, 3);

        cbxCreateRasterLegendIcons = new QCheckBox(mLegendGrpBx);
        cbxCreateRasterLegendIcons->setObjectName(QString::fromUtf8("cbxCreateRasterLegendIcons"));

        gridLayout_3->addWidget(cbxCreateRasterLegendIcons, 4, 1, 1, 3);

        label_53 = new QLabel(mLegendGrpBx);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_53->sizePolicy().hasHeightForWidth());
        label_53->setSizePolicy(sizePolicy6);

        gridLayout_3->addWidget(label_53, 0, 0, 1, 4);


        verticalLayout_21->addLayout(gridLayout_3);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        label_58 = new QLabel(mLegendGrpBx);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        horizontalLayout_34->addWidget(label_58);

        horizontalSpacer_39 = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_39);

        mLegendGraphicResolutionSpinBox = new QSpinBox(mLegendGrpBx);
        mLegendGraphicResolutionSpinBox->setObjectName(QString::fromUtf8("mLegendGraphicResolutionSpinBox"));
        mLegendGraphicResolutionSpinBox->setMinimum(0);
        mLegendGraphicResolutionSpinBox->setMaximum(1000000);

        horizontalLayout_34->addWidget(mLegendGraphicResolutionSpinBox);


        verticalLayout_21->addLayout(horizontalLayout_34);


        verticalLayout_25->addWidget(mLegendGrpBx);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_25->addItem(spacerItem2);

        mOptionsScrollArea_06->setWidget(mOptionsScrollAreaContents_06);

        verticalLayout_16->addWidget(mOptionsScrollArea_06);

        mOptionsStackedWidget->addWidget(mOptionsPageMapCanvas);
        mOptionsPageMapTools = new QWidget();
        mOptionsPageMapTools->setObjectName(QString::fromUtf8("mOptionsPageMapTools"));
        verticalLayout_14 = new QVBoxLayout(mOptionsPageMapTools);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        mOptionsScrollArea_05 = new QScrollArea(mOptionsPageMapTools);
        mOptionsScrollArea_05->setObjectName(QString::fromUtf8("mOptionsScrollArea_05"));
        mOptionsScrollArea_05->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_05->setWidgetResizable(true);
        mOptionsScrollAreaContents_05 = new QWidget();
        mOptionsScrollAreaContents_05->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_05"));
        mOptionsScrollAreaContents_05->setGeometry(QRect(0, 0, 684, 625));
        verticalLayout_30 = new QVBoxLayout(mOptionsScrollAreaContents_05);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        mIdentifyGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        mIdentifyGroupBox->setObjectName(QString::fromUtf8("mIdentifyGroupBox"));
        verticalLayout_37 = new QVBoxLayout(mIdentifyGroupBox);
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setContentsMargins(11, 11, 11, 11);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        mIdentifyRadiusHorizontalLayout = new QHBoxLayout();
        mIdentifyRadiusHorizontalLayout->setSpacing(6);
        mIdentifyRadiusHorizontalLayout->setObjectName(QString::fromUtf8("mIdentifyRadiusHorizontalLayout"));
        textLabel1_3 = new QLabel(mIdentifyGroupBox);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        mIdentifyRadiusHorizontalLayout->addWidget(textLabel1_3);

        spinBoxIdentifyValue = new QDoubleSpinBox(mIdentifyGroupBox);
        spinBoxIdentifyValue->setObjectName(QString::fromUtf8("spinBoxIdentifyValue"));
        spinBoxIdentifyValue->setMaximum(100);
        spinBoxIdentifyValue->setSingleStep(1);
        spinBoxIdentifyValue->setValue(2);

        mIdentifyRadiusHorizontalLayout->addWidget(spinBoxIdentifyValue);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mIdentifyRadiusHorizontalLayout->addItem(horizontalSpacer_44);


        verticalLayout_37->addLayout(mIdentifyRadiusHorizontalLayout);

        textLabel2 = new QLabel(mIdentifyGroupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        verticalLayout_37->addWidget(textLabel2);

        mIdentifyHighlightHorizontalLayout = new QHBoxLayout();
        mIdentifyHighlightHorizontalLayout->setSpacing(6);
        mIdentifyHighlightHorizontalLayout->setObjectName(QString::fromUtf8("mIdentifyHighlightHorizontalLayout"));
        mIdentifyHighlighColorLabel = new QLabel(mIdentifyGroupBox);
        mIdentifyHighlighColorLabel->setObjectName(QString::fromUtf8("mIdentifyHighlighColorLabel"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlighColorLabel);

        mIdentifyHighlightColorButton = new QgsColorButtonV2(mIdentifyGroupBox);
        mIdentifyHighlightColorButton->setObjectName(QString::fromUtf8("mIdentifyHighlightColorButton"));
        sizePolicy1.setHeightForWidth(mIdentifyHighlightColorButton->sizePolicy().hasHeightForWidth());
        mIdentifyHighlightColorButton->setSizePolicy(sizePolicy1);
        mIdentifyHighlightColorButton->setMinimumSize(QSize(120, 0));
        mIdentifyHighlightColorButton->setMaximumSize(QSize(120, 16777215));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightColorButton);

        mIdentifyHighlightBufferLabel = new QLabel(mIdentifyGroupBox);
        mIdentifyHighlightBufferLabel->setObjectName(QString::fromUtf8("mIdentifyHighlightBufferLabel"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightBufferLabel);

        mIdentifyHighlightBufferSpinBox = new QDoubleSpinBox(mIdentifyGroupBox);
        mIdentifyHighlightBufferSpinBox->setObjectName(QString::fromUtf8("mIdentifyHighlightBufferSpinBox"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightBufferSpinBox);

        mIdentifyHighlightMinWidthLabel = new QLabel(mIdentifyGroupBox);
        mIdentifyHighlightMinWidthLabel->setObjectName(QString::fromUtf8("mIdentifyHighlightMinWidthLabel"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightMinWidthLabel);

        mIdentifyHighlightMinWidthSpinBox = new QDoubleSpinBox(mIdentifyGroupBox);
        mIdentifyHighlightMinWidthSpinBox->setObjectName(QString::fromUtf8("mIdentifyHighlightMinWidthSpinBox"));

        mIdentifyHighlightHorizontalLayout->addWidget(mIdentifyHighlightMinWidthSpinBox);

        horizontalSpacer_45 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mIdentifyHighlightHorizontalLayout->addItem(horizontalSpacer_45);


        verticalLayout_37->addLayout(mIdentifyHighlightHorizontalLayout);


        verticalLayout_30->addWidget(mIdentifyGroupBox);

        groupBox_6 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_21 = new QGridLayout(groupBox_6);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        textLabel1_10 = new QLabel(groupBox_6);
        textLabel1_10->setObjectName(QString::fromUtf8("textLabel1_10"));

        gridLayout_21->addWidget(textLabel1_10, 2, 0, 1, 1);

        textLabel1_11 = new QLabel(groupBox_6);
        textLabel1_11->setObjectName(QString::fromUtf8("textLabel1_11"));

        gridLayout_21->addWidget(textLabel1_11, 5, 0, 1, 1);

        radMeters = new QRadioButton(groupBox_6);
        radMeters->setObjectName(QString::fromUtf8("radMeters"));

        gridLayout_21->addWidget(radMeters, 5, 1, 1, 1);

        radFeet = new QRadioButton(groupBox_6);
        radFeet->setObjectName(QString::fromUtf8("radFeet"));

        gridLayout_21->addWidget(radFeet, 5, 2, 1, 1);

        radNautical = new QRadioButton(groupBox_6);
        radNautical->setObjectName(QString::fromUtf8("radNautical"));

        gridLayout_21->addWidget(radNautical, 5, 3, 1, 1);

        radDegrees = new QRadioButton(groupBox_6);
        radDegrees->setObjectName(QString::fromUtf8("radDegrees"));

        gridLayout_21->addWidget(radDegrees, 5, 4, 1, 1);

        mAngleUnitsLabel = new QLabel(groupBox_6);
        mAngleUnitsLabel->setObjectName(QString::fromUtf8("mAngleUnitsLabel"));

        gridLayout_21->addWidget(mAngleUnitsLabel, 6, 0, 1, 1);

        mDegreesRadioButton = new QRadioButton(groupBox_6);
        mDegreesRadioButton->setObjectName(QString::fromUtf8("mDegreesRadioButton"));

        gridLayout_21->addWidget(mDegreesRadioButton, 6, 1, 1, 1);

        mRadiansRadioButton = new QRadioButton(groupBox_6);
        mRadiansRadioButton->setObjectName(QString::fromUtf8("mRadiansRadioButton"));

        gridLayout_21->addWidget(mRadiansRadioButton, 6, 2, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_21->addWidget(label_12, 3, 0, 1, 1);

        mDecimalPlacesSpinBox = new QSpinBox(groupBox_6);
        mDecimalPlacesSpinBox->setObjectName(QString::fromUtf8("mDecimalPlacesSpinBox"));

        gridLayout_21->addWidget(mDecimalPlacesSpinBox, 3, 1, 1, 1);

        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_21->addWidget(label_13, 4, 0, 1, 1);

        mKeepBaseUnitCheckBox = new QCheckBox(groupBox_6);
        mKeepBaseUnitCheckBox->setObjectName(QString::fromUtf8("mKeepBaseUnitCheckBox"));

        gridLayout_21->addWidget(mKeepBaseUnitCheckBox, 4, 1, 1, 1);

        mGonRadioButton = new QRadioButton(groupBox_6);
        mGonRadioButton->setObjectName(QString::fromUtf8("mGonRadioButton"));

        gridLayout_21->addWidget(mGonRadioButton, 6, 3, 1, 1);

        spacerItem3 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(spacerItem3, 2, 2, 1, 3);

        pbnMeasureColor = new QgsColorButtonV2(groupBox_6);
        pbnMeasureColor->setObjectName(QString::fromUtf8("pbnMeasureColor"));
        sizePolicy1.setHeightForWidth(pbnMeasureColor->sizePolicy().hasHeightForWidth());
        pbnMeasureColor->setSizePolicy(sizePolicy1);
        pbnMeasureColor->setMinimumSize(QSize(120, 0));
        pbnMeasureColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_21->addWidget(pbnMeasureColor, 2, 1, 1, 1);


        verticalLayout_30->addWidget(groupBox_6);

        groupBox_10 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        _8 = new QGridLayout(groupBox_10);
        _8->setSpacing(6);
        _8->setContentsMargins(9, 9, 9, 9);
        _8->setObjectName(QString::fromUtf8("_8"));
        label_3 = new QLabel(groupBox_10);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        _8->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_10);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        _8->addWidget(label_2, 0, 0, 1, 1);

        spinZoomFactor = new QDoubleSpinBox(groupBox_10);
        spinZoomFactor->setObjectName(QString::fromUtf8("spinZoomFactor"));
        spinZoomFactor->setDecimals(1);
        spinZoomFactor->setMinimum(1.1);
        spinZoomFactor->setValue(2);

        _8->addWidget(spinZoomFactor, 1, 1, 1, 1);

        cmbWheelAction = new QComboBox(groupBox_10);
        cmbWheelAction->setObjectName(QString::fromUtf8("cmbWheelAction"));

        _8->addWidget(cmbWheelAction, 0, 1, 1, 1);


        verticalLayout_30->addWidget(groupBox_10);

        groupBox_15 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_05);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        gridLayout_26 = new QGridLayout(groupBox_15);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        mListGlobalScales = new QListWidget(groupBox_15);
        mListGlobalScales->setObjectName(QString::fromUtf8("mListGlobalScales"));

        gridLayout_26->addWidget(mListGlobalScales, 0, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        pbnAddScale = new QToolButton(groupBox_15);
        pbnAddScale->setObjectName(QString::fromUtf8("pbnAddScale"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/mActionSignPlus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddScale->setIcon(icon13);

        verticalLayout_13->addWidget(pbnAddScale);

        pbnRemoveScale = new QToolButton(groupBox_15);
        pbnRemoveScale->setObjectName(QString::fromUtf8("pbnRemoveScale"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/mActionSignMinus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveScale->setIcon(icon14);

        verticalLayout_13->addWidget(pbnRemoveScale);

        pbnDefaultScaleValues = new QToolButton(groupBox_15);
        pbnDefaultScaleValues->setObjectName(QString::fromUtf8("pbnDefaultScaleValues"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTable.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnDefaultScaleValues->setIcon(icon15);

        verticalLayout_13->addWidget(pbnDefaultScaleValues);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_7);

        pbnImportScales = new QToolButton(groupBox_15);
        pbnImportScales->setObjectName(QString::fromUtf8("pbnImportScales"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnImportScales->setIcon(icon16);

        verticalLayout_13->addWidget(pbnImportScales);

        pbnExportScales = new QToolButton(groupBox_15);
        pbnExportScales->setObjectName(QString::fromUtf8("pbnExportScales"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportScales->setIcon(icon17);

        verticalLayout_13->addWidget(pbnExportScales);


        gridLayout_26->addLayout(verticalLayout_13, 0, 1, 1, 1);


        verticalLayout_30->addWidget(groupBox_15);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_30->addItem(verticalSpacer_3);

        mOptionsScrollArea_05->setWidget(mOptionsScrollAreaContents_05);

        verticalLayout_14->addWidget(mOptionsScrollArea_05);

        mOptionsStackedWidget->addWidget(mOptionsPageMapTools);
        mOptionsPageComposer = new QWidget();
        mOptionsPageComposer->setObjectName(QString::fromUtf8("mOptionsPageComposer"));
        verticalLayout_36 = new QVBoxLayout(mOptionsPageComposer);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        mOptionsScrollArea_12 = new QScrollArea(mOptionsPageComposer);
        mOptionsScrollArea_12->setObjectName(QString::fromUtf8("mOptionsScrollArea_12"));
        mOptionsScrollArea_12->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_12->setWidgetResizable(true);
        mOptionsScrollAreaContents_12 = new QWidget();
        mOptionsScrollAreaContents_12->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_12"));
        mOptionsScrollAreaContents_12->setGeometry(QRect(0, 0, 504, 307));
        verticalLayout_39 = new QVBoxLayout(mOptionsScrollAreaContents_12);
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setContentsMargins(11, 11, 11, 11);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        verticalLayout_39->setContentsMargins(-1, 9, -1, -1);
        groupBox_3 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setEnabled(true);
        gridLayout_8 = new QGridLayout(groupBox_3);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        label_60 = new QLabel(groupBox_3);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        horizontalLayout_39->addWidget(label_60);

        mComposerFontComboBox = new QFontComboBox(groupBox_3);
        mComposerFontComboBox->setObjectName(QString::fromUtf8("mComposerFontComboBox"));

        horizontalLayout_39->addWidget(mComposerFontComboBox);


        gridLayout_8->addLayout(horizontalLayout_39, 1, 0, 1, 1);


        verticalLayout_39->addWidget(groupBox_3);

        groupBox_23 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_23->setObjectName(QString::fromUtf8("groupBox_23"));
        gridLayout_9 = new QGridLayout(groupBox_23);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_66 = new QLabel(groupBox_23);
        label_66->setObjectName(QString::fromUtf8("label_66"));

        gridLayout_9->addWidget(label_66, 0, 0, 1, 1);

        mGridStyleComboBox = new QComboBox(groupBox_23);
        mGridStyleComboBox->setObjectName(QString::fromUtf8("mGridStyleComboBox"));

        gridLayout_9->addWidget(mGridStyleComboBox, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_23);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_9->addWidget(label_4, 0, 3, 1, 1);

        mGridColorButton = new QgsColorButtonV2(groupBox_23);
        mGridColorButton->setObjectName(QString::fromUtf8("mGridColorButton"));
        mGridColorButton->setMinimumSize(QSize(120, 0));
        mGridColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_9->addWidget(mGridColorButton, 0, 4, 1, 1);


        verticalLayout_39->addWidget(groupBox_23);

        groupBox_24 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_12);
        groupBox_24->setObjectName(QString::fromUtf8("groupBox_24"));
        gridLayout_11 = new QGridLayout(groupBox_24);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_61 = new QLabel(groupBox_24);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        gridLayout_11->addWidget(label_61, 0, 0, 1, 1);

        mGridResolutionSpinBox = new QDoubleSpinBox(groupBox_24);
        mGridResolutionSpinBox->setObjectName(QString::fromUtf8("mGridResolutionSpinBox"));
        mGridResolutionSpinBox->setMinimum(0.5);
        mGridResolutionSpinBox->setMaximum(9999);

        gridLayout_11->addWidget(mGridResolutionSpinBox, 0, 1, 1, 1);

        label_63 = new QLabel(groupBox_24);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setWordWrap(true);

        gridLayout_11->addWidget(label_63, 0, 2, 1, 1);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        mOffsetXSpinBox = new QDoubleSpinBox(groupBox_24);
        mOffsetXSpinBox->setObjectName(QString::fromUtf8("mOffsetXSpinBox"));
        mOffsetXSpinBox->setMaximum(9999);

        horizontalLayout_36->addWidget(mOffsetXSpinBox);

        mOffsetYSpinBox = new QDoubleSpinBox(groupBox_24);
        mOffsetYSpinBox->setObjectName(QString::fromUtf8("mOffsetYSpinBox"));

        horizontalLayout_36->addWidget(mOffsetYSpinBox);


        gridLayout_11->addLayout(horizontalLayout_36, 0, 3, 1, 1);

        label_62 = new QLabel(groupBox_24);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        gridLayout_11->addWidget(label_62, 1, 0, 1, 1);

        mSnapToleranceSpinBox = new QSpinBox(groupBox_24);
        mSnapToleranceSpinBox->setObjectName(QString::fromUtf8("mSnapToleranceSpinBox"));
        mSnapToleranceSpinBox->setMaximum(200);

        gridLayout_11->addWidget(mSnapToleranceSpinBox, 1, 1, 1, 1);


        verticalLayout_39->addWidget(groupBox_24);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_39->addItem(verticalSpacer_10);

        mOptionsScrollArea_12->setWidget(mOptionsScrollAreaContents_12);

        verticalLayout_36->addWidget(mOptionsScrollArea_12);

        mOptionsStackedWidget->addWidget(mOptionsPageComposer);
        mOptionsPageDigitizing = new QWidget();
        mOptionsPageDigitizing->setObjectName(QString::fromUtf8("mOptionsPageDigitizing"));
        verticalLayout_17 = new QVBoxLayout(mOptionsPageDigitizing);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        mOptionsScrollArea_07 = new QScrollArea(mOptionsPageDigitizing);
        mOptionsScrollArea_07->setObjectName(QString::fromUtf8("mOptionsScrollArea_07"));
        mOptionsScrollArea_07->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_07->setWidgetResizable(true);
        mOptionsScrollAreaContents_07 = new QWidget();
        mOptionsScrollAreaContents_07->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_07"));
        mOptionsScrollAreaContents_07->setGeometry(QRect(0, 0, 501, 640));
        verticalLayout_31 = new QVBoxLayout(mOptionsScrollAreaContents_07);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(-1, 9, -1, -1);
        mEnterAttributeValuesGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mEnterAttributeValuesGroupBox->setObjectName(QString::fromUtf8("mEnterAttributeValuesGroupBox"));
        gridLayout_28 = new QGridLayout(mEnterAttributeValuesGroupBox);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        mValidateGeometries = new QComboBox(mEnterAttributeValuesGroupBox);
        mValidateGeometries->setObjectName(QString::fromUtf8("mValidateGeometries"));
        sizePolicy4.setHeightForWidth(mValidateGeometries->sizePolicy().hasHeightForWidth());
        mValidateGeometries->setSizePolicy(sizePolicy4);

        gridLayout_28->addWidget(mValidateGeometries, 2, 2, 1, 1);

        label_19 = new QLabel(mEnterAttributeValuesGroupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_28->addWidget(label_19, 2, 0, 1, 1);

        chkDisableAttributeValuesDlg = new QCheckBox(mEnterAttributeValuesGroupBox);
        chkDisableAttributeValuesDlg->setObjectName(QString::fromUtf8("chkDisableAttributeValuesDlg"));
        chkDisableAttributeValuesDlg->setTristate(false);

        gridLayout_28->addWidget(chkDisableAttributeValuesDlg, 0, 0, 1, 3);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_32, 2, 1, 1, 1);

        chkReuseLastValues = new QCheckBox(mEnterAttributeValuesGroupBox);
        chkReuseLastValues->setObjectName(QString::fromUtf8("chkReuseLastValues"));
        chkReuseLastValues->setTristate(false);

        gridLayout_28->addWidget(chkReuseLastValues, 1, 0, 1, 3);


        verticalLayout_31->addWidget(mEnterAttributeValuesGroupBox);

        mRubberBandGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mRubberBandGroupBox->setObjectName(QString::fromUtf8("mRubberBandGroupBox"));
        _9 = new QGridLayout(mRubberBandGroupBox);
        _9->setSpacing(6);
        _9->setContentsMargins(11, 11, 11, 11);
        _9->setObjectName(QString::fromUtf8("_9"));
        mLineColorTextLabel = new QLabel(mRubberBandGroupBox);
        mLineColorTextLabel->setObjectName(QString::fromUtf8("mLineColorTextLabel"));
        sizePolicy3.setHeightForWidth(mLineColorTextLabel->sizePolicy().hasHeightForWidth());
        mLineColorTextLabel->setSizePolicy(sizePolicy3);

        _9->addWidget(mLineColorTextLabel, 0, 2, 1, 1);

        mLineWidthSpinBox = new QSpinBox(mRubberBandGroupBox);
        mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
        mLineWidthSpinBox->setMinimum(1);

        _9->addWidget(mLineWidthSpinBox, 0, 1, 1, 1);

        mLineWidthTextLabel = new QLabel(mRubberBandGroupBox);
        mLineWidthTextLabel->setObjectName(QString::fromUtf8("mLineWidthTextLabel"));
        sizePolicy3.setHeightForWidth(mLineWidthTextLabel->sizePolicy().hasHeightForWidth());
        mLineWidthTextLabel->setSizePolicy(sizePolicy3);

        _9->addWidget(mLineWidthTextLabel, 0, 0, 1, 1);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _9->addItem(horizontalSpacer_33, 0, 4, 1, 1);

        mLineColorToolButton = new QgsColorButtonV2(mRubberBandGroupBox);
        mLineColorToolButton->setObjectName(QString::fromUtf8("mLineColorToolButton"));
        sizePolicy1.setHeightForWidth(mLineColorToolButton->sizePolicy().hasHeightForWidth());
        mLineColorToolButton->setSizePolicy(sizePolicy1);
        mLineColorToolButton->setMinimumSize(QSize(120, 0));
        mLineColorToolButton->setMaximumSize(QSize(120, 16777215));

        _9->addWidget(mLineColorToolButton, 0, 3, 1, 1);


        verticalLayout_31->addWidget(mRubberBandGroupBox);

        mSnappingGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mSnappingGroupBox->setObjectName(QString::fromUtf8("mSnappingGroupBox"));
        _10 = new QGridLayout(mSnappingGroupBox);
        _10->setSpacing(6);
        _10->setContentsMargins(11, 11, 11, 11);
        _10->setObjectName(QString::fromUtf8("_10"));
        mDefaultSnapModeLabel = new QLabel(mSnappingGroupBox);
        mDefaultSnapModeLabel->setObjectName(QString::fromUtf8("mDefaultSnapModeLabel"));

        _10->addWidget(mDefaultSnapModeLabel, 1, 0, 1, 1);

        mDefaultSnapModeComboBox = new QComboBox(mSnappingGroupBox);
        mDefaultSnapModeComboBox->setObjectName(QString::fromUtf8("mDefaultSnapModeComboBox"));
        sizePolicy4.setHeightForWidth(mDefaultSnapModeComboBox->sizePolicy().hasHeightForWidth());
        mDefaultSnapModeComboBox->setSizePolicy(sizePolicy4);

        _10->addWidget(mDefaultSnapModeComboBox, 1, 4, 1, 2);

        mDefaultSnappingToleranceTextLabel = new QLabel(mSnappingGroupBox);
        mDefaultSnappingToleranceTextLabel->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceTextLabel"));

        _10->addWidget(mDefaultSnappingToleranceTextLabel, 2, 0, 1, 2);

        mDefaultSnappingToleranceSpinBox = new QDoubleSpinBox(mSnappingGroupBox);
        mDefaultSnappingToleranceSpinBox->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceSpinBox"));
        mDefaultSnappingToleranceSpinBox->setDecimals(5);
        mDefaultSnappingToleranceSpinBox->setMaximum(1e+08);

        _10->addWidget(mDefaultSnappingToleranceSpinBox, 2, 4, 1, 1);

        mVertexSearchRadiusVertexEditLabel = new QLabel(mSnappingGroupBox);
        mVertexSearchRadiusVertexEditLabel->setObjectName(QString::fromUtf8("mVertexSearchRadiusVertexEditLabel"));

        _10->addWidget(mVertexSearchRadiusVertexEditLabel, 3, 0, 1, 3);

        mSearchRadiusVertexEditSpinBox = new QDoubleSpinBox(mSnappingGroupBox);
        mSearchRadiusVertexEditSpinBox->setObjectName(QString::fromUtf8("mSearchRadiusVertexEditSpinBox"));
        mSearchRadiusVertexEditSpinBox->setDecimals(5);
        mSearchRadiusVertexEditSpinBox->setMaximum(1e+08);

        _10->addWidget(mSearchRadiusVertexEditSpinBox, 3, 4, 1, 1);

        mDefaultSnappingToleranceComboBox = new QComboBox(mSnappingGroupBox);
        mDefaultSnappingToleranceComboBox->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceComboBox"));
        sizePolicy4.setHeightForWidth(mDefaultSnappingToleranceComboBox->sizePolicy().hasHeightForWidth());
        mDefaultSnappingToleranceComboBox->setSizePolicy(sizePolicy4);

        _10->addWidget(mDefaultSnappingToleranceComboBox, 2, 5, 1, 1);

        mSearchRadiusVertexEditComboBox = new QComboBox(mSnappingGroupBox);
        mSearchRadiusVertexEditComboBox->setObjectName(QString::fromUtf8("mSearchRadiusVertexEditComboBox"));

        _10->addWidget(mSearchRadiusVertexEditComboBox, 3, 5, 1, 1);

        spacerItem4 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _10->addItem(spacerItem4, 3, 3, 1, 1);

        spacerItem5 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _10->addItem(spacerItem5, 2, 2, 1, 2);

        spacerItem6 = new QSpacerItem(311, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _10->addItem(spacerItem6, 1, 1, 1, 3);

        cbxSnappingOptionsDocked = new QCheckBox(mSnappingGroupBox);
        cbxSnappingOptionsDocked->setObjectName(QString::fromUtf8("cbxSnappingOptionsDocked"));

        _10->addWidget(cbxSnappingOptionsDocked, 0, 0, 1, 6);


        verticalLayout_31->addWidget(mSnappingGroupBox);

        mVertexMarkerGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        mVertexMarkerGroupBox->setObjectName(QString::fromUtf8("mVertexMarkerGroupBox"));
        _11 = new QGridLayout(mVertexMarkerGroupBox);
        _11->setSpacing(6);
        _11->setContentsMargins(11, 11, 11, 11);
        _11->setObjectName(QString::fromUtf8("_11"));
        mMarkerStyleLabel = new QLabel(mVertexMarkerGroupBox);
        mMarkerStyleLabel->setObjectName(QString::fromUtf8("mMarkerStyleLabel"));

        _11->addWidget(mMarkerStyleLabel, 1, 0, 1, 1);

        spacerItem7 = new QSpacerItem(281, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _11->addItem(spacerItem7, 1, 1, 1, 1);

        mMarkerStyleComboBox = new QComboBox(mVertexMarkerGroupBox);
        mMarkerStyleComboBox->setObjectName(QString::fromUtf8("mMarkerStyleComboBox"));
        sizePolicy4.setHeightForWidth(mMarkerStyleComboBox->sizePolicy().hasHeightForWidth());
        mMarkerStyleComboBox->setSizePolicy(sizePolicy4);

        _11->addWidget(mMarkerStyleComboBox, 1, 2, 1, 1);

        mMarkerSizeSpinBox = new QSpinBox(mVertexMarkerGroupBox);
        mMarkerSizeSpinBox->setObjectName(QString::fromUtf8("mMarkerSizeSpinBox"));
        mMarkerSizeSpinBox->setLayoutDirection(Qt::LeftToRight);
        mMarkerSizeSpinBox->setMinimum(3);
        mMarkerSizeSpinBox->setSingleStep(2);

        _11->addWidget(mMarkerSizeSpinBox, 2, 2, 1, 1);

        label_6 = new QLabel(mVertexMarkerGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        _11->addWidget(label_6, 2, 0, 1, 1);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _11->addItem(spacerItem8, 2, 1, 1, 1);

        mMarkersOnlyForSelectedCheckBox = new QCheckBox(mVertexMarkerGroupBox);
        mMarkersOnlyForSelectedCheckBox->setObjectName(QString::fromUtf8("mMarkersOnlyForSelectedCheckBox"));

        _11->addWidget(mMarkersOnlyForSelectedCheckBox, 0, 0, 1, 3);


        verticalLayout_31->addWidget(mVertexMarkerGroupBox);

        groupBox_21 = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_07);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        gridLayout = new QGridLayout(groupBox_21);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mOffsetQuadSegSpinBox = new QSpinBox(groupBox_21);
        mOffsetQuadSegSpinBox->setObjectName(QString::fromUtf8("mOffsetQuadSegSpinBox"));

        gridLayout->addWidget(mOffsetQuadSegSpinBox, 1, 2, 1, 1);

        label_28 = new QLabel(groupBox_21);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout->addWidget(label_28, 2, 0, 1, 1);

        label_26 = new QLabel(groupBox_21);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout->addWidget(label_26, 0, 0, 1, 1);

        mOffsetJoinStyleComboBox = new QComboBox(groupBox_21);
        mOffsetJoinStyleComboBox->setObjectName(QString::fromUtf8("mOffsetJoinStyleComboBox"));
        sizePolicy4.setHeightForWidth(mOffsetJoinStyleComboBox->sizePolicy().hasHeightForWidth());
        mOffsetJoinStyleComboBox->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(mOffsetJoinStyleComboBox, 0, 2, 1, 1);

        label_27 = new QLabel(groupBox_21);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout->addWidget(label_27, 1, 0, 1, 1);

        mCurveOffsetMiterLimitComboBox = new QDoubleSpinBox(groupBox_21);
        mCurveOffsetMiterLimitComboBox->setObjectName(QString::fromUtf8("mCurveOffsetMiterLimitComboBox"));

        gridLayout->addWidget(mCurveOffsetMiterLimitComboBox, 2, 2, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_29, 0, 1, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_30, 1, 1, 1, 1);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_31, 2, 1, 1, 1);


        verticalLayout_31->addWidget(groupBox_21);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_4);

        mOptionsScrollArea_07->setWidget(mOptionsScrollAreaContents_07);

        verticalLayout_17->addWidget(mOptionsScrollArea_07);

        mOptionsStackedWidget->addWidget(mOptionsPageDigitizing);
        mOptionsPageGDAL = new QWidget();
        mOptionsPageGDAL->setObjectName(QString::fromUtf8("mOptionsPageGDAL"));
        verticalLayout_4 = new QVBoxLayout(mOptionsPageGDAL);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mOptionsScrollArea_02 = new QScrollArea(mOptionsPageGDAL);
        mOptionsScrollArea_02->setObjectName(QString::fromUtf8("mOptionsScrollArea_02"));
        mOptionsScrollArea_02->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_02->setWidgetResizable(true);
        mOptionsScrollAreaContents_02 = new QWidget();
        mOptionsScrollAreaContents_02->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_02"));
        mOptionsScrollAreaContents_02->setGeometry(QRect(0, 0, 462, 372));
        verticalLayout_6 = new QVBoxLayout(mOptionsScrollAreaContents_02);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_16 = new QGroupBox(mOptionsScrollAreaContents_02);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        gridLayout_29 = new QGridLayout(groupBox_16);
        gridLayout_29->setSpacing(6);
        gridLayout_29->setContentsMargins(11, 11, 11, 11);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        cmbEditCreateOptions = new QComboBox(groupBox_16);
        cmbEditCreateOptions->setObjectName(QString::fromUtf8("cmbEditCreateOptions"));

        gridLayout_29->addWidget(cmbEditCreateOptions, 0, 1, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_29->addItem(horizontalSpacer_15, 0, 3, 1, 1);

        pbnEditPyramidsOptions = new QPushButton(groupBox_16);
        pbnEditPyramidsOptions->setObjectName(QString::fromUtf8("pbnEditPyramidsOptions"));

        gridLayout_29->addWidget(pbnEditPyramidsOptions, 0, 4, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_29->addItem(horizontalSpacer_16, 0, 5, 1, 1);

        pbnEditCreateOptions = new QPushButton(groupBox_16);
        pbnEditCreateOptions->setObjectName(QString::fromUtf8("pbnEditCreateOptions"));

        gridLayout_29->addWidget(pbnEditCreateOptions, 0, 2, 1, 1);


        verticalLayout_6->addWidget(groupBox_16);

        groupBox_13 = new QGroupBox(mOptionsScrollAreaContents_02);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        gridLayout_24 = new QGridLayout(groupBox_13);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        label_17 = new QLabel(groupBox_13);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setWordWrap(true);

        gridLayout_24->addWidget(label_17, 0, 0, 1, 1);

        lstGdalDrivers = new QTreeWidget(groupBox_13);
        lstGdalDrivers->setObjectName(QString::fromUtf8("lstGdalDrivers"));
        lstGdalDrivers->setMinimumSize(QSize(0, 141));

        gridLayout_24->addWidget(lstGdalDrivers, 1, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox_13);

        mOptionsScrollArea_02->setWidget(mOptionsScrollAreaContents_02);

        verticalLayout_4->addWidget(mOptionsScrollArea_02);

        mOptionsStackedWidget->addWidget(mOptionsPageGDAL);
        mOptionsPageCRS = new QWidget();
        mOptionsPageCRS->setObjectName(QString::fromUtf8("mOptionsPageCRS"));
        verticalLayout_18 = new QVBoxLayout(mOptionsPageCRS);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        mOptionsScrollArea_08 = new QScrollArea(mOptionsPageCRS);
        mOptionsScrollArea_08->setObjectName(QString::fromUtf8("mOptionsScrollArea_08"));
        mOptionsScrollArea_08->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_08->setWidgetResizable(true);
        mOptionsScrollAreaContents_08 = new QWidget();
        mOptionsScrollAreaContents_08->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_08"));
        mOptionsScrollAreaContents_08->setGeometry(QRect(0, 0, 650, 707));
        gridLayout_15 = new QGridLayout(mOptionsScrollAreaContents_08);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_15->addItem(verticalSpacer, 5, 0, 1, 1);

        grpProjectionBehaviour = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_08);
        grpProjectionBehaviour->setObjectName(QString::fromUtf8("grpProjectionBehaviour"));
        gridLayout_23 = new QGridLayout(grpProjectionBehaviour);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        leLayerGlobalCrs = new QLineEdit(grpProjectionBehaviour);
        leLayerGlobalCrs->setObjectName(QString::fromUtf8("leLayerGlobalCrs"));
        leLayerGlobalCrs->setReadOnly(true);

        gridLayout_23->addWidget(leLayerGlobalCrs, 4, 1, 1, 1);

        pbnSelectProjection = new QPushButton(grpProjectionBehaviour);
        pbnSelectProjection->setObjectName(QString::fromUtf8("pbnSelectProjection"));

        gridLayout_23->addWidget(pbnSelectProjection, 4, 2, 1, 1);

        radUseProjectProjection = new QRadioButton(grpProjectionBehaviour);
        radUseProjectProjection->setObjectName(QString::fromUtf8("radUseProjectProjection"));

        gridLayout_23->addWidget(radUseProjectProjection, 2, 1, 1, 1);

        radPromptForProjection = new QRadioButton(grpProjectionBehaviour);
        radPromptForProjection->setObjectName(QString::fromUtf8("radPromptForProjection"));

        gridLayout_23->addWidget(radPromptForProjection, 1, 1, 1, 1);

        radUseGlobalProjection = new QRadioButton(grpProjectionBehaviour);
        radUseGlobalProjection->setObjectName(QString::fromUtf8("radUseGlobalProjection"));

        gridLayout_23->addWidget(radUseGlobalProjection, 3, 1, 1, 1);

        horizontalSpacer_27 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_27, 2, 0, 1, 1);

        label_8 = new QLabel(grpProjectionBehaviour);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy7);
        label_8->setWordWrap(true);

        gridLayout_23->addWidget(label_8, 0, 0, 1, 4);


        gridLayout_15->addWidget(grpProjectionBehaviour, 2, 0, 1, 1);

        grpOtfTransform = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_08);
        grpOtfTransform->setObjectName(QString::fromUtf8("grpOtfTransform"));
        gridLayout_22 = new QGridLayout(grpOtfTransform);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        radOtfTransform = new QRadioButton(grpOtfTransform);
        radOtfTransform->setObjectName(QString::fromUtf8("radOtfTransform"));

        gridLayout_22->addWidget(radOtfTransform, 2, 0, 1, 1);

        radOtfAuto = new QRadioButton(grpOtfTransform);
        radOtfAuto->setObjectName(QString::fromUtf8("radOtfAuto"));

        gridLayout_22->addWidget(radOtfAuto, 1, 0, 1, 1);

        leProjectGlobalCrs = new QLineEdit(grpOtfTransform);
        leProjectGlobalCrs->setObjectName(QString::fromUtf8("leProjectGlobalCrs"));
        leProjectGlobalCrs->setReadOnly(true);

        gridLayout_22->addWidget(leProjectGlobalCrs, 4, 0, 1, 1);

        radOtfNone = new QRadioButton(grpOtfTransform);
        radOtfNone->setObjectName(QString::fromUtf8("radOtfNone"));

        gridLayout_22->addWidget(radOtfNone, 0, 0, 1, 1);

        pbnSelectOtfProjection = new QPushButton(grpOtfTransform);
        pbnSelectOtfProjection->setObjectName(QString::fromUtf8("pbnSelectOtfProjection"));

        gridLayout_22->addWidget(pbnSelectOtfProjection, 4, 1, 1, 1);

        label_16 = new QLabel(grpOtfTransform);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_22->addWidget(label_16, 3, 0, 1, 1);


        gridLayout_15->addWidget(grpOtfTransform, 1, 0, 1, 1);

        mDefaultDatumTransformGroupBox = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_08);
        mDefaultDatumTransformGroupBox->setObjectName(QString::fromUtf8("mDefaultDatumTransformGroupBox"));
        gridLayout_10 = new QGridLayout(mDefaultDatumTransformGroupBox);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        mAddDefaultTransformButton = new QPushButton(mDefaultDatumTransformGroupBox);
        mAddDefaultTransformButton->setObjectName(QString::fromUtf8("mAddDefaultTransformButton"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddDefaultTransformButton->setIcon(icon18);

        horizontalLayout_38->addWidget(mAddDefaultTransformButton);

        mRemoveDefaultTransformButton = new QPushButton(mDefaultDatumTransformGroupBox);
        mRemoveDefaultTransformButton->setObjectName(QString::fromUtf8("mRemoveDefaultTransformButton"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveDefaultTransformButton->setIcon(icon19);

        horizontalLayout_38->addWidget(mRemoveDefaultTransformButton);

        horizontalSpacer_38 = new QSpacerItem(568, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_38);


        gridLayout_10->addLayout(horizontalLayout_38, 1, 0, 1, 1);

        mDefaultDatumTransformTreeWidget = new QTreeWidget(mDefaultDatumTransformGroupBox);
        mDefaultDatumTransformTreeWidget->setObjectName(QString::fromUtf8("mDefaultDatumTransformTreeWidget"));

        gridLayout_10->addWidget(mDefaultDatumTransformTreeWidget, 2, 0, 1, 1);

        chkShowDatumTransformDialog = new QCheckBox(mDefaultDatumTransformGroupBox);
        chkShowDatumTransformDialog->setObjectName(QString::fromUtf8("chkShowDatumTransformDialog"));

        gridLayout_10->addWidget(chkShowDatumTransformDialog, 0, 0, 1, 1);


        gridLayout_15->addWidget(mDefaultDatumTransformGroupBox, 3, 0, 1, 1);

        mOptionsScrollArea_08->setWidget(mOptionsScrollAreaContents_08);

        verticalLayout_18->addWidget(mOptionsScrollArea_08);

        mOptionsStackedWidget->addWidget(mOptionsPageCRS);
        mOptionsPageLocale = new QWidget();
        mOptionsPageLocale->setObjectName(QString::fromUtf8("mOptionsPageLocale"));
        verticalLayout_19 = new QVBoxLayout(mOptionsPageLocale);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        mOptionsScrollArea_09 = new QScrollArea(mOptionsPageLocale);
        mOptionsScrollArea_09->setObjectName(QString::fromUtf8("mOptionsScrollArea_09"));
        mOptionsScrollArea_09->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_09->setWidgetResizable(true);
        mOptionsScrollAreaContents_09 = new QWidget();
        mOptionsScrollAreaContents_09->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_09"));
        mOptionsScrollAreaContents_09->setGeometry(QRect(0, 0, 300, 226));
        verticalLayout_32 = new QVBoxLayout(mOptionsScrollAreaContents_09);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        grpLocale = new QGroupBox(mOptionsScrollAreaContents_09);
        grpLocale->setObjectName(QString::fromUtf8("grpLocale"));
        grpLocale->setCheckable(true);
        _12 = new QGridLayout(grpLocale);
        _12->setSpacing(6);
        _12->setContentsMargins(11, 11, 11, 11);
        _12->setObjectName(QString::fromUtf8("_12"));
        label_5 = new QLabel(grpLocale);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        _12->addWidget(label_5, 0, 0, 1, 1);

        cboLocale = new QComboBox(grpLocale);
        cboLocale->setObjectName(QString::fromUtf8("cboLocale"));

        _12->addWidget(cboLocale, 0, 1, 1, 1);

        label_7 = new QLabel(grpLocale);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        _12->addWidget(label_7, 1, 0, 1, 2);


        verticalLayout_32->addWidget(grpLocale);

        groupBox_12 = new QGroupBox(mOptionsScrollAreaContents_09);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        _13 = new QGridLayout(groupBox_12);
        _13->setSpacing(6);
        _13->setContentsMargins(11, 11, 11, 11);
        _13->setObjectName(QString::fromUtf8("_13"));
        lblSystemLocale = new QLabel(groupBox_12);
        lblSystemLocale->setObjectName(QString::fromUtf8("lblSystemLocale"));

        _13->addWidget(lblSystemLocale, 0, 0, 1, 1);


        verticalLayout_32->addWidget(groupBox_12);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_32->addItem(verticalSpacer_2);

        mOptionsScrollArea_09->setWidget(mOptionsScrollAreaContents_09);

        verticalLayout_19->addWidget(mOptionsScrollArea_09);

        mOptionsStackedWidget->addWidget(mOptionsPageLocale);
        mOptionsPageNetwork = new QWidget();
        mOptionsPageNetwork->setObjectName(QString::fromUtf8("mOptionsPageNetwork"));
        verticalLayout_20 = new QVBoxLayout(mOptionsPageNetwork);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        mOptionsScrollArea_10 = new QScrollArea(mOptionsPageNetwork);
        mOptionsScrollArea_10->setObjectName(QString::fromUtf8("mOptionsScrollArea_10"));
        mOptionsScrollArea_10->setFrameShape(QFrame::NoFrame);
        mOptionsScrollArea_10->setWidgetResizable(true);
        mOptionsScrollAreaContents_10 = new QWidget();
        mOptionsScrollAreaContents_10->setObjectName(QString::fromUtf8("mOptionsScrollAreaContents_10"));
        mOptionsScrollAreaContents_10->setGeometry(QRect(0, 0, 531, 685));
        verticalLayout_33 = new QVBoxLayout(mOptionsScrollAreaContents_10);
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setContentsMargins(11, 11, 11, 11);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        groupBox_20 = new QGroupBox(mOptionsScrollAreaContents_10);
        groupBox_20->setObjectName(QString::fromUtf8("groupBox_20"));
        verticalLayout_34 = new QVBoxLayout(groupBox_20);
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setContentsMargins(11, 11, 11, 11);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(groupBox_20);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        leWmsSearch = new QLineEdit(groupBox_20);
        leWmsSearch->setObjectName(QString::fromUtf8("leWmsSearch"));

        horizontalLayout_2->addWidget(leWmsSearch);


        verticalLayout_34->addLayout(horizontalLayout_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        mNetworkTimeoutLabel = new QLabel(groupBox_20);
        mNetworkTimeoutLabel->setObjectName(QString::fromUtf8("mNetworkTimeoutLabel"));

        horizontalLayout_11->addWidget(mNetworkTimeoutLabel);

        mNetworkTimeoutSpinBox = new QSpinBox(groupBox_20);
        mNetworkTimeoutSpinBox->setObjectName(QString::fromUtf8("mNetworkTimeoutSpinBox"));
        mNetworkTimeoutSpinBox->setMaximum(100000000);

        horizontalLayout_11->addWidget(mNetworkTimeoutSpinBox);


        verticalLayout_34->addLayout(horizontalLayout_11);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_32 = new QLabel(groupBox_20);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_17->addWidget(label_32);

        mDefaultTileExpirySpinBox = new QSpinBox(groupBox_20);
        mDefaultTileExpirySpinBox->setObjectName(QString::fromUtf8("mDefaultTileExpirySpinBox"));
        mDefaultTileExpirySpinBox->setMaximum(100000000);

        horizontalLayout_17->addWidget(mDefaultTileExpirySpinBox);


        verticalLayout_34->addLayout(horizontalLayout_17);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        label_57 = new QLabel(groupBox_20);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        horizontalLayout_33->addWidget(label_57);

        mDefaultTileMaxRetrySpinBox = new QSpinBox(groupBox_20);
        mDefaultTileMaxRetrySpinBox->setObjectName(QString::fromUtf8("mDefaultTileMaxRetrySpinBox"));
        mDefaultTileMaxRetrySpinBox->setMaximum(100000000);

        horizontalLayout_33->addWidget(mDefaultTileMaxRetrySpinBox);


        verticalLayout_34->addLayout(horizontalLayout_33);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        lblUserAgent = new QLabel(groupBox_20);
        lblUserAgent->setObjectName(QString::fromUtf8("lblUserAgent"));

        horizontalLayout_35->addWidget(lblUserAgent);

        leUserAgent = new QLineEdit(groupBox_20);
        leUserAgent->setObjectName(QString::fromUtf8("leUserAgent"));

        horizontalLayout_35->addWidget(leUserAgent);


        verticalLayout_34->addLayout(horizontalLayout_35);


        verticalLayout_33->addWidget(groupBox_20);

        grpCache = new QGroupBox(mOptionsScrollAreaContents_10);
        grpCache->setObjectName(QString::fromUtf8("grpCache"));
        gridLayout_2 = new QGridLayout(grpCache);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_10 = new QLabel(grpCache);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        mCacheDirectory = new QLineEdit(grpCache);
        mCacheDirectory->setObjectName(QString::fromUtf8("mCacheDirectory"));

        gridLayout_2->addWidget(mCacheDirectory, 0, 1, 1, 1);

        mBrowseCacheDirectory = new QPushButton(grpCache);
        mBrowseCacheDirectory->setObjectName(QString::fromUtf8("mBrowseCacheDirectory"));

        gridLayout_2->addWidget(mBrowseCacheDirectory, 0, 2, 1, 1);

        label_11 = new QLabel(grpCache);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        mCacheSize = new QSpinBox(grpCache);
        mCacheSize->setObjectName(QString::fromUtf8("mCacheSize"));

        gridLayout_2->addWidget(mCacheSize, 2, 1, 1, 1);

        mClearCache = new QPushButton(grpCache);
        mClearCache->setObjectName(QString::fromUtf8("mClearCache"));

        gridLayout_2->addWidget(mClearCache, 2, 2, 1, 1);


        verticalLayout_33->addWidget(grpCache);

        grpProxy = new QgsCollapsibleGroupBox(mOptionsScrollAreaContents_10);
        grpProxy->setObjectName(QString::fromUtf8("grpProxy"));
        grpProxy->setFlat(false);
        grpProxy->setCheckable(true);
        grpProxy->setProperty("collapsed", QVariant(false));
        grpProxy->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_1 = new QGridLayout(grpProxy);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setContentsMargins(11, 11, 11, 11);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        lblProxyHost = new QLabel(grpProxy);
        lblProxyHost->setObjectName(QString::fromUtf8("lblProxyHost"));

        gridLayout_1->addWidget(lblProxyHost, 0, 0, 1, 1);

        leProxyHost = new QLineEdit(grpProxy);
        leProxyHost->setObjectName(QString::fromUtf8("leProxyHost"));

        gridLayout_1->addWidget(leProxyHost, 0, 1, 1, 4);

        lblProxyPort = new QLabel(grpProxy);
        lblProxyPort->setObjectName(QString::fromUtf8("lblProxyPort"));

        gridLayout_1->addWidget(lblProxyPort, 1, 0, 1, 1);

        leProxyPort = new QLineEdit(grpProxy);
        leProxyPort->setObjectName(QString::fromUtf8("leProxyPort"));

        gridLayout_1->addWidget(leProxyPort, 1, 1, 1, 4);

        lblUser = new QLabel(grpProxy);
        lblUser->setObjectName(QString::fromUtf8("lblUser"));

        gridLayout_1->addWidget(lblUser, 2, 0, 1, 1);

        leProxyUser = new QLineEdit(grpProxy);
        leProxyUser->setObjectName(QString::fromUtf8("leProxyUser"));

        gridLayout_1->addWidget(leProxyUser, 2, 1, 1, 4);

        lblPassword = new QLabel(grpProxy);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));

        gridLayout_1->addWidget(lblPassword, 3, 0, 1, 1);

        leProxyPassword = new QLineEdit(grpProxy);
        leProxyPassword->setObjectName(QString::fromUtf8("leProxyPassword"));
        leProxyPassword->setEchoMode(QLineEdit::Password);

        gridLayout_1->addWidget(leProxyPassword, 3, 1, 1, 4);

        mTypeLabel = new QLabel(grpProxy);
        mTypeLabel->setObjectName(QString::fromUtf8("mTypeLabel"));

        gridLayout_1->addWidget(mTypeLabel, 4, 0, 1, 1);

        mProxyTypeComboBox = new QComboBox(grpProxy);
        mProxyTypeComboBox->setObjectName(QString::fromUtf8("mProxyTypeComboBox"));

        gridLayout_1->addWidget(mProxyTypeComboBox, 4, 1, 1, 2);

        spacerItem9 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_1->addItem(spacerItem9, 4, 3, 1, 2);

        grpUrlExclude = new QGroupBox(grpProxy);
        grpUrlExclude->setObjectName(QString::fromUtf8("grpUrlExclude"));
        grpUrlExclude->setFlat(true);
        gridLayout_5 = new QGridLayout(grpUrlExclude);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mRemoveUrlPushButton = new QPushButton(grpUrlExclude);
        mRemoveUrlPushButton->setObjectName(QString::fromUtf8("mRemoveUrlPushButton"));

        gridLayout_5->addWidget(mRemoveUrlPushButton, 2, 2, 1, 1);

        mAddUrlPushButton = new QPushButton(grpUrlExclude);
        mAddUrlPushButton->setObjectName(QString::fromUtf8("mAddUrlPushButton"));

        gridLayout_5->addWidget(mAddUrlPushButton, 2, 0, 1, 1);

        mExcludeUrlListWidget = new QListWidget(grpUrlExclude);
        mExcludeUrlListWidget->setObjectName(QString::fromUtf8("mExcludeUrlListWidget"));

        gridLayout_5->addWidget(mExcludeUrlListWidget, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 2, 1, 1, 1);


        gridLayout_1->addWidget(grpUrlExclude, 5, 0, 2, 5);


        verticalLayout_33->addWidget(grpProxy);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_33->addItem(verticalSpacer_9);

        mOptionsScrollArea_10->setWidget(mOptionsScrollAreaContents_10);

        verticalLayout_20->addWidget(mOptionsScrollArea_10);

        mOptionsStackedWidget->addWidget(mOptionsPageNetwork);

        verticalLayout->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout_5->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsOptionsBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        sizePolicy7.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy7);
        mButtonBoxFrame->setMinimumSize(QSize(0, 0));
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mButtonBoxFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_5->addWidget(mButtonBoxFrame);

#ifndef QT_NO_SHORTCUT
        label_16->setBuddy(leProjectGlobalCrs);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(buttonBox, mOptionsListWidget);
        QWidget::setTabOrder(mOptionsListWidget, mOptionsScrollArea_01);
        QWidget::setTabOrder(mOptionsScrollArea_01, cmbStyle);
        QWidget::setTabOrder(cmbStyle, cmbTheme);
        QWidget::setTabOrder(cmbTheme, cmbIconSize);
        QWidget::setTabOrder(cmbIconSize, mFontFamilyRadioQt);
        QWidget::setTabOrder(mFontFamilyRadioQt, mFontFamilyRadioCustom);
        QWidget::setTabOrder(mFontFamilyRadioCustom, mFontFamilyComboBox);
        QWidget::setTabOrder(mFontFamilyComboBox, spinFontSize);
        QWidget::setTabOrder(spinFontSize, mMessageTimeoutSpnBx);
        QWidget::setTabOrder(mMessageTimeoutSpnBx, cbxHideSplash);
        QWidget::setTabOrder(cbxHideSplash, cbxShowTips);
        QWidget::setTabOrder(cbxShowTips, mBoldGroupBoxTitleChkBx);
        QWidget::setTabOrder(mBoldGroupBoxTitleChkBx, mCustomGroupBoxChkBx);
        QWidget::setTabOrder(mCustomGroupBoxChkBx, mLiveColorDialogsChkBx);
        QWidget::setTabOrder(mLiveColorDialogsChkBx, mProjectOnLaunchCmbBx);
        QWidget::setTabOrder(mProjectOnLaunchCmbBx, mProjectOnLaunchPushBtn);
        QWidget::setTabOrder(mProjectOnLaunchPushBtn, mProjectOnLaunchLineEdit);
        QWidget::setTabOrder(mProjectOnLaunchLineEdit, cbxProjectDefaultNew);
        QWidget::setTabOrder(cbxProjectDefaultNew, pbnProjectDefaultSetCurrent);
        QWidget::setTabOrder(pbnProjectDefaultSetCurrent, pbnProjectDefaultReset);
        QWidget::setTabOrder(pbnProjectDefaultReset, leTemplateFolder);
        QWidget::setTabOrder(leTemplateFolder, pbnTemplateFolderBrowse);
        QWidget::setTabOrder(pbnTemplateFolderBrowse, pbnTemplateFolderReset);
        QWidget::setTabOrder(pbnTemplateFolderReset, chbAskToSaveProjectChanges);
        QWidget::setTabOrder(chbAskToSaveProjectChanges, mLayerDeleteConfirmationChkBx);
        QWidget::setTabOrder(mLayerDeleteConfirmationChkBx, chbWarnOldProjectVersion);
        QWidget::setTabOrder(chbWarnOldProjectVersion, cmbEnableMacros);
        QWidget::setTabOrder(cmbEnableMacros, mOptionsScrollArea_03);
        QWidget::setTabOrder(mOptionsScrollArea_03, mBtnAddSVGPath);
        QWidget::setTabOrder(mBtnAddSVGPath, mBtnRemoveSVGPath);
        QWidget::setTabOrder(mBtnRemoveSVGPath, mListSVGPaths);
        QWidget::setTabOrder(mListSVGPaths, mBtnAddPluginPath);
        QWidget::setTabOrder(mBtnAddPluginPath, mBtnRemovePluginPath);
        QWidget::setTabOrder(mBtnRemovePluginPath, mListPluginPaths);
        QWidget::setTabOrder(mListPluginPaths, mRestoreDefaultWindowStateBtn);
        QWidget::setTabOrder(mRestoreDefaultWindowStateBtn, mRemoveCustomVarBtn);
        QWidget::setTabOrder(mRemoveCustomVarBtn, mAddCustomVarBtn);
        QWidget::setTabOrder(mAddCustomVarBtn, mCurrentVariablesTable);
        QWidget::setTabOrder(mCurrentVariablesTable, mCurrentVariablesQGISChxBx);
        QWidget::setTabOrder(mCurrentVariablesQGISChxBx, mCustomVariablesChkBx);
        QWidget::setTabOrder(mCustomVariablesChkBx, mCustomVariablesTable);
        QWidget::setTabOrder(mCustomVariablesTable, mOptionsScrollArea_11);
        QWidget::setTabOrder(mOptionsScrollArea_11, cbxAttributeTableDocked);
        QWidget::setTabOrder(cbxAttributeTableDocked, cbxCopyWKTGeomFromTable);
        QWidget::setTabOrder(cbxCopyWKTGeomFromTable, cmbAttrTableBehaviour);
        QWidget::setTabOrder(cmbAttrTableBehaviour, spinBoxAttrTableRowCache);
        QWidget::setTabOrder(spinBoxAttrTableRowCache, leNullValue);
        QWidget::setTabOrder(leNullValue, cmbScanItemsInBrowser);
        QWidget::setTabOrder(cmbScanItemsInBrowser, cmbScanZipInBrowser);
        QWidget::setTabOrder(cmbScanZipInBrowser, cmbPromptRasterSublayers);
        QWidget::setTabOrder(cmbPromptRasterSublayers, cbxIgnoreShapeEncoding);
        QWidget::setTabOrder(cbxIgnoreShapeEncoding, cbxAddPostgisDC);
        QWidget::setTabOrder(cbxAddPostgisDC, cbxAddOracleDC);
        QWidget::setTabOrder(cbxAddOracleDC, mOptionsScrollArea_04);
        QWidget::setTabOrder(mOptionsScrollArea_04, chkAddedVisibility);
        QWidget::setTabOrder(chkAddedVisibility, chkUseRenderCaching);
        QWidget::setTabOrder(chkUseRenderCaching, chkParallelRendering);
        QWidget::setTabOrder(chkParallelRendering, chkMaxThreads);
        QWidget::setTabOrder(chkMaxThreads, spinMaxThreads);
        QWidget::setTabOrder(spinMaxThreads, spinMapUpdateInterval);
        QWidget::setTabOrder(spinMapUpdateInterval, mSimplifyDrawingGroupBox);
        QWidget::setTabOrder(mSimplifyDrawingGroupBox, mSimplifyDrawingSpinBox);
        QWidget::setTabOrder(mSimplifyDrawingSpinBox, mSimplifyDrawingAtProvider);
        QWidget::setTabOrder(mSimplifyDrawingAtProvider, chkAntiAliasing);
        QWidget::setTabOrder(chkAntiAliasing, spnRed);
        QWidget::setTabOrder(spnRed, spnGreen);
        QWidget::setTabOrder(spnGreen, spnBlue);
        QWidget::setTabOrder(spnBlue, cboxContrastEnhancementAlgorithmSingleBand);
        QWidget::setTabOrder(cboxContrastEnhancementAlgorithmSingleBand, cboxContrastEnhancementAlgorithmMultiBandSingleByte);
        QWidget::setTabOrder(cboxContrastEnhancementAlgorithmMultiBandSingleByte, cboxContrastEnhancementAlgorithmMultiBandMultiByte);
        QWidget::setTabOrder(cboxContrastEnhancementAlgorithmMultiBandMultiByte, cboxContrastEnhancementLimits);
        QWidget::setTabOrder(cboxContrastEnhancementLimits, mRasterCumulativeCutLowerDoubleSpinBox);
        QWidget::setTabOrder(mRasterCumulativeCutLowerDoubleSpinBox, mRasterCumulativeCutUpperDoubleSpinBox);
        QWidget::setTabOrder(mRasterCumulativeCutUpperDoubleSpinBox, spnThreeBandStdDev);
        QWidget::setTabOrder(spnThreeBandStdDev, mLogCanvasRefreshChkBx);
        QWidget::setTabOrder(mLogCanvasRefreshChkBx, scrollArea);
        QWidget::setTabOrder(scrollArea, pbnSelectionColor);
        QWidget::setTabOrder(pbnSelectionColor, pbnCanvasColor);
        QWidget::setTabOrder(pbnCanvasColor, mOptionsScrollArea_06);
        QWidget::setTabOrder(mOptionsScrollArea_06, mTreeCustomColors);
        QWidget::setTabOrder(mTreeCustomColors, mButtonAddColor);
        QWidget::setTabOrder(mButtonAddColor, mButtonRemoveColor);
        QWidget::setTabOrder(mButtonRemoveColor, mButtonCopyColors);
        QWidget::setTabOrder(mButtonCopyColors, mButtonPasteColors);
        QWidget::setTabOrder(mButtonPasteColors, mButtonImportColors);
        QWidget::setTabOrder(mButtonImportColors, mButtonExportColors);
        QWidget::setTabOrder(mButtonExportColors, mLegendLayersBoldChkBx);
        QWidget::setTabOrder(mLegendLayersBoldChkBx, cbxLegendClassifiers);
        QWidget::setTabOrder(cbxLegendClassifiers, mLegendGroupsBoldChkBx);
        QWidget::setTabOrder(mLegendGroupsBoldChkBx, cbxCreateRasterLegendIcons);
        QWidget::setTabOrder(cbxCreateRasterLegendIcons, mLegendGraphicResolutionSpinBox);
        QWidget::setTabOrder(mLegendGraphicResolutionSpinBox, mOptionsScrollArea_05);
        QWidget::setTabOrder(mOptionsScrollArea_05, spinBoxIdentifyValue);
        QWidget::setTabOrder(spinBoxIdentifyValue, mIdentifyHighlightColorButton);
        QWidget::setTabOrder(mIdentifyHighlightColorButton, mIdentifyHighlightBufferSpinBox);
        QWidget::setTabOrder(mIdentifyHighlightBufferSpinBox, mIdentifyHighlightMinWidthSpinBox);
        QWidget::setTabOrder(mIdentifyHighlightMinWidthSpinBox, radMeters);
        QWidget::setTabOrder(radMeters, radFeet);
        QWidget::setTabOrder(radFeet, radNautical);
        QWidget::setTabOrder(radNautical, radDegrees);
        QWidget::setTabOrder(radDegrees, mDegreesRadioButton);
        QWidget::setTabOrder(mDegreesRadioButton, mRadiansRadioButton);
        QWidget::setTabOrder(mRadiansRadioButton, mDecimalPlacesSpinBox);
        QWidget::setTabOrder(mDecimalPlacesSpinBox, mKeepBaseUnitCheckBox);
        QWidget::setTabOrder(mKeepBaseUnitCheckBox, mGonRadioButton);
        QWidget::setTabOrder(mGonRadioButton, pbnMeasureColor);
        QWidget::setTabOrder(pbnMeasureColor, spinZoomFactor);
        QWidget::setTabOrder(spinZoomFactor, cmbWheelAction);
        QWidget::setTabOrder(cmbWheelAction, mListGlobalScales);
        QWidget::setTabOrder(mListGlobalScales, pbnAddScale);
        QWidget::setTabOrder(pbnAddScale, pbnRemoveScale);
        QWidget::setTabOrder(pbnRemoveScale, pbnDefaultScaleValues);
        QWidget::setTabOrder(pbnDefaultScaleValues, pbnImportScales);
        QWidget::setTabOrder(pbnImportScales, pbnExportScales);
        QWidget::setTabOrder(pbnExportScales, mOptionsScrollArea_12);
        QWidget::setTabOrder(mOptionsScrollArea_12, mComposerFontComboBox);
        QWidget::setTabOrder(mComposerFontComboBox, mGridStyleComboBox);
        QWidget::setTabOrder(mGridStyleComboBox, mGridColorButton);
        QWidget::setTabOrder(mGridColorButton, mGridResolutionSpinBox);
        QWidget::setTabOrder(mGridResolutionSpinBox, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mSnapToleranceSpinBox);
        QWidget::setTabOrder(mSnapToleranceSpinBox, mOptionsScrollArea_07);
        QWidget::setTabOrder(mOptionsScrollArea_07, mValidateGeometries);
        QWidget::setTabOrder(mValidateGeometries, chkDisableAttributeValuesDlg);
        QWidget::setTabOrder(chkDisableAttributeValuesDlg, chkReuseLastValues);
        QWidget::setTabOrder(chkReuseLastValues, mLineWidthSpinBox);
        QWidget::setTabOrder(mLineWidthSpinBox, mLineColorToolButton);
        QWidget::setTabOrder(mLineColorToolButton, mDefaultSnapModeComboBox);
        QWidget::setTabOrder(mDefaultSnapModeComboBox, mDefaultSnappingToleranceSpinBox);
        QWidget::setTabOrder(mDefaultSnappingToleranceSpinBox, mSearchRadiusVertexEditSpinBox);
        QWidget::setTabOrder(mSearchRadiusVertexEditSpinBox, mDefaultSnappingToleranceComboBox);
        QWidget::setTabOrder(mDefaultSnappingToleranceComboBox, mSearchRadiusVertexEditComboBox);
        QWidget::setTabOrder(mSearchRadiusVertexEditComboBox, cbxSnappingOptionsDocked);
        QWidget::setTabOrder(cbxSnappingOptionsDocked, mMarkerStyleComboBox);
        QWidget::setTabOrder(mMarkerStyleComboBox, mMarkerSizeSpinBox);
        QWidget::setTabOrder(mMarkerSizeSpinBox, mMarkersOnlyForSelectedCheckBox);
        QWidget::setTabOrder(mMarkersOnlyForSelectedCheckBox, mOffsetQuadSegSpinBox);
        QWidget::setTabOrder(mOffsetQuadSegSpinBox, mOffsetJoinStyleComboBox);
        QWidget::setTabOrder(mOffsetJoinStyleComboBox, mCurveOffsetMiterLimitComboBox);
        QWidget::setTabOrder(mCurveOffsetMiterLimitComboBox, mOptionsScrollArea_02);
        QWidget::setTabOrder(mOptionsScrollArea_02, cmbEditCreateOptions);
        QWidget::setTabOrder(cmbEditCreateOptions, pbnEditPyramidsOptions);
        QWidget::setTabOrder(pbnEditPyramidsOptions, pbnEditCreateOptions);
        QWidget::setTabOrder(pbnEditCreateOptions, lstGdalDrivers);
        QWidget::setTabOrder(lstGdalDrivers, mOptionsScrollArea_08);
        QWidget::setTabOrder(mOptionsScrollArea_08, leLayerGlobalCrs);
        QWidget::setTabOrder(leLayerGlobalCrs, pbnSelectProjection);
        QWidget::setTabOrder(pbnSelectProjection, radUseProjectProjection);
        QWidget::setTabOrder(radUseProjectProjection, radPromptForProjection);
        QWidget::setTabOrder(radPromptForProjection, radUseGlobalProjection);
        QWidget::setTabOrder(radUseGlobalProjection, radOtfTransform);
        QWidget::setTabOrder(radOtfTransform, radOtfAuto);
        QWidget::setTabOrder(radOtfAuto, leProjectGlobalCrs);
        QWidget::setTabOrder(leProjectGlobalCrs, radOtfNone);
        QWidget::setTabOrder(radOtfNone, pbnSelectOtfProjection);
        QWidget::setTabOrder(pbnSelectOtfProjection, mAddDefaultTransformButton);
        QWidget::setTabOrder(mAddDefaultTransformButton, mRemoveDefaultTransformButton);
        QWidget::setTabOrder(mRemoveDefaultTransformButton, mDefaultDatumTransformTreeWidget);
        QWidget::setTabOrder(mDefaultDatumTransformTreeWidget, chkShowDatumTransformDialog);
        QWidget::setTabOrder(chkShowDatumTransformDialog, mOptionsScrollArea_09);
        QWidget::setTabOrder(mOptionsScrollArea_09, grpLocale);
        QWidget::setTabOrder(grpLocale, cboLocale);
        QWidget::setTabOrder(cboLocale, mOptionsScrollArea_10);
        QWidget::setTabOrder(mOptionsScrollArea_10, leWmsSearch);
        QWidget::setTabOrder(leWmsSearch, mNetworkTimeoutSpinBox);
        QWidget::setTabOrder(mNetworkTimeoutSpinBox, mDefaultTileExpirySpinBox);
        QWidget::setTabOrder(mDefaultTileExpirySpinBox, mDefaultTileMaxRetrySpinBox);
        QWidget::setTabOrder(mDefaultTileMaxRetrySpinBox, leUserAgent);
        QWidget::setTabOrder(leUserAgent, mCacheDirectory);
        QWidget::setTabOrder(mCacheDirectory, mBrowseCacheDirectory);
        QWidget::setTabOrder(mBrowseCacheDirectory, mCacheSize);
        QWidget::setTabOrder(mCacheSize, mClearCache);
        QWidget::setTabOrder(mClearCache, grpProxy);
        QWidget::setTabOrder(grpProxy, leProxyHost);
        QWidget::setTabOrder(leProxyHost, leProxyPort);
        QWidget::setTabOrder(leProxyPort, leProxyUser);
        QWidget::setTabOrder(leProxyUser, leProxyPassword);
        QWidget::setTabOrder(leProxyPassword, mProxyTypeComboBox);
        QWidget::setTabOrder(mProxyTypeComboBox, mRemoveUrlPushButton);
        QWidget::setTabOrder(mRemoveUrlPushButton, mAddUrlPushButton);
        QWidget::setTabOrder(mAddUrlPushButton, mExcludeUrlListWidget);
        QWidget::setTabOrder(mExcludeUrlListWidget, capitaliseCheckBox);
        QWidget::setTabOrder(capitaliseCheckBox, cmbLegendDoubleClickAction);

        retranslateUi(QgsOptionsBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(chkMaxThreads, SIGNAL(toggled(bool)), spinMaxThreads, SLOT(setEnabled(bool)));
        QObject::connect(radUseGlobalProjection, SIGNAL(toggled(bool)), leLayerGlobalCrs, SLOT(setEnabled(bool)));
        QObject::connect(radUseGlobalProjection, SIGNAL(toggled(bool)), pbnSelectProjection, SLOT(setEnabled(bool)));
        QObject::connect(radUseProjectProjection, SIGNAL(toggled(bool)), leLayerGlobalCrs, SLOT(setDisabled(bool)));
        QObject::connect(radUseProjectProjection, SIGNAL(toggled(bool)), pbnSelectProjection, SLOT(setDisabled(bool)));
        QObject::connect(radPromptForProjection, SIGNAL(toggled(bool)), leLayerGlobalCrs, SLOT(setDisabled(bool)));
        QObject::connect(radPromptForProjection, SIGNAL(toggled(bool)), pbnSelectProjection, SLOT(setDisabled(bool)));

        mOptionsStackedWidget->setCurrentIndex(0);
        cmbEnableMacros->setCurrentIndex(0);
        cmbScanZipInBrowser->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QgsOptionsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOptionsBase)
    {
        QgsOptionsBase->setWindowTitle(QApplication::translate("QgsOptionsBase", "Options", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsOptionsBase", "General", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("QgsOptionsBase", "General", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsOptionsBase", "System", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsOptionsBase", "System", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsOptionsBase", "Data Sources", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsOptionsBase", "Data sources", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsOptionsBase", "Rendering", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsOptionsBase", "Rendering", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsOptionsBase", "Colors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsOptionsBase", "Colors", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsOptionsBase", "Canvas & Legend", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsOptionsBase", "Canvas and legend", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsOptionsBase", "Map Tools", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem6->setToolTip(QApplication::translate("QgsOptionsBase", "Map tools", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("QgsOptionsBase", "Composer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem7->setToolTip(QApplication::translate("QgsOptionsBase", "Composer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("QgsOptionsBase", "Digitizing", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem8->setToolTip(QApplication::translate("QgsOptionsBase", "Digitizing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem9 = mOptionsListWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("QgsOptionsBase", "GDAL", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem9->setToolTip(QApplication::translate("QgsOptionsBase", "GDAL", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem10 = mOptionsListWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("QgsOptionsBase", "CRS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem10->setToolTip(QApplication::translate("QgsOptionsBase", "CRS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem11 = mOptionsListWidget->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("QgsOptionsBase", "Locale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem11->setToolTip(QApplication::translate("QgsOptionsBase", "Locale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem12 = mOptionsListWidget->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("QgsOptionsBase", "Network", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem12->setToolTip(QApplication::translate("QgsOptionsBase", "Network", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        groupBox->setTitle(QApplication::translate("QgsOptionsBase", "Application", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("QgsOptionsBase", "Style <i>(QGIS restart required)</i>", 0, QApplication::UnicodeUTF8));
        textLabel1_4->setText(QApplication::translate("QgsOptionsBase", "Icon theme", 0, QApplication::UnicodeUTF8));
        cmbTheme->clear();
        cmbTheme->insertItems(0, QStringList()
         << QString()
        );
        textLabel1_5->setText(QApplication::translate("QgsOptionsBase", "Icon size", 0, QApplication::UnicodeUTF8));
        cmbIconSize->clear();
        cmbIconSize->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "48", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "64", 0, QApplication::UnicodeUTF8)
        );
        label_43->setText(QApplication::translate("QgsOptionsBase", "Font", 0, QApplication::UnicodeUTF8));
        mFontFamilyRadioQt->setText(QApplication::translate("QgsOptionsBase", "Qt default", 0, QApplication::UnicodeUTF8));
        mFontFamilyRadioCustom->setText(QString());
        label_20->setText(QApplication::translate("QgsOptionsBase", "Size", 0, QApplication::UnicodeUTF8));
        mMessageTimeoutLabel->setText(QApplication::translate("QgsOptionsBase", "Timeout for timed messages or dialogs", 0, QApplication::UnicodeUTF8));
        mMessageTimeoutSpnBx->setSuffix(QApplication::translate("QgsOptionsBase", " s", 0, QApplication::UnicodeUTF8));
        cbxHideSplash->setText(QApplication::translate("QgsOptionsBase", "Hide splash screen at startup", 0, QApplication::UnicodeUTF8));
        cbxShowTips->setText(QApplication::translate("QgsOptionsBase", "Show tips at start up", 0, QApplication::UnicodeUTF8));
        mBoldGroupBoxTitleChkBx->setText(QApplication::translate("QgsOptionsBase", "Bold group box titles", 0, QApplication::UnicodeUTF8));
        mCustomGroupBoxChkBx->setText(QApplication::translate("QgsOptionsBase", "QGIS-styled group boxes", 0, QApplication::UnicodeUTF8));
        mNativeColorDialogsChkBx->setText(QApplication::translate("QgsOptionsBase", "Use native color chooser dialogs", 0, QApplication::UnicodeUTF8));
        mLiveColorDialogsChkBx->setText(QApplication::translate("QgsOptionsBase", "Use live-updating color chooser dialogs", 0, QApplication::UnicodeUTF8));
        mCustomSideBarSide->setText(QApplication::translate("QgsOptionsBase", "Custom side bar style", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("QgsOptionsBase", "Project files", 0, QApplication::UnicodeUTF8));
        mProjectOnLaunchCmbBx->clear();
        mProjectOnLaunchCmbBx->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "New", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Most recent", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Specific", 0, QApplication::UnicodeUTF8)
        );
        mProjectOnLaunchPushBtn->setText(QApplication::translate("QgsOptionsBase", "...", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("QgsOptionsBase", "Open project on launch", 0, QApplication::UnicodeUTF8));
        cbxProjectDefaultNew->setText(QApplication::translate("QgsOptionsBase", "Create new project from default project", 0, QApplication::UnicodeUTF8));
        pbnProjectDefaultSetCurrent->setText(QApplication::translate("QgsOptionsBase", "Set current project as default", 0, QApplication::UnicodeUTF8));
        pbnProjectDefaultReset->setText(QApplication::translate("QgsOptionsBase", "Reset default", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("QgsOptionsBase", "Template folder", 0, QApplication::UnicodeUTF8));
        pbnTemplateFolderBrowse->setText(QApplication::translate("QgsOptionsBase", "Browse", 0, QApplication::UnicodeUTF8));
        pbnTemplateFolderReset->setText(QApplication::translate("QgsOptionsBase", "Reset", 0, QApplication::UnicodeUTF8));
        chbAskToSaveProjectChanges->setText(QApplication::translate("QgsOptionsBase", "Prompt to save project and data source changes when required", 0, QApplication::UnicodeUTF8));
        mLayerDeleteConfirmationChkBx->setText(QApplication::translate("QgsOptionsBase", "Prompt for confirmation when a layer is to be removed", 0, QApplication::UnicodeUTF8));
        chbWarnOldProjectVersion->setText(QApplication::translate("QgsOptionsBase", "Warn when opening a project file saved with an older version of QGIS", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("QgsOptionsBase", "Enable macros", 0, QApplication::UnicodeUTF8));
        cmbEnableMacros->clear();
        cmbEnableMacros->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "Never", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Ask", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "For this session only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Always (not recommended)", 0, QApplication::UnicodeUTF8)
        );
        groupBox_2->setTitle(QApplication::translate("QgsOptionsBase", "SVG paths", 0, QApplication::UnicodeUTF8));
        mSVGLabel->setText(QApplication::translate("QgsOptionsBase", "Path(s) to search for Scalable Vector Graphic (SVG) symbols", 0, QApplication::UnicodeUTF8));
        mBtnAddSVGPath->setText(QApplication::translate("QgsOptionsBase", "Add", 0, QApplication::UnicodeUTF8));
        mBtnRemoveSVGPath->setText(QApplication::translate("QgsOptionsBase", "Remove", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("QgsOptionsBase", "Plugin paths", 0, QApplication::UnicodeUTF8));
        mSVGLabel_2->setText(QApplication::translate("QgsOptionsBase", "Path(s) to search for additional C++ plugins libraries", 0, QApplication::UnicodeUTF8));
        mBtnAddPluginPath->setText(QApplication::translate("QgsOptionsBase", "Add", 0, QApplication::UnicodeUTF8));
        mBtnRemovePluginPath->setText(QApplication::translate("QgsOptionsBase", "Remove", 0, QApplication::UnicodeUTF8));
        mQSettingsGrpBx->setTitle(QApplication::translate("QgsOptionsBase", "QSettings", 0, QApplication::UnicodeUTF8));
        mRestoreDefaultWindowStateBtn->setText(QApplication::translate("QgsOptionsBase", "Reset", 0, QApplication::UnicodeUTF8));
        mRestoreDefaultWindowStateLbl->setText(QApplication::translate("QgsOptionsBase", "Reset user interface to default settings (restart required)", 0, QApplication::UnicodeUTF8));
        mEnvironmentGrpBx->setTitle(QApplication::translate("QgsOptionsBase", "Environment", 0, QApplication::UnicodeUTF8));
        mRemoveCustomVarBtn->setText(QApplication::translate("QgsOptionsBase", "Remove", 0, QApplication::UnicodeUTF8));
        mAddCustomVarBtn->setText(QApplication::translate("QgsOptionsBase", "Add", 0, QApplication::UnicodeUTF8));
        mCurrentVariablesGrpBx->setTitle(QApplication::translate("QgsOptionsBase", "Current environment variables (read-only - bold indicates modified at startup)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = mCurrentVariablesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsOptionsBase", "Variable", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = mCurrentVariablesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsOptionsBase", "Value", 0, QApplication::UnicodeUTF8));
        mCurrentVariablesQGISChxBx->setText(QApplication::translate("QgsOptionsBase", "Show only QGIS-specific variables", 0, QApplication::UnicodeUTF8));
        mCustomVariablesChkBx->setText(QApplication::translate("QgsOptionsBase", "Use custom variables (restart required - include separators)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = mCustomVariablesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsOptionsBase", "Apply", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = mCustomVariablesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsOptionsBase", "Variable", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = mCustomVariablesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsOptionsBase", "Value", 0, QApplication::UnicodeUTF8));
        groupBox_18->setTitle(QApplication::translate("QgsOptionsBase", "Feature attributes and table", 0, QApplication::UnicodeUTF8));
        cbxAttributeTableDocked->setText(QApplication::translate("QgsOptionsBase", "Open attribute table in a dock window (QGIS restart required)", 0, QApplication::UnicodeUTF8));
        cbxCopyWKTGeomFromTable->setText(QApplication::translate("QgsOptionsBase", "Copy geometry in WKT representation from attribute table", 0, QApplication::UnicodeUTF8));
        textLabel1_7->setText(QApplication::translate("QgsOptionsBase", "Attribute table behaviour", 0, QApplication::UnicodeUTF8));
        cmbAttrTableBehaviour->clear();
        cmbAttrTableBehaviour->insertItems(0, QStringList()
         << QString()
        );
        textLabel1_12->setText(QApplication::translate("QgsOptionsBase", "Attribute table row cache", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("QgsOptionsBase", "Representation for NULL values", 0, QApplication::UnicodeUTF8));
        groupBox_19->setTitle(QApplication::translate("QgsOptionsBase", "Data source handling", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("QgsOptionsBase", "Scan for valid items in the browser dock", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("QgsOptionsBase", "Scan for contents of compressed files (.zip) in browser dock", 0, QApplication::UnicodeUTF8));
        textLabel1_13->setText(QApplication::translate("QgsOptionsBase", "Prompt for raster sublayers when opening", 0, QApplication::UnicodeUTF8));
        cmbPromptRasterSublayers->clear();
        cmbPromptRasterSublayers->insertItems(0, QStringList()
         << QString()
        );
#ifndef QT_NO_TOOLTIP
        cbxIgnoreShapeEncoding->setToolTip(QApplication::translate("QgsOptionsBase", "Disable OGR on-the-fly conversion from declared encoding to UTF-8", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbxIgnoreShapeEncoding->setText(QApplication::translate("QgsOptionsBase", "Ignore shapefile encoding declaration", 0, QApplication::UnicodeUTF8));
        cbxAddPostgisDC->setText(QApplication::translate("QgsOptionsBase", "Add PostGIS layers with double click and select in extended mode", 0, QApplication::UnicodeUTF8));
        cbxAddOracleDC->setText(QApplication::translate("QgsOptionsBase", "Add Oracle layers with double click and select in extended mode", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("QgsOptionsBase", "Rendering behavior", 0, QApplication::UnicodeUTF8));
        chkAddedVisibility->setText(QApplication::translate("QgsOptionsBase", "By default new la&yers added to the map should be displayed", 0, QApplication::UnicodeUTF8));
        chkUseRenderCaching->setText(QApplication::translate("QgsOptionsBase", "Use render caching where possible to speed up redraws", 0, QApplication::UnicodeUTF8));
        chkParallelRendering->setText(QApplication::translate("QgsOptionsBase", "Render layers in parallel using many CPU cores", 0, QApplication::UnicodeUTF8));
        chkMaxThreads->setText(QApplication::translate("QgsOptionsBase", "Max cores to use:", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("QgsOptionsBase", "Map update interval", 0, QApplication::UnicodeUTF8));
        spinMapUpdateInterval->setSuffix(QApplication::translate("QgsOptionsBase", " ms", 0, QApplication::UnicodeUTF8));
        mSimplifyDrawingGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Enable feature simplification by default for newly added layers", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Feature simplification may speed up rendering but can result in rendering inconsistencies", 0, QApplication::UnicodeUTF8));
        label_65->setText(QApplication::translate("QgsOptionsBase", "Simplification threshold (higher values result in more simplification): ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSimplifyDrawingSpinBox->setToolTip(QApplication::translate("QgsOptionsBase", "Higher values result in more simplification", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSimplifyDrawingPx->setText(QApplication::translate("QgsOptionsBase", "pixels", 0, QApplication::UnicodeUTF8));
        mSimplifyDrawingAtProvider->setText(QApplication::translate("QgsOptionsBase", "Simplify on provider side if possible", 0, QApplication::UnicodeUTF8));
        mSimplifyMaxScaleLabel->setText(QApplication::translate("QgsOptionsBase", "Maximum scale at which the layer should be simplified (1:1 always simplifies): ", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("QgsOptionsBase", "Rendering quality", 0, QApplication::UnicodeUTF8));
        chkAntiAliasing->setText(QApplication::translate("QgsOptionsBase", "Make lines appear less jagged at the expense of some drawing performance", 0, QApplication::UnicodeUTF8));
        groupBox_14->setTitle(QApplication::translate("QgsOptionsBase", "Rasters", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("QgsOptionsBase", "RGB band selection", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("QgsOptionsBase", "Red band", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("QgsOptionsBase", "Green band", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("QgsOptionsBase", "Blue band", 0, QApplication::UnicodeUTF8));
        groupBox_17->setTitle(QApplication::translate("QgsOptionsBase", "Contrast enhancement", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("QgsOptionsBase", "Single band gray", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("QgsOptionsBase", "Multi band color (byte / band) ", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("QgsOptionsBase", "Multi band color (> byte / band) ", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("QgsOptionsBase", "Limits (minimum/maximum)", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("QgsOptionsBase", "Cumulative pixel count cut limits", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("QgsOptionsBase", "-", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("QgsOptionsBase", "%", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("QgsOptionsBase", "Standard deviation multiplier", 0, QApplication::UnicodeUTF8));
        groupBox_22->setTitle(QApplication::translate("QgsOptionsBase", "Debugging", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("QgsOptionsBase", "Show these events in the Log Message panel (under Rendering tab)", 0, QApplication::UnicodeUTF8));
        mLogCanvasRefreshChkBx->setText(QApplication::translate("QgsOptionsBase", "Map canvas refresh", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("QgsOptionsBase", "Standard colors", 0, QApplication::UnicodeUTF8));
        mButtonPasteColors->setText(QApplication::translate("QgsOptionsBase", "Paste colors", 0, QApplication::UnicodeUTF8));
        mButtonExportColors->setText(QApplication::translate("QgsOptionsBase", "Export", 0, QApplication::UnicodeUTF8));
        mButtonAddColor->setText(QApplication::translate("QgsOptionsBase", "Add color", 0, QApplication::UnicodeUTF8));
        mButtonRemoveColor->setText(QApplication::translate("QgsOptionsBase", "Remove color", 0, QApplication::UnicodeUTF8));
        mButtonCopyColors->setText(QApplication::translate("QgsOptionsBase", "Copy colors", 0, QApplication::UnicodeUTF8));
        mButtonImportColors->setText(QApplication::translate("QgsOptionsBase", "Import", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("QgsOptionsBase", "Default map appearance (overridden by project properties)", 0, QApplication::UnicodeUTF8));
        pbnCanvasColor->setText(QString());
        label->setText(QApplication::translate("QgsOptionsBase", "Background color", 0, QApplication::UnicodeUTF8));
        textLabel1_9->setText(QApplication::translate("QgsOptionsBase", "Selection color", 0, QApplication::UnicodeUTF8));
        pbnSelectionColor->setText(QString());
        mLegendGrpBx->setTitle(QApplication::translate("QgsOptionsBase", "Layer legend", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("QgsOptionsBase", "Double click action in legend", 0, QApplication::UnicodeUTF8));
        cmbLegendDoubleClickAction->clear();
        cmbLegendDoubleClickAction->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "Open layer properties", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Open attribute table", 0, QApplication::UnicodeUTF8)
        );
        capitaliseCheckBox->setText(QApplication::translate("QgsOptionsBase", "Capitalise layer names", 0, QApplication::UnicodeUTF8));
        mLegendLayersBoldChkBx->setText(QApplication::translate("QgsOptionsBase", "Bold layer names", 0, QApplication::UnicodeUTF8));
        cbxLegendClassifiers->setText(QApplication::translate("QgsOptionsBase", "Display classification attribute names", 0, QApplication::UnicodeUTF8));
        mLegendGroupsBoldChkBx->setText(QApplication::translate("QgsOptionsBase", "Bold group names", 0, QApplication::UnicodeUTF8));
        cbxCreateRasterLegendIcons->setText(QApplication::translate("QgsOptionsBase", "Create raster icons (may be slow)", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("QgsOptionsBase", "Legend item styles", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("QgsOptionsBase", "WMS getLegendGraphic Resolution", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLegendGraphicResolutionSpinBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mLegendGraphicResolutionSpinBox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        mIdentifyGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Identify", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("QgsOptionsBase", "Search radius for identifying features and displaying map tips", 0, QApplication::UnicodeUTF8));
        spinBoxIdentifyValue->setSuffix(QApplication::translate("QgsOptionsBase", " mm", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Specify the search radius as a percentage of the map width", 0, QApplication::UnicodeUTF8));
        mIdentifyHighlighColorLabel->setText(QApplication::translate("QgsOptionsBase", "Highlight color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mIdentifyHighlightColorButton->setToolTip(QApplication::translate("QgsOptionsBase", "<html><head/><body><p>The color used to highlight identified feature. The alpha channel is only used for polygons fill, lines and outlines are fully opaque.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mIdentifyHighlightColorButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mIdentifyHighlightBufferLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mIdentifyHighlightBufferLabel->setText(QApplication::translate("QgsOptionsBase", "Buffer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mIdentifyHighlightBufferSpinBox->setToolTip(QApplication::translate("QgsOptionsBase", "Lines / outlines buffer in millimeters.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mIdentifyHighlightBufferSpinBox->setSuffix(QApplication::translate("QgsOptionsBase", " mm", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mIdentifyHighlightMinWidthLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mIdentifyHighlightMinWidthLabel->setText(QApplication::translate("QgsOptionsBase", "Minimum width", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mIdentifyHighlightMinWidthSpinBox->setToolTip(QApplication::translate("QgsOptionsBase", "Minimum line / outline width in millimeters.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mIdentifyHighlightMinWidthSpinBox->setSuffix(QApplication::translate("QgsOptionsBase", " mm", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("QgsOptionsBase", "Measure tool", 0, QApplication::UnicodeUTF8));
        textLabel1_10->setText(QApplication::translate("QgsOptionsBase", "Rubberband color", 0, QApplication::UnicodeUTF8));
        textLabel1_11->setText(QApplication::translate("QgsOptionsBase", "Preferred measurements units", 0, QApplication::UnicodeUTF8));
        radMeters->setText(QApplication::translate("QgsOptionsBase", "Meters", 0, QApplication::UnicodeUTF8));
        radFeet->setText(QApplication::translate("QgsOptionsBase", "Feet", 0, QApplication::UnicodeUTF8));
        radNautical->setText(QApplication::translate("QgsOptionsBase", "Nautical Miles", 0, QApplication::UnicodeUTF8));
        radDegrees->setText(QApplication::translate("QgsOptionsBase", "Degrees", 0, QApplication::UnicodeUTF8));
        mAngleUnitsLabel->setText(QApplication::translate("QgsOptionsBase", "Preferred angle units", 0, QApplication::UnicodeUTF8));
        mDegreesRadioButton->setText(QApplication::translate("QgsOptionsBase", "Degrees", 0, QApplication::UnicodeUTF8));
        mRadiansRadioButton->setText(QApplication::translate("QgsOptionsBase", "Radians", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QgsOptionsBase", "Decimal places", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QgsOptionsBase", "Keep base unit", 0, QApplication::UnicodeUTF8));
        mKeepBaseUnitCheckBox->setText(QString());
        mGonRadioButton->setText(QApplication::translate("QgsOptionsBase", "Gon", 0, QApplication::UnicodeUTF8));
        pbnMeasureColor->setText(QString());
        groupBox_10->setTitle(QApplication::translate("QgsOptionsBase", "Panning and zooming", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsOptionsBase", "Zoom factor", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsOptionsBase", "Mouse wheel action", 0, QApplication::UnicodeUTF8));
        cmbWheelAction->clear();
        cmbWheelAction->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "Zoom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Zoom and recenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Zoom to mouse cursor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "Nothing", 0, QApplication::UnicodeUTF8)
        );
        groupBox_15->setTitle(QApplication::translate("QgsOptionsBase", "Predefined scales", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnAddScale->setToolTip(QApplication::translate("QgsOptionsBase", "Add predefined scale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnAddScale->setText(QApplication::translate("QgsOptionsBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnRemoveScale->setToolTip(QApplication::translate("QgsOptionsBase", "Remove selected", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnRemoveScale->setText(QApplication::translate("QgsOptionsBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnDefaultScaleValues->setToolTip(QApplication::translate("QgsOptionsBase", "Insert default scales", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnDefaultScaleValues->setText(QApplication::translate("QgsOptionsBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnImportScales->setToolTip(QApplication::translate("QgsOptionsBase", "Import from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnImportScales->setText(QApplication::translate("QgsOptionsBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnExportScales->setToolTip(QApplication::translate("QgsOptionsBase", "Export to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnExportScales->setText(QApplication::translate("QgsOptionsBase", "...", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QgsOptionsBase", "Composition defaults", 0, QApplication::UnicodeUTF8));
        label_60->setText(QApplication::translate("QgsOptionsBase", "Default font", 0, QApplication::UnicodeUTF8));
        groupBox_23->setTitle(QApplication::translate("QgsOptionsBase", "Grid appearance", 0, QApplication::UnicodeUTF8));
        label_66->setText(QApplication::translate("QgsOptionsBase", "Grid style", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsOptionsBase", "Grid color", 0, QApplication::UnicodeUTF8));
        mGridColorButton->setText(QString());
        groupBox_24->setTitle(QApplication::translate("QgsOptionsBase", "Grid and guide defaults", 0, QApplication::UnicodeUTF8));
        label_61->setText(QApplication::translate("QgsOptionsBase", "Grid spacing", 0, QApplication::UnicodeUTF8));
        mGridResolutionSpinBox->setSuffix(QApplication::translate("QgsOptionsBase", " mm", 0, QApplication::UnicodeUTF8));
        label_63->setText(QApplication::translate("QgsOptionsBase", "Grid offset", 0, QApplication::UnicodeUTF8));
        mOffsetXSpinBox->setPrefix(QApplication::translate("QgsOptionsBase", "x: ", 0, QApplication::UnicodeUTF8));
        mOffsetYSpinBox->setPrefix(QApplication::translate("QgsOptionsBase", "y: ", 0, QApplication::UnicodeUTF8));
        mOffsetYSpinBox->setSuffix(QString());
        label_62->setText(QApplication::translate("QgsOptionsBase", "Snap tolerance", 0, QApplication::UnicodeUTF8));
        mSnapToleranceSpinBox->setSuffix(QApplication::translate("QgsOptionsBase", " px", 0, QApplication::UnicodeUTF8));
        mEnterAttributeValuesGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Feature creation", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("QgsOptionsBase", "Validate geometries", 0, QApplication::UnicodeUTF8));
        chkDisableAttributeValuesDlg->setText(QApplication::translate("QgsOptionsBase", "Suppress attribute form pop-up after feature creation", 0, QApplication::UnicodeUTF8));
        chkReuseLastValues->setText(QApplication::translate("QgsOptionsBase", "Reuse last entered attribute values", 0, QApplication::UnicodeUTF8));
        mRubberBandGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Rubberband", 0, QApplication::UnicodeUTF8));
        mLineColorTextLabel->setText(QApplication::translate("QgsOptionsBase", "Line color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLineWidthSpinBox->setToolTip(QApplication::translate("QgsOptionsBase", "Line width in pixels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLineWidthTextLabel->setText(QApplication::translate("QgsOptionsBase", "Line width", 0, QApplication::UnicodeUTF8));
        mLineColorToolButton->setText(QString());
        mSnappingGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Snapping", 0, QApplication::UnicodeUTF8));
        mDefaultSnapModeLabel->setText(QApplication::translate("QgsOptionsBase", "Default snap mode", 0, QApplication::UnicodeUTF8));
        mDefaultSnappingToleranceTextLabel->setText(QApplication::translate("QgsOptionsBase", "Default snapping tolerance", 0, QApplication::UnicodeUTF8));
        mVertexSearchRadiusVertexEditLabel->setText(QApplication::translate("QgsOptionsBase", "Search radius for vertex edits", 0, QApplication::UnicodeUTF8));
        mDefaultSnappingToleranceComboBox->clear();
        mDefaultSnappingToleranceComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "map units", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "pixels", 0, QApplication::UnicodeUTF8)
        );
        mSearchRadiusVertexEditComboBox->clear();
        mSearchRadiusVertexEditComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsOptionsBase", "map units", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsOptionsBase", "pixels", 0, QApplication::UnicodeUTF8)
        );
        cbxSnappingOptionsDocked->setText(QApplication::translate("QgsOptionsBase", "Open snapping options in a dock window (QGIS restart required)", 0, QApplication::UnicodeUTF8));
        mVertexMarkerGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Vertex markers", 0, QApplication::UnicodeUTF8));
        mMarkerStyleLabel->setText(QApplication::translate("QgsOptionsBase", "Marker style", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsOptionsBase", "Marker size", 0, QApplication::UnicodeUTF8));
        mMarkersOnlyForSelectedCheckBox->setText(QApplication::translate("QgsOptionsBase", "Show markers only for selected features", 0, QApplication::UnicodeUTF8));
        groupBox_21->setTitle(QApplication::translate("QgsOptionsBase", "Curve offset tool", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("QgsOptionsBase", "Miter limit", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("QgsOptionsBase", "Join style", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("QgsOptionsBase", "Quadrant segments", 0, QApplication::UnicodeUTF8));
        groupBox_16->setTitle(QApplication::translate("QgsOptionsBase", "GDAL driver options", 0, QApplication::UnicodeUTF8));
        pbnEditPyramidsOptions->setText(QApplication::translate("QgsOptionsBase", "Edit Pyramids Options", 0, QApplication::UnicodeUTF8));
        pbnEditCreateOptions->setText(QApplication::translate("QgsOptionsBase", "Edit Create Options", 0, QApplication::UnicodeUTF8));
        groupBox_13->setTitle(QApplication::translate("QgsOptionsBase", "GDAL drivers", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("QgsOptionsBase", "In some cases more than one GDAL driver can be used to load the same raster format. Use the list below to specify which to use.", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = lstGdalDrivers->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsOptionsBase", "Description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsOptionsBase", "Flags", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsOptionsBase", "ext", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsOptionsBase", "Name", 0, QApplication::UnicodeUTF8));
        grpProjectionBehaviour->setTitle(QApplication::translate("QgsOptionsBase", "CRS for new layers", 0, QApplication::UnicodeUTF8));
        pbnSelectProjection->setText(QApplication::translate("QgsOptionsBase", "Select...", 0, QApplication::UnicodeUTF8));
        radUseProjectProjection->setText(QApplication::translate("QgsOptionsBase", "Use &project CRS", 0, QApplication::UnicodeUTF8));
        radPromptForProjection->setText(QApplication::translate("QgsOptionsBase", "Prompt for &CRS", 0, QApplication::UnicodeUTF8));
        radUseGlobalProjection->setText(QApplication::translate("QgsOptionsBase", "Use default CRS displa&yed below", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsOptionsBase", "When a new layer is created, or when a layer is loaded that has no CRS", 0, QApplication::UnicodeUTF8));
        grpOtfTransform->setTitle(QApplication::translate("QgsOptionsBase", "Default CRS for new projects", 0, QApplication::UnicodeUTF8));
        radOtfTransform->setText(QApplication::translate("QgsOptionsBase", "Enable 'on the &fly' reprojection by default", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        radOtfAuto->setWhatsThis(QApplication::translate("QgsOptionsBase", "Automatically enable 'on the fly' reprojection if CRS of a new added layer differ from CRS of layer(s) already present. CRS of present layer(s) will be used.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        radOtfAuto->setText(QApplication::translate("QgsOptionsBase", "Automatically enable 'on the fly' reprojection if layers have different CRS", 0, QApplication::UnicodeUTF8));
        radOtfNone->setText(QApplication::translate("QgsOptionsBase", "Don't enable 'on the fly' reprojection", 0, QApplication::UnicodeUTF8));
        pbnSelectOtfProjection->setText(QApplication::translate("QgsOptionsBase", "Select...", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("QgsOptionsBase", "Always start new projects with this CRS", 0, QApplication::UnicodeUTF8));
        mDefaultDatumTransformGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Default datum transformations", 0, QApplication::UnicodeUTF8));
        mAddDefaultTransformButton->setText(QString());
        mRemoveDefaultTransformButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem1 = mDefaultDatumTransformTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(3, QApplication::translate("QgsOptionsBase", "Destination datum transform", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("QgsOptionsBase", "Source datum transform", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsOptionsBase", "Destination CRS", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsOptionsBase", "Source CRS", 0, QApplication::UnicodeUTF8));
        chkShowDatumTransformDialog->setText(QApplication::translate("QgsOptionsBase", "Ask for datum transformation when no default is defined", 0, QApplication::UnicodeUTF8));
        grpLocale->setTitle(QApplication::translate("QgsOptionsBase", "Override system locale", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsOptionsBase", "Locale to use instead", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Enabling / changing overide on local requires an application restart", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("QgsOptionsBase", "Additional Info", 0, QApplication::UnicodeUTF8));
        lblSystemLocale->setText(QApplication::translate("QgsOptionsBase", "Detected active locale on your system:", 0, QApplication::UnicodeUTF8));
        groupBox_20->setTitle(QApplication::translate("QgsOptionsBase", "General", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsOptionsBase", "WMS search address", 0, QApplication::UnicodeUTF8));
        mNetworkTimeoutLabel->setText(QApplication::translate("QgsOptionsBase", "Timeout for network requests (ms)", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("QgsOptionsBase", "Default expiration period for WMS-C/WMTS tiles (hours)", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("QgsOptionsBase", "Max retry in case of tile request errors", 0, QApplication::UnicodeUTF8));
        lblUserAgent->setText(QApplication::translate("QgsOptionsBase", "User-Agent", 0, QApplication::UnicodeUTF8));
        grpCache->setTitle(QApplication::translate("QgsOptionsBase", "Cache settings", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QgsOptionsBase", "Directory", 0, QApplication::UnicodeUTF8));
        mBrowseCacheDirectory->setText(QApplication::translate("QgsOptionsBase", "...", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QgsOptionsBase", "Size [KiB]", 0, QApplication::UnicodeUTF8));
        mClearCache->setText(QApplication::translate("QgsOptionsBase", "Clear", 0, QApplication::UnicodeUTF8));
        grpProxy->setTitle(QApplication::translate("QgsOptionsBase", "Use proxy for web access", 0, QApplication::UnicodeUTF8));
        lblProxyHost->setText(QApplication::translate("QgsOptionsBase", "Host", 0, QApplication::UnicodeUTF8));
        lblProxyPort->setText(QApplication::translate("QgsOptionsBase", "Port", 0, QApplication::UnicodeUTF8));
        lblUser->setText(QApplication::translate("QgsOptionsBase", "User", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leProxyUser->setToolTip(QApplication::translate("QgsOptionsBase", "Leave this blank if no proxy username / password are required", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblPassword->setText(QApplication::translate("QgsOptionsBase", "Password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leProxyPassword->setToolTip(QApplication::translate("QgsOptionsBase", "Leave this blank if no proxy username / password are required", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mTypeLabel->setText(QApplication::translate("QgsOptionsBase", "Proxy type", 0, QApplication::UnicodeUTF8));
        grpUrlExclude->setTitle(QApplication::translate("QgsOptionsBase", "Exclude URLs (starting with)", 0, QApplication::UnicodeUTF8));
        mRemoveUrlPushButton->setText(QApplication::translate("QgsOptionsBase", "Remove", 0, QApplication::UnicodeUTF8));
        mAddUrlPushButton->setText(QApplication::translate("QgsOptionsBase", "Add", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsOptionsBase: public Ui_QgsOptionsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOPTIONSBASE_H
