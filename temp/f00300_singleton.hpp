
class Singleton
{
public:
	
	struct UIQuad
	{
		fBoundingBox hitBounds;
		CharStruct* cs;
		int fontId;
	};
	
	struct UICont {
		//UIComponent* uiComp;
		UIQuad bg;
		std::vector<UIQuad> charVec;
		//bool locked;
	};
	
	struct JSONStruct {
		JSONValue* jv;
	};
	struct UICStruct {
		int nodeId;
	};
	struct CompStruct {
		bool isValid;
		UIComponent* data;
	};
	
	
	
	struct CompareStruct {
	    bool operator()(const string& first, const string& second) {
	        return first.compare(second) < 0;//first.size() < second.size();
	    }
	};

	CompareStruct compareStruct;
	
	
	typedef map<string, UICStruct>::iterator itUICStruct;
	typedef map<string, JSONStruct>::iterator itJSStruct;
	
	
	
	GameCamera* mainCamera;
	
	
	bool keysPressed[MAX_KEYS];
	double keyDownTimes[MAX_KEYS];
	unsigned char keyMap[MAX_KEYS];
	
	GLdouble viewMatrixD[16];
	GLdouble projMatrixD[16];
	
	Matrix4 viewMatrix;
	Matrix4 projMatrix;
	GLint viewport[4];

	E_OBJ activeObject;
	E_OBJ tempObj;
	
	eProgramState programState;
	eProgramAction progActionsDown[E_PS_SIZE * 256];
	eProgramAction progActionsUp[E_PS_SIZE * 256];

	EntSelection nearestLights;
	EntSelection highlightedEnts;
	EntSelection selectedEnts;
	GameEnt* selectedEnt;
	GameEnt* highlightedEnt;
	
	bool updateMatFlag;
	bool matVolLock;
	bool isMoving;
	bool perspectiveOn;
	bool isInteractiveEnt[E_CT_LENGTH];
	bool inputOn;
	bool pathfindingOn;
	bool isMacro;
	bool orgOn;
	bool autoScroll;
	bool cavesOn;
	bool bakeParamsOn;
	bool dragging;
	bool mouseMoved;
	bool changingGenVal;
	bool readyForRestart;
	bool forceRestart;
	bool hitGUI;
	bool draggingMap;
	bool guiLock;
	bool guiDirty;
	bool mirrorOn;
	bool applyToChildren;
	bool bShiftOld;
	bool bCtrlOld;
	bool bCtrl;
	bool bShift;
	bool testOn;
	bool emptyVDNotReady;
	bool radiosityOn;
	bool updateLock;
	bool isFullScreen;
	bool mapInvalid;
	bool wsBufferInvalid;
	bool forceGetPD;
	bool mouseLeftDown;
	bool mouseRightDown;
	bool pboSupported;
	bool notQuit;
	bool timerNotSet;
	bool lbDown;
	bool abDown; // lb, rb, or mb is down
	bool rbDown;
	bool mbDown;
	bool isBare;
	bool showMap;
	bool traceOn;
	bool waterOn;
	bool treesOn;
	bool firstRun;
	bool rotOn;
	bool doPageRender;
	bool markerFound;
	bool editPose;
	bool isDraggingObject;
	
	int entIdToIcon[MAX_OBJ_TYPES];
	int iconToEntId[MAX_OBJ_TYPES];
	bool isContainer[MAX_OBJ_TYPES];
	
	int currentTick;
	int draggingFromInd;
	int draggingToInd;
	int draggingFromType;
	int draggingToType;
	
	int maxHolderDis;
	int gameObjCounter;
	//int lastContIndex;
	int lastObjectCount;
	int lastObjInd;
	int bestObjInd;
	int fieldCallback;
	int mouseState;
	int lastW;
	int lastH;
	int cdMap[256];
	int maxLayerOver;
	int holderResolution;
	int visPageSizeInUnits;
	int bufferedPageSizeInUnits;
	int unitSizeInPixels;
	int holdersPerLot;
	int pixelsPerLot;
	int pixelsPerCell;
	int visPageSizeInPixels;
	int holderSizeInPixels;
	int currentStep;
	int maxChangesInPages;
	int maxChangesInHolders;
	int baseW;
	int baseH;
	int scaleFactor;
	int numDynLights;
	int iNumSteps;
	int curOrgId;
	int cellsPerLot;
	int extraRad;
	int defaultWinW;
	int defaultWinH;
	int guiWinW;
	int guiWinH;
	int shadersAreLoaded;
	int readyToRecompile;
	int lastPosX;
	int lastPosY;
	int frameCount;
	int maxHInPages;
	int maxWInPages;
	int screenWidth;
	int screenHeight;
	int mouseMovingSize;
	int mouseMovingLoc;
	int mouseMovingStepsBack;
	int mouseCount;
	int lastMouseX;
	int lastMouseY;
	int cellsPerNodeXY;
	int terDataVisPitchXY;
	int terDataBufPitchXY;
	int terDataBufPitchScaledXY;
	int cellsPerNodeZ;
	int terDataVisPitchZ;
	int terDataBufPitchZ;
	int terDataBufPitchScaledZ;
	int terDataBufAmount;
	int terDataVisSize;
	int terDataBufSize;
	int terDataTexScale;
	int terDataBufSizeScaled;
	int iNodeDivsPerLot;
	int holderSizeInPages;
	int volGenSuperMod;
	int volGenSuperRes;
	int matVolSize;
	int escCount;
	int lastNodeId;
	int *cdBuffer;
	intPair entIdArr[1024];
	
	uint palWidth;
	uint palHeight;
	uint blockShift;
	uint volGenFBOX;
	uint *terDataScaled;


	float lastx;
	float lasty;
	float FOV;
	float focalLength;
	float zoomDelta;
	float subjectDelta;
	float subjectZoom;
	float voxelSizeInWC;
	float msPerFrame;
	float cameraZoom;
	float targetZoom;
	float fogOn;
	float gridOn;
	float mapSampScale;
	float curBrushRad;
	float timeOfDay;
	float targetTimeOfDay;
	float gridSizeInPixels;
	float origWinW;
	float origWinH;
	float guiX;
	float guiY;
	float aspectRatio;
	float currentFBOResolutionX;
	float currentFBOResolutionY;
	float mouseX;
	float mouseY;
	float mouseXUp;
	float mouseYUp;
	float bufferMult;
	float holderSizeMB;
	float bestNodeDis;
	float heightOfNearPlane;
	float scrollDiv;
	float curMoveSpeed;
	float curMoveAccel;
	float masterVolume;
	float ambientVolume;
	float guiVolume;
	float musicVolume;
	float fxVolume;
	float *paramArr;
	float *voroArr;
	float *matCountArr;
	float *paramArrMap;
	float clipDist[2];
	
	float MAX_TRAVEL_DIS;
	
	double lastMoveTime;
	double curTime;
	double clickTime;
	double lastTime;
	double mdTime;
	double muTime;
	
	GameOrgNode* bestNode;
	GameOrgNode* selectedNode;
	GameOrgNode* lastSelNode;
	GameOrgNode* activeNode;

	FIVector4 dirVecs[6];
	FIVector4 targetCameraPos;
	FIVector4 lastCellPos;
	FIVector4 worldMarker;
	FIVector4 lookAtVec;
	//FIVector4 targetLookAtVec;
	FIVector4 baseCameraPos;
	FIVector4 cameraPosAdjusted;
	FIVector4 baseScrollPos;
	FIVector4 worldSizeInPixels;
	FIVector4 mouseUpPD;
	FIVector4 mouseUpOPD;
	FIVector4 spaceUpPD;
	FIVector4 mouseDownPD;
	FIVector4 mouseDownOPD;
	FIVector4 mouseMovePD;
	FIVector4 tempVec1;
	FIVector4 tempVec2;
	FIVector4 tempVec3;
	FIVector4 worldSizeInTerData;
	FIVector4 worldSizeInUnits;
	FIVector4 worldSizeInPages;
	FIVector4 worldSizeInLots;
	FIVector4 worldSizeInCells;
	FIVector4 worldSizeInHolders;
	FIVector4 worldSizeInBlocks;
	FIVector4 moveNodes[2];
	FIVector4 voroVecArr[125];
	floatAndIndex indexArr[125];
	FIVector4 mouseStart;
	FIVector4 mouseEnd;
	FIVector4 mouseMoveVec;
	FIVector4 mapFreqs;
	FIVector4 mapAmps;
	FIVector4 *mouseMoving;
	FIVector4 mouseVel;
	FIVector4 bufferDim;
	FIVector4 bufferDimTarg;
	FIVector4 bufferDimHalf;
	FIVector4 bufferModDim;
	FIVector4 origin;
	FIVector4 lastModXYZ;
	FIVector4 panMod;
	FIVector4 dMod;
	FIVector4 modXYZ;
	FIVector4 matVolDim;
	
	uint* matVol;
	
	
	
	std::vector<int> guiLayers[MAX_UI_LAYERS];
	//std::vector<int> emptyLayers[MAX_UI_LAYERS];
	
	std::vector<RotationInfo> rotMatStack;
	std::vector<DynObject *> dynObjects;
	PathHolder charPathHolder;
	PathHolder splitPathHolder;


	float floorHeightInCells;
	float roofHeightInCells;
	float wallRadInCells;


	
	int cellsPerHolder;
	int cellsPerPage;
	int unitsPerCell;
	int blockSizeInLots;
	int blockSizeInCells;
	int blockSizeInHolders;
	int blockSizeInPages;
	int blockSizeInPixels;

	Image *imageHM0;
	Image *imageHM1;
	Image *cloudImage;

	BaseObj* currentActor;
	BaseObj baseObj;
	
	
	GamePlant* gamePlants[E_PT_LENGTH/2];

	Shader *curShaderPtr;
	string currentFieldString;
	string curShader;
	string allText;
	string stringBuf;
	string curCallback;
	string cbDataStrings[10];
	
	string guiSaveLoc;

	PoolManager* gpuPool;
	PoolManager* entityPool;
	
	
	
	vector<CompStruct> compStack;
	vector<int> emptyStack;
	
	
	
	vector<string> splitStrings;
	vector<string> shaderStrings;
	vector<string> shaderTextureIds;
	map<string, Shader*> shaderMap;
	map<string, UICStruct> compMap;
	map<string, string> includeMap;
	map<string, FBOSet> fboMap;
	FBOSet vgFBOArr[MAX_VG_FBOS];
	FBOSet vgtFBOArr[MAX_VGT_FBOS];

	
	
	
	
	
	GLuint fsqDL;

	GLuint volId;
	GLuint volIdLinear;
	GLuint volIdEmpty;
	GLuint volIdEmptyLinear;
	GLuint volIdMat;

	GLuint volGenId;
	uint *lookup2to3;
	unsigned char *resultImage;
	
	materialNode* matSlice0;
	materialNode* matSlice1;
	materialNode* matSlice2;

	charArr nullBuffer;
	charArr lastImageBuffer;
	//charArr lastJSONBuffer;
	charArr lastJSONBufferGUI;

	
	JSONValue *rootObjJS;
	JSONValue *guiRootJS;

	#ifdef USE_POCO
		WebSocketServer *myWS;
	#endif
	
	Timer myTimer;
	Timer scrollTimer;
	Timer moveTimer;
	GameWorld* gw;
	GameAI* gameAI;

	float lightArr[MAX_LIGHTS * 16];
	int numLights;


	bool multiLights;

	int *rbStack;
	int *rbHeightStack;


	TerTexture terTextures[MAX_TER_TEX];


	GameOrg* testHuman;

	
	GameGUI* mainGUI;
	
	
	//UIComponent* lastPickerItem;
	//UIComponent* pickerMenu;
	//UIComponent* nullComp;
	UIComponent* mapComp;
	UIComponent* mainMenu;
	UIComponent* contMenu;
	UIComponent* contMenuBar;
	UIComponent* ddMenu;
	UIComponent* ddMenuBar;
	UIComponent* fieldMenu;
	UIComponent* fieldText;
	
	FontWrapper* fontWrappers[EFW_LENGTH];
	
	GameMusic* music[EML_LENGTH];
	map<string, GameSound> soundMap;
	
	map<string, StyleSheet> styleSheetMap;
	map<string, JSONStruct> externalJSON;

	Singleton()
	{
		
		fboMap.clear();
		shaderMap.clear();
		soundMap.clear();
		styleSheetMap.clear();
		
		mainGUI = NULL;
		gw = NULL;
		
		
		#ifdef USE_POCO
			myWS = NULL;
		#endif
		
	}


	void init(int _defaultWinW, int _defaultWinH, int _scaleFactor
	
		#ifdef USE_POCO
			, WebSocketServer *_myWS
		#endif	
		
		
	)
	{

		pushTrace("Singleton init");
		int i;
		int j;
		int k;
		
		TEMP_DEBUG = false;
		
		
		// todo: mem leak, should delete?
		externalJSON["shaderParams"].jv = NULL;
		externalJSON["objectData"].jv = NULL;
		externalJSON["kb.js"].jv = NULL;
		
		
		
		for (i = 0; i < EML_LENGTH; i++) {
			music[i] = new GameMusic();
			music[i]->init("..\\data\\music\\"+musicStrings[i]+".ogg");
			music[i]->setLoop(true);
		}
		
		for (i = 0; i < MAX_OBJ_TYPES; i++) {
			isContainer[i] = false;
			iconToEntId[i] = 0;
			entIdToIcon[i] = 0;
		}
		
		int itemCount = 0;
		
		itemCount = numberIcons(itemCount,0,0,11,20);
		itemCount = numberIcons(itemCount,12,0,23,15);
		itemCount = numberIcons(itemCount,24,0,35,16);
		itemCount = numberIcons(itemCount,12,16,21,20);
		itemCount = numberIcons(itemCount,22,17,35,31);
		itemCount = numberIcons(itemCount,0,21,15,31);
		itemCount = numberIcons(itemCount,16,21,21,22);
		itemCount = numberIcons(itemCount,0,32,35,35);
		itemCount = numberIcons(itemCount,0,36,15,47);
		itemCount = numberIcons(itemCount,16,36,35,47);
		
		
		for (i = 360; i <= 419; i++ ) {
			isContainer[i] = true;
		}
		for (i = 1240; i <= 1671; i++ ) {
			isContainer[i] = true;
		}
		
		
		for (i = 0; i < 6; i++) {
			dirVecs[i].setFXYZ(
				DIR_VECS[i][0],
				DIR_VECS[i][1],
				DIR_VECS[i][2]
			);
		}
		
		initAllMatrices();
		
		//nullComp = new UIComponent();
		
		for (i = 0; i < E_CT_LENGTH; i++) {
			isInteractiveEnt[i] = false;
		}
		
		float tempf;
		
		RUN_COUNT = 0;
		
		
		cdMap[0] = E_CD_EMPTY;
		for (i = 1; i < 256; i++) {
			cdMap[i] = E_CD_SOLID;
		}
		cdMap[17] = E_CD_WATER; //TEX_WATER
		
		isInteractiveEnt[E_CT_WINDOW] = true;
		isInteractiveEnt[E_CT_DOOR] = true;
		isInteractiveEnt[E_CT_LANTERN] = true;
		
		// problem with clipDist at 0.0 not rendering geom
		
		clipDist[0] = 0.0f;
		clipDist[1] = 16384.0f;
		
		inputOn = false;
		pathfindingOn = false;
		isMacro = false;
		orgOn = false;
		autoScroll = false;
		cavesOn = false;
		bakeParamsOn = true;
		dragging = false;
		mouseMoved = false;
		forceRestart = false;
		changingGenVal = false;
		readyForRestart = false;
		hitGUI = false;
		guiLock = false;
		guiDirty = true;
		
		
		
		//lastPickerItem = NULL;
		//pickerMenu = NULL;
		currentActor = NULL;
		mapComp = NULL;
		mainMenu = NULL;
		ddMenu = NULL;
		contMenu = NULL;
		fieldMenu = NULL;
		fieldText = NULL;
		selectedEnt = NULL;
		highlightedEnt = NULL;
		draggingMap = false;
		
		MAX_TRAVEL_DIS = 10.0f;
		FOV = 45.0f;
		focalLength = 1.0f / tan(FOV / 2.0f);

		totalPointCount = 0;
		
		activeNode = NULL;
		selectedNode = NULL;
		lastSelNode = NULL;
		
		curOrgId = 0;
		
		rootObjJS = NULL;
		guiRootJS = NULL;
		rbStack = NULL;
		rbHeightStack = NULL;

		multiLights = false;
		numDynLights = E_OBJ_LENGTH - E_OBJ_LIGHT0;
		updateMultiLights();

		maxLayerOver = -1;

		iNumSteps = 16;
		currentStep = 0;

		srand(time(NULL));

		timeOfDay = 1.0f;
		targetTimeOfDay = 1.0f;
		
		guiSaveLoc = "..\\data\\saves\\save0\\compMap.txt";

		//invItems = loadBMP("..\\data\\invitems.bmp");
		imageHM0 = loadBMP("..\\data\\hm0.bmp");
		imageHM1 = loadBMP("..\\data\\hm1.bmp");
		cloudImage = loadBMP("..\\data\\clouds.bmp");

		//invItems->getTextureId(GL_NEAREST);
		imageHM0->getTextureId(GL_NEAREST);
		imageHM1->getTextureId(GL_NEAREST);
		cloudImage->getTextureId(GL_LINEAR);


		mapSampScale = 0.25f;
		//renderCount = 1.0;
		int newPitch = (imageHM0->width) * mapSampScale; //*2;

		numLights = MAX_LIGHTS;//min(MAX_LIGHTS,E_OBJ_LENGTH-E_OBJ_LIGHT0);


		//////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////

		lastNodeId = 0;
		escCount = 0;

		initStyleSheet();

		curMoveSpeed = 0.0f;
		curMoveAccel = 0.0f;
		
		masterVolume = 0.0f;
		ambientVolume = 0.0f;
		guiVolume = 0.0f;
		musicVolume = 0.0f;
		fxVolume = 0.0f;

		applyToChildren = false;
		mirrorOn = true;
		//guiOn = false;
		bCtrlOld = false;
		bShiftOld = false;
		bCtrl = false;
		bShift = false;
		emptyVDNotReady = true;
		firstRun = true;
		waterOn = (MAX_LAYERS == 2);
		treesOn = true;
		rotOn = false;
		markerFound = false;
		isDraggingObject = false;
		editPose = false;
		doPageRender = true;
		
		
		
		
		
		
		/////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////
		
				
		// IMPORTANT: Maximum height must be less than 2^16, max world pitch must be less than 2^32
		
		// todo:
		
		// realtime cutaway based on green cube position
		// character editor load from json
		// floating trees
		// stacked lots?
		// WAS DOING:
		// replace worldspace fbo make xFBO have 3 targets instead of 2
		// edit: pack normal in 16, only use 2 targets
		
		// adjust camera for better loading, ray cast from cam pos to find nearest
		// chunk to load
		// flood fill from there until it hits blank chunk and stop
		
		lastObjectCount = 0;
		lastObjInd = 0;
		bestObjInd = 0;
		currentTick = 0;
		
		
		moveTimer.start();
		
		
		matVolDim.setIXYZ(64,64,256);
		matVolSize = matVolDim.getIX()*matVolDim.getIY()*matVolDim.getIZ();
		matVol = new uint[matVolSize];
		matSlice0 = new materialNode[matVolDim.getIX()*matVolDim.getIY()];
		matSlice1 = new materialNode[matVolDim.getIX()*matVolDim.getIY()];
		matSlice2 = new materialNode[matVolDim.getIX()*matVolDim.getIY()];
		
		for (i = 0; i < matVolSize; i++) {
			matVol[i] = 0;
		}
		
		
		// qqqqqq
		
		
		// TODO:
		// WAS DOING: make sure can drag from containers
		
		maxHolderDis = 32;
		
		int bufferDiv = 2;
		int curProfile;
		heightOfNearPlane = 1.0f;
		scrollDiv = 2.0;
		
		msPerFrame = 8.0;
		
		
		volGenFBOX = 32; // MAX OF 128
		
		
		
		maxChangesInPages = 8;
		maxChangesInHolders = 2;
		maxHInPages = 4;
		maxWInPages = 8;
		pixelsPerCell = 128; // do not adjust this, instead change volGenFBOX
		volGenSuperMod = 1;
		cellsPerPage = 4;
		cellsPerHolder = 8;
		volGenSuperRes = (volGenFBOX/volGenSuperMod);
		
		if (DO_POINTS) {
			glEnable(GL_POINT_SPRITE);
			glEnable(GL_VERTEX_PROGRAM_POINT_SIZE);
		}
		
		
		
		//glPointSize(2.0);
		
		
		
		cdBuffer = new int[cellsPerPage*cellsPerPage*cellsPerPage*E_CD_LENGTH];

		
		// This var determines how high the z val can go,
		// but also increases load times for each block
		
		cellsPerLot = 64; // adjust this to make lots bigger
		
		cellsPerNodeXY = 16;
		cellsPerNodeZ = 8;
		blockSizeInLots = 4;
		unitsPerCell = 4; // ONE UNIT == ONE METER
		

		worldSizeInLots.setIXYZ(newPitch, newPitch, blockSizeInLots);
		worldSizeInCells.copyIntMult(&worldSizeInLots, cellsPerLot);
		blockSizeInCells = blockSizeInLots * cellsPerLot;
		holderSizeInPages = cellsPerHolder / cellsPerPage;
		holdersPerLot = cellsPerLot / cellsPerHolder;
		visPageSizeInUnits = cellsPerPage * unitsPerCell;
		bufferMult = 1.25f;
		bufferedPageSizeInUnits = visPageSizeInUnits * bufferMult;
		worldSizeInHolders.copyIntMult(&worldSizeInLots, holdersPerLot);
		blockSizeInHolders = blockSizeInLots * holdersPerLot;
		blockSizeInPages = blockSizeInHolders * holderSizeInPages;
		worldSizeInBlocks.copyIntDiv(&worldSizeInHolders, blockSizeInHolders);
		worldSizeInPages.copyIntMult(&worldSizeInHolders, holderSizeInPages);
		worldSizeInUnits.copyIntMult(&worldSizeInPages, visPageSizeInUnits);
		
		
		

		pixelsPerLot = pixelsPerCell * cellsPerLot;
		unitSizeInPixels = pixelsPerCell / unitsPerCell;
		blockSizeInPixels = pixelsPerCell * blockSizeInCells;
		worldSizeInPixels.copyIntMult(&worldSizeInCells, pixelsPerCell);
		
		visPageSizeInPixels = pixelsPerCell * cellsPerPage;
		holderSizeInPixels = pixelsPerCell * cellsPerHolder;
		
		
		// pageResolution = visPageSizeInPixels;//512; // height of one page in pixels
		
		
		holderResolution = holderSizeInPixels;
		
		
		voxelSizeInWC = ((float)visPageSizeInPixels)/((float)volGenSuperRes);
		
		
		
		terDataTexScale = 1;
		//if (pixelsPerCell >= 128) {
			terDataTexScale = 1;
		//}
		
		terDataVisPitchXY = blockSizeInCells / cellsPerNodeXY;
		iNodeDivsPerLot = terDataVisPitchXY / blockSizeInLots;
		terDataBufAmount = iNodeDivsPerLot; // pad with one extra lot
		
		floorHeightInCells = (float)cellsPerNodeZ;
		roofHeightInCells = ((float)cellsPerNodeXY)/4.0f;
		wallRadInCells = ((float)cellsPerNodeXY)/4.0f;
		
		
		terDataBufPitchXY = terDataVisPitchXY + terDataBufAmount * 2;
		terDataBufPitchScaledXY = terDataBufPitchXY * terDataTexScale;
		
		terDataVisPitchZ = blockSizeInCells / cellsPerNodeZ;
		terDataBufPitchZ = terDataVisPitchZ + terDataBufAmount * 2;
		terDataBufPitchScaledZ = terDataBufPitchZ * terDataTexScale;

		terDataVisSize = terDataVisPitchXY * terDataVisPitchXY * terDataVisPitchZ;
		terDataBufSize = terDataBufPitchXY * terDataBufPitchXY * terDataBufPitchZ;
		terDataBufSizeScaled = terDataBufPitchScaledXY * terDataBufPitchScaledXY * terDataBufPitchScaledZ;


		terDataScaled = new uint[terDataBufSizeScaled];
		rbStack = new int[terDataBufSize];
		rbHeightStack = new int[terDataBufSize];


		worldSizeInTerData.setIXYZ(
			worldSizeInBlocks.getIX()*terDataVisPitchXY,
			worldSizeInBlocks.getIY()*terDataVisPitchXY,
			worldSizeInBlocks.getIZ()*terDataVisPitchZ
		);
		
		//lastContIndex = 0;
		draggingFromInd = 0;
		draggingToInd = 0;
		gameObjCounter = E_OBJ_LENGTH;
		lastMoveTime = 0.0;

		


		
		blockShift = intLogB2(blockSizeInHolders * blockSizeInHolders * blockSizeInHolders);
		holderSizeMB = ( ((float)MAX_LAYERS) * 2.0f * 4.0f * (float)(holderResolution * holderResolution)) / (1024.0f * 1024.0f);








		cout << "\n\n\n\n\n\n";



		// cout << "terDataBufPitchXY: " << terDataBufPitchXY << "\n";
		// cout << "terDataBufPitchZ: " << terDataBufPitchXY << "\n";
		// cout << "terDataVisPitchXY: " << terDataBufPitchXY << "\n";
		// cout << "terDataVisPitchZ: " << terDataBufPitchXY << "\n";
		
		cout << "cellsPerNodeXY: " << cellsPerNodeXY << "\n";
		cout << "cellsPerNodeZ: " << cellsPerNodeZ << "\n";
		
		cout << "blockSizeInHolders: " << blockSizeInHolders << "\n";
		cout << "blockSizeInPixels: " << blockSizeInPixels << "\n";
		cout << "terDataBufPitchScaledXY " << terDataBufPitchScaledXY << "\n";
		cout << "maxChangesInHolders: " << maxChangesInHolders << "\n";
		cout << "volGenFBOX: " << volGenFBOX << "\n";
		cout << "volGenFBOY: " << volGenFBOX *volGenFBOX << "\n";
		cout << "visPageSizeInPixels: " << visPageSizeInPixels << "\n";
		cout << "holderSizeInPixels: " << holderSizeInPixels << "\n";
		cout << "bufferMult: " << bufferMult << "\n";
		cout << "cellsPerLot: " << cellsPerLot << "\n";
		cout << "pixelsPerCell: " << pixelsPerCell << "\n";
		cout << "unitsPerCell: " << unitsPerCell << "\n";
		cout << "blockSizeInLots: " << blockSizeInLots << "\n";
		cout << "pixelsPerUnit: " << unitSizeInPixels << "\n";
		cout << "unitsPerLot: " << cellsPerLot*unitsPerCell << "\n";
		cout << "pixelsPerLot: " << pixelsPerLot << "\n";
		cout << "holderSizeInPages: " << holderSizeInPages << "\n";
		cout << "holdersPerLot: " << holdersPerLot << "\n";
		cout << "visPageSizeInUnits: " << visPageSizeInUnits << "\n";
		cout << "unitSizeInPixels: " << unitSizeInPixels << "\n";


		doTraceVecND("worldSizeInBlocks: ", &worldSizeInBlocks);
		doTraceVecND("worldSizeInLots: ", &worldSizeInLots);
		doTraceVecND("worldSizeInHolders: ", &worldSizeInHolders);
		doTraceVecND("worldSizeInPages: ", &worldSizeInPages);
		doTraceVecND("worldSizeInTerData: ", &worldSizeInTerData);

		GLint glQuery;
		glGetIntegerv(GL_MAX_UNIFORM_LOCATIONS, &glQuery);
		cout << "MAX_UNIFORMS: " << glQuery << "\n";

		cout << "\n\n\n\n\n\n";


		mapFreqs.setFXYZW(1.0f, 15.0f, 37.0f, 123.0f);
		mapAmps.setFXYZW(4.0f/16.0f,4.0f/16.0f, 4.0f/16.0f, 16.0f/16.0f); //0.0f, 0.0f, 0.0f);//


		gridSizeInPixels = pixelsPerCell;



		//////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////
		radiosityOn = true;
		testOn = false;
		updateLock = false;
		traceOn = false;
		gridOn = 0.0f;
		fogOn = 1.0f;
		cameraZoom = 1.0f;
		targetZoom = cameraZoom;
		

		zoomDelta = 0.0f;
		subjectDelta = 0.0f;
		subjectZoom = 1.0f;

		int ccr = 0;
		int ccg = 0;
		int ccb = 0;

		doTraceVecND("worldSizeInPixels: ", &worldSizeInPixels);






		

		int curFilter;

		for (i = 0; i < MAX_TER_TEX; i++)
		{

			terTextures[i].usedByBlockId = -1;
			terTextures[i].alreadyBound = false;


			// glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA32F, w, h, 0, GL_RGBA, GL_FLOAT, 0);

			glGenTextures(1, &(terTextures[i].texId));
			glBindTexture(GL_TEXTURE_3D, terTextures[i].texId);
			glTexImage3D(
				GL_TEXTURE_3D,
				0,
				GL_RGBA,
				terDataBufPitchScaledXY,
				terDataBufPitchScaledXY,
				terDataBufPitchScaledZ,
				0,
				GL_RGBA,
				GL_UNSIGNED_BYTE,
				0
			);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_BORDER_COLOR, 0);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);
			glBindTexture(GL_TEXTURE_3D, 0);

			TOT_GPU_MEM_USAGE += ((float)(terDataBufSizeScaled * 4)) / (1024.0f * 1024.0f);
		}


		glGenTextures(1, &volIdMat);
		glBindTexture(GL_TEXTURE_3D, volIdMat);
		glTexImage3D(GL_TEXTURE_3D, 0, GL_RGBA, matVolDim.getIX(), matVolDim.getIY(), matVolDim.getIZ(), 0, GL_RGBA, GL_UNSIGNED_BYTE, 0);
		glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_BORDER_COLOR, 0);
		glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
		glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
		glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);
		glBindTexture(GL_TEXTURE_3D, 0);



		glGenTextures(1, &volId);
		glGenTextures(1, &volIdLinear);
		glGenTextures(1, &volIdEmpty);
		glGenTextures(1, &volIdEmptyLinear);
		for (i = 0; i < 4; i++)
		{
			switch (i)
			{
			case 0:
				glBindTexture(GL_TEXTURE_3D, volId);
				break;
			case 1:
				glBindTexture(GL_TEXTURE_3D, volIdEmpty);
				break;
			case 2:
				glBindTexture(GL_TEXTURE_3D, volIdLinear);
				break;
			case 3:
				glBindTexture(GL_TEXTURE_3D, volIdEmptyLinear);
				break;
			}
			if (i < 2)
			{
				curFilter = GL_NEAREST;
			}
			else
			{
				curFilter = GL_LINEAR;
			}

			glTexImage3D(GL_TEXTURE_3D, 0, GL_RGBA, bufferedPageSizeInUnits, bufferedPageSizeInUnits, bufferedPageSizeInUnits, 0, GL_RGBA, GL_UNSIGNED_BYTE, 0);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_MIN_FILTER, curFilter);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_MAG_FILTER, curFilter);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_BORDER_COLOR, 0);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
			glTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);
			glBindTexture(GL_TEXTURE_3D, 0);
		}

		
		paramArr = new float[4096];
		voroArr = new float[27 * 4];
		matCountArr = new float[256];
		paramArrMap = new float[4096];




		showMap = true;



		lastImageBuffer.data = NULL;
		lastImageBuffer.size = 0;

		//lastJSONBuffer.data = NULL;
		//lastJSONBuffer.size = 0;
		
		lastJSONBufferGUI.data = NULL;
		lastJSONBufferGUI.size = 0;
		

		nullBuffer.data = new char[1];
		nullBuffer.data[0] = '\0';
		nullBuffer.size = 0;



		palWidth = 256;
		palHeight = 256;

		resultImage = new unsigned char[palWidth * palHeight * 4];

		mouseMovingSize = 100;
		mouseMovingLoc = 0;
		mouseCount = 0;
		mouseMovingStepsBack = 20;
		mouseMoving = new FIVector4[mouseMovingSize];
		
		#ifdef USE_POCO
			myWS = _myWS;
		#endif
		

		

		isBare = true;




		defaultWinW = _defaultWinW / _scaleFactor;
		defaultWinH = _defaultWinH / _scaleFactor;
		scaleFactor = _scaleFactor;
		aspectRatio = ((float)_defaultWinW)/((float)_defaultWinH);
		
		guiWinW = _defaultWinW / UI_SCALE_FACTOR;
		guiWinH = _defaultWinH / UI_SCALE_FACTOR;

		origWinW = _defaultWinW;
		origWinH = _defaultWinH;

		curBrushRad = 4.0f;
		mouseState = E_MOUSE_STATE_MOVE;








		wsBufferInvalid = true;

		bufferDim.setIXY(defaultWinW, defaultWinH);
		bufferDimTarg.setIXY(defaultWinW, defaultWinH);
		
		bufferDimHalf.setIXY(defaultWinW / 2, defaultWinH / 2);
		bufferModDim.copyIntMult(&bufferDim,1);

		myTimer.start();
		//fpsTimer.start();


		activeObject = E_OBJ_CAMERA;

		extraRad = 0;
		lastTime = 0.0;







		mbDown = false;
		lbDown = false;
		rbDown = false;
		abDown = false;



		isFullScreen = false;
		shadersAreLoaded = 0;
		readyToRecompile = 0;

		programState = E_PS_IN_GAME;


		for (i = 0; i < E_OBJ_LENGTH; i++)
		{
			dynObjects.push_back(new DynObject());
		}

		dynObjects[E_OBJ_CAMERA]->init(0, 0, worldSizeInPixels.getIZ() / 2, 0, 0, 0, false, E_MT_NONE, NULL, 4.0f );

		for (i = E_OBJ_LIGHT0; i < E_OBJ_LENGTH; i++)
		{

			j = i - E_OBJ_LIGHT0;

			switch (j)
			{
			case 0:
				ccr = 255;
				ccg = 255;
				ccb = 255;
				break;

			case 1:
				ccr = 255;
				ccg = 0;
				ccb = 0;

				break;

			case 2:
				ccr = 255;
				ccg = 128;
				ccb = 0;

				break;

			case 3:
				ccr = 0;
				ccg = 255;
				ccb = 0;

				break;

			case 4:
				ccr = 0;
				ccg = 128;
				ccb = 255;

				break;
			case 5:
				ccr = 128;
				ccg = 0;
				ccb = 255;

				break;
			}

			if (i == E_OBJ_LIGHT0) {
				tempf = 4096.0f*pixelsPerCell;
			}
			else {
				tempf = 16.0f*pixelsPerCell;
			}

			dynObjects[i]->init(
				-2048 + i * 256,
				-2048 + i * 256,
				1024/2,
				ccr, ccg, ccb,
				true,
				E_MT_RELATIVE,
				&(dynObjects[E_OBJ_CAMERA]->pos),
				64.0f,
				tempf
			);



		}
		
		dynObjects[E_OBJ_LIGHT0]->moveType = E_MT_TRACKBALL;
		
		
		dynObjects[E_OBJ_LIMBTARG0]->init(
			-2048 + 3 * 256,
			-2048 + 3 * 256,
			1024/2,
			255, 0, 0,
			true,
			E_MT_TRACKBALL,
			&(dynObjects[E_OBJ_CAMERA]->pos),
			64.0f,
			16.0f*pixelsPerCell
		);
		
		//dynObjects[E_OBJ_FOG]->init(-1024*2, -1024*2, -1024/2,   0, 0, 255,     true, E_MT_RELATIVE, &(dynObjects[E_OBJ_CAMERA]->pos), 64.0f );
		//dynObjects[E_OBJ_CUTAWAY]->init(4096*4 - 256, 4096*4 - 256 + 2048, 4096*4,   0, 255, 0,     true, E_MT_RELATIVE, &(dynObjects[E_OBJ_CAMERA]->pos), 64.0f );
		//dynObjects[E_OBJ_HUMAN]->init(2048, 2048, -1024,   0, 255, 255,     true, E_MT_TRACKBALL, &(dynObjects[E_OBJ_CAMERA]->pos), 64.0f );

		// dynObjects[E_OBJ_P0]->init(512-256,1024-256,2048,   128,0,0,    true, true, &(dynObjects[E_OBJ_CAMERA]->pos), 64.0f );
		// dynObjects[E_OBJ_P1]->init(512,1024,2048,      255,0,0,  true, true, &(dynObjects[E_OBJ_CAMERA]->pos), 64.0f );
		// dynObjects[E_OBJ_P2]->init(1024,512,2048,      0,255,255,  true, true, &(dynObjects[E_OBJ_CAMERA]->pos), 64.0f );



		mouseX = 0.0f;
		mouseY = 0.0f;
		mouseXUp = 0.0f;
		mouseYUp = 0.0f;






		//// GL WIDGET START ////

		frameCount = 0;
		forceGetPD = false;
		mapInvalid = true;
		notQuit = true;
		timerNotSet = true;
		screenWidth = defaultWinW;
		screenHeight = defaultWinH;
		mouseLeftDown = mouseRightDown = false;
		mouseX = mouseY = 0;



		
		glDepthFunc(GL_LESS);
		
		
		glDisable(GL_CULL_FACE);
		//glCullFace(GL_BACK);

		
		glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
		glEnable(GL_TEXTURE_2D);
		glDisable(GL_DEPTH_TEST);
		glDisable(GL_LIGHTING);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		glDisable(GL_BLEND);
		
		
		fsqDL = glGenLists(1);
		glNewList(fsqDL, GL_COMPILE);
		drawFSQuadOffset(0.0f, 0.0f, 1.0f);
		glEndList();
		
		

		shaderStrings.push_back("PointShader");
		shaderStrings.push_back("GUIShader");
		shaderStrings.push_back("RoadShader");
		shaderStrings.push_back("SkeletonShader");
		shaderStrings.push_back("DilateShader");
		shaderStrings.push_back("TerrainMix");
		shaderStrings.push_back("Simplex2D");
		shaderStrings.push_back("TopoShader");
		shaderStrings.push_back("WaveHeightShader");
		shaderStrings.push_back("WaterShader");
		shaderStrings.push_back("WaterShaderCombine");
		shaderStrings.push_back("CopyShader");
		shaderStrings.push_back("CopyShader2");
		shaderStrings.push_back("NoiseShader");
		shaderStrings.push_back("MapBorderShader");
		//shaderStrings.push_back("WorldSpaceShader");
		shaderStrings.push_back("BlitPointShader");
		shaderStrings.push_back("BillboardShader");
		
		shaderStrings.push_back("PreLightingShader");
		shaderStrings.push_back("HDRShader");
		shaderStrings.push_back("PostLightingShader");
		shaderStrings.push_back("BlurShader");
		shaderStrings.push_back("DownScaleShader");
		shaderStrings.push_back("RadiosityShader");
		shaderStrings.push_back("RadiosityCombineShader");
		shaderStrings.push_back("FogShader");
		shaderStrings.push_back("GeomShader");
		shaderStrings.push_back("CombineShader");
		shaderStrings.push_back("GenerateVolume");
		shaderStrings.push_back("GenerateVolumeEnt");
		shaderStrings.push_back("RenderVolume");

		std::sort(shaderStrings.begin(), shaderStrings.end(), compareStruct);
		stringBuf.reserve(shaderStrings.size()*256);


		shaderTextureIds.push_back("Texture0");
		shaderTextureIds.push_back("Texture1");
		shaderTextureIds.push_back("Texture2");
		shaderTextureIds.push_back("Texture3");
		shaderTextureIds.push_back("Texture4");
		shaderTextureIds.push_back("Texture5");
		shaderTextureIds.push_back("Texture6");
		shaderTextureIds.push_back("Texture7");
		shaderTextureIds.push_back("Texture8");
		shaderTextureIds.push_back("Texture9");
		shaderTextureIds.push_back("Texture10");
		shaderTextureIds.push_back("Texture11");
		shaderTextureIds.push_back("Texture12");
		shaderTextureIds.push_back("Texture13");
		shaderTextureIds.push_back("Texture14");
		shaderTextureIds.push_back("Texture15");

		//setupLookups();

		for (i = 0; i < shaderStrings.size(); i++)
		{
			shaderMap.insert(  pair<string, Shader*>(shaderStrings[i], new Shader(this))  );
		}
		doShaderRefresh(false);
		
		int faceDim = 256;
		
		
		/*
		void init(
			int _numBufs,
			int _width,
			int _height,
			int _bytesPerChannel,
			bool _hasDepth,
			int filterEnum = GL_NEAREST,
			int clampEnum = GL_CLAMP_TO_EDGE,
			bool isMultisample = false
		) {
		*/
		
		for (i = 0; i < MAX_VG_FBOS; i++) {
			vgFBOArr[i].init(
				1,
				volGenFBOX,
				volGenFBOX * volGenFBOX,
				1,
				false
			);
		}
		
		for (i = 0; i < MAX_VGT_FBOS; i++) {
			vgtFBOArr[i].init(
				2,
				volGenSuperRes,
				volGenSuperRes * volGenSuperRes,
				1,
				false
			);
		}
		
		
		
		
		/////////////////////////
		/////////////////////////
		

		lastx = 0;
		lasty = 0;
		isMoving = false;
		updateMatFlag = false;
		matVolLock = false;
		perspectiveOn = false;

		mainCamera = new GameCamera();
		mainCamera->init();

		for (i = 0; i < MAX_KEYS; i++) {
			keysPressed[i] = false;
			keyDownTimes[i] = 0.0;
			//keyUpTimes[i] = 0.0;
		}

		keyMap[KEYMAP_UP] = 'a';
		keyMap[KEYMAP_DOWN] = 'z';
		keyMap[KEYMAP_FORWARD] = 'e';
		keyMap[KEYMAP_BACKWARD] = 'd';
		keyMap[KEYMAP_LEFT] = 's';
		keyMap[KEYMAP_RIGHT] = 'f';
		
		/////////////////////////
		/////////////////////////
		
		
		
		
		
		/* (
				int _numBufs,
				int _width,
				int _height,
				int _bytesPerChannel,
				bool _hasDepth,
				int filterEnum = GL_NEAREST,
				int clampEnum = GL_CLAMP_TO_EDGE,
				bool isMultisample = false
		)*/
		
		
		
			
		//TODO: get rid of these
		//GL_LINEAR
		//fboMap["worldSpaceFBO"].init(4, bufferDim.getIX(), bufferDim.getIY(), 4, false, GL_NEAREST);
		//fboMap["wavesWorldSpaceFBO"].init(1, bufferDim.getIX(), bufferDim.getIY(), 4, false, GL_NEAREST);
		
		//fboMap["worldSpaceBlurFBO0"].init(1, bufferDim.getIX()/2, bufferDim.getIY()/2, 4, false, GL_LINEAR);
		//fboMap["worldSpaceBlurFBO1"].init(1, bufferDim.getIX()/2, bufferDim.getIY()/2, 4, false, GL_LINEAR);
		
		fboMap["frontFaceFBO"].init(1, faceDim, faceDim, 4, false, GL_NEAREST);
		fboMap["backFaceFBO"].init(1, faceDim, faceDim, 4, false, GL_NEAREST);
		fboMap["frontFaceMapFBO"].init(1, bufferDim.getIX(), bufferDim.getIY(), 4, false, GL_NEAREST);
		fboMap["backFaceMapFBO"].init(1, bufferDim.getIX(), bufferDim.getIY(), 4, false, GL_NEAREST);
		//fboMap["palFBO"].init(1, palWidth, palHeight, 1, false, GL_LINEAR);
		
		bool fboHasDepth = true;
		int numChannels = 4;
		int numMaps = 2;
		
		
		//fboMap["prelightFBO0"].init(1, bufferDimTarg.getIX()/4, bufferDimTarg.getIY()/4, 1, false, GL_LINEAR);
		//fboMap["prelightFBO1"].init(1, bufferDimTarg.getIX()/4, bufferDimTarg.getIY()/4, 1, false, GL_LINEAR);
		
		fboMap["prelightFBO"].init(2, bufferDimTarg.getIX(), bufferDimTarg.getIY(), 1, false, GL_LINEAR);
		
		
		fboMap["pagesTargFBO"].init(numMaps, bufferDimTarg.getIX(), bufferDimTarg.getIY(), numChannels, fboHasDepth);
		fboMap["waterTargFBO"].init(numMaps, bufferDimTarg.getIX(), bufferDimTarg.getIY(), numChannels, fboHasDepth);
		
		if (FILL_POINTS) {
			fboMap["pages2TargFBO"].init(numMaps, bufferDimTarg.getIX(), bufferDimTarg.getIY(), numChannels, fboHasDepth);
			fboMap["water2TargFBO"].init(numMaps, bufferDimTarg.getIX(), bufferDimTarg.getIY(), numChannels, fboHasDepth);
			
		}
		//fboMap["pages3TargFBO"].init(numMaps, bufferDimTarg.getIX(), bufferDimTarg.getIY(), numChannels, fboHasDepth);
		//fboMap["water3TargFBO"].init(numMaps, bufferDimTarg.getIX(), bufferDimTarg.getIY(), numChannels, fboHasDepth);
		fboMap["geomTargFBO"].init(numMaps, bufferDimTarg.getIX(), bufferDimTarg.getIY(), numChannels, true);
		fboMap["combineWithWaterTargFBO"].init(numMaps, bufferDimTarg.getIX(), bufferDimTarg.getIY(), numChannels, fboHasDepth);
		
		fboMap["noiseFBO"].init(1, bufferDim.getIX(), bufferDim.getIY(), 1, false, GL_NEAREST, GL_REPEAT);
		//fboMap["guiFBO"].init(1, guiWinW, guiWinH, 1, false, GL_LINEAR);
		fboMap["resultFBO0"].init(1, bufferDim.getIX(), bufferDim.getIY(), 1, false, GL_NEAREST);
		fboMap["resultFBO1"].init(1, bufferDim.getIX(), bufferDim.getIY(), 1, false, GL_NEAREST);
		//fboMap["volGenFBO0"].init(1, volGenFBOX, volGenFBOX * volGenFBOX, 1, false);
		//fboMap["volGenFBO1"].init(1, volGenFBOX, volGenFBOX * volGenFBOX, 1, false);
		fboMap["waveFBO"].init(1, bufferDim.getIX()/2, bufferDim.getIY()/2, 1, false, GL_LINEAR, GL_MIRRORED_REPEAT);
		fboMap["swapFBOLin0"].init(1, bufferDim.getIX(), bufferDim.getIY(), 1, false, GL_LINEAR);
		fboMap["swapFBOLin1"].init(1, bufferDim.getIX(), bufferDim.getIY(), 1, false, GL_LINEAR);
		fboMap["swapFBOBLin0"].init(1, bufferDim.getIX() / bufferDiv, bufferDim.getIY() / bufferDiv, 1, false, GL_LINEAR);
		fboMap["swapFBOBLin1"].init(1, bufferDim.getIX() / bufferDiv, bufferDim.getIY() / bufferDiv, 1, false, GL_LINEAR);
		fboMap["swapFBOLinHalf0"].init(1, bufferDim.getIX() / bufferDiv, bufferDim.getIY() / bufferDiv, 1, false, GL_LINEAR);
		fboMap["swapFBOLinHalf1"].init(1, bufferDim.getIX() / bufferDiv, bufferDim.getIY() / bufferDiv, 1, false, GL_LINEAR);
		fboMap["cityFBO"].init(1, newPitch, newPitch, 1, false, GL_NEAREST, GL_REPEAT);
		fboMap["hmFBO"].init(1, newPitch, newPitch, 1, false, GL_NEAREST, GL_REPEAT);
		fboMap["hmFBOLinear"].init(1, newPitch, newPitch, 1, false, GL_LINEAR, GL_REPEAT);
		fboMap["simplexFBO"].init(1, newPitch, newPitch, 1, false, GL_LINEAR, GL_REPEAT);
		fboMap["swapFBO0"].init(1, newPitch, newPitch, 1, false, GL_NEAREST, GL_REPEAT);
		fboMap["swapFBO1"].init(1, newPitch, newPitch, 1, false, GL_NEAREST, GL_REPEAT);



		fontWrappers[EFW_ICONS] = new FontWrapper();
		fontWrappers[EFW_ICONS]->init(this, "icons", true, 1.0f, 0.0f);
		
		fontWrappers[EFW_TEXT] = new FontWrapper();
		fontWrappers[EFW_TEXT]->init(this, "arial_regular_14", false, 1.0f);

		mainGUI = new GameGUI();
		mainGUI->init(this);


		//loadAllData();

		GamePlant::initAllPlants(this);
		for (i = 0; i < E_PT_LENGTH/2; i++) {
			gamePlants[i] = new GamePlant();
		}


		gw = new GameWorld();
		
		gpuPool = new PoolManager();
		entityPool = new PoolManager();
		//gpuPagePool = new PoolPageManager();
		//entityPagePool = new PoolPageManager();
		
		int cmMod = 1;
		
		
		gpuPool->init(this,false,false,holderResolution,holderResolution*cmMod);
		entityPool->init(this,true,false,holderResolution,holderResolution*cmMod);
		
		
		
		testHuman = new GameOrg();
		testHuman->init(this);
		//TODO: fix this for proper angle alignment to model
		//orientRotation();
		
		
		
		gw->init(this);
		gw->initMap();
		
		gameAI = new GameAI();
		gameAI->init(this);
		
		
		// gw->gameObjects[E_OBJ_CAMERA] = baseObj;
		// gw->gameObjects[E_OBJ_CAMERA].init(
		// 	E_OBJ_CAMERA,
		// 	0,
		// 	0,
		// 	pixelsPerCell,
		// 	&lastCellPos,
		// 	5,5,5
		// );
		
		
		music[EML_BIRDSONG0]->play();
		music[EML_CRICKETS0]->play();
		music[EML_OCEANWAVES0]->play();
		music[EML_UNDERWATER0]->play();
		
		loadGUI();
		loadValuesGUI();
		
		if (bakeParamsOn) {
			doShaderRefresh(true);
		}
		

		doTraceND("GW DONE");


		popTrace();



	}
	
	// void orientRotation() {
	// 	//testHuman->baseNode->orgVecs[E_OV_THETAPHIRHO].addXYZ(0.0f,0.0f,3.0f*M_PI/2.0f);
	// }
	
	int placeInStack() {
		int curId;
		int stackSize = emptyStack.size();
		if (stackSize > 0) {
			curId = emptyStack.back();
			emptyStack.pop_back();
			//compStack[curId].data = new UIComponent();
			compStack[curId].isValid = true;
			
			
			return curId;
		}
		else {
			compStack.push_back( CompStruct() );
			compStack.back().data = new UIComponent();
			compStack.back().isValid = true;
			
			
			return compStack.size() - 1;
			
		}
	}
	
	int placeInLayer(int nodeId, int layer) {
		// int curId;
		// if (emptyLayers[layer].size() > 0) {
		// 	curId = emptyLayers[layer].back();
		// 	emptyLayers[layer].pop_back();
		// 	guiLayers[layer][curId] = nodeId;
			
		// 	return curId;
		// }
		// else {
			guiLayers[layer].push_back(nodeId);	
			return guiLayers[layer].size() - 1;
			
		//}
	}
	
	
	void initAllMatrices() {
		int i;
		int j;
		int k;
		int m;
		int curOffset;
		
		for (k = 0; k < NUM_ORIENTATIONS; k++) {
			for (j = 0; j < NUM_ORIENTATIONS; j++) {
				for (i = 0; i < NUM_ORIENTATIONS; i++) {
					curOffset = (k*NUM_ORIENTATIONS*NUM_ORIENTATIONS + j*NUM_ORIENTATIONS + i)*16;
					
					for (m = 0; m < 16; m++) {
						ALL_ROT[curOffset+m] = 0.0f;
					}
					ALL_ROT[curOffset+15] = 1.0f;
					
					for (m = 0; m < 3; m++) {
						ALL_ROT[curOffset+0+m] = DIR_VECS[i][m];
						ALL_ROT[curOffset+4+m] = DIR_VECS[j][m];
						ALL_ROT[curOffset+8+m] = DIR_VECS[k][m];
					}
					
					
					
				}
			}
		}
		
	}
	
	int numberIcons(int pCurCount, int x1, int y1, int x2, int y2) {
	  int i;
	  int j;
	  int curCount = pCurCount;
	  
	  for (j = y1; j <= y2; j++) {
	    for (i = x1; i <= x2; i++) {
	      entIdToIcon[curCount] = i + j * ITEMS_PER_ROW;
	      iconToEntId[i + j * ITEMS_PER_ROW] = curCount;
	      curCount++;
	    }
	  }
	  
	  
	  return curCount;
	  
	}
	
	
	void prepSound(string soundName) {
		if (soundMap.find( soundName ) == soundMap.end()) {
			soundMap.insert( pair<string, GameSound>(soundName, GameSound()) );
			soundMap[soundName].init("..\\data\\sounds\\"+soundName+".wav");
		}
	}

	void playSoundPosAndPitch(
		string soundName,
		FIVector4* listenerPos,
		FIVector4* soundPos,
		float variance=0.0f,
		float volume=1.0f
	) {
		
		
		FIVector4 res;
		
		prepSound(soundName);
		
		res.setFXYZRef(soundPos);
		res.addXYZRef(listenerPos,-1.0f);
		
		soundMap[soundName].setPitch(
			(fGenRand()-0.5f)*2.0*variance + 1.0f
		);
		
		soundMap[soundName].setPositionAndMinDis(
			res.getFX(),
			res.getFY(),
			res.getFZ(),
			32.0f*pixelsPerCell
		);
		soundMap[soundName].play(volume*fxVolume*masterVolume);
	}

	void playSound(string soundName, float volume=1.0f) {
		prepSound(soundName);
		soundMap[soundName].play(volume);
	}

	void playSoundEvent(const char* eventName, bool suppress = false) {
		
		if (suppress) {
			return;
		}
		
		string tempString;
		float volume;
		
		if (mainGUI != NULL) {
			if (mainGUI->isReady) {
				tempString = mainGUI->jvSounds->Child(eventName)->Child("name")->string_value;
				volume = mainGUI->jvSounds->Child(eventName)->Child("vol")->number_value;
				
				if (tempString.size() > 0) {
					playSound( tempString, masterVolume*volume*guiVolume );
				}
			}
		}
		
		
	}
	
	void setCurrentActor(BaseObj* ge) {
		FIVector4 *cameraPos = &(dynObjects[E_OBJ_CAMERA]->pos);
		
		
		
		currentActor = ge;
		if (currentActor != NULL) {
			
			mainCamera->subjectDistance = currentActor->centerPointInPixels.distance(cameraPos);
		}
		
	}
	
	void updateMatVol() {
		
		
		
		matVolLock = true;
		
		JSONValue* jv = fetchJSONData("materials.js");
		JSONValue* curJV = NULL;
		JSONValue* curK = NULL;
		JSONValue* curJ = NULL;
		JSONValue* curI = NULL;
		JSONValue* curCol = NULL;
		
		int i;
		int j;
		int k;
		int m;
		int n;
		int p;
		int totN;
		
		int curInd0;
		int curInd0Prev;
		int curInd0Next;
		int curInd1;
		
		int mvInd;
		
		uint rv, gv, bv;
		
		joi_type itI;
		joi_type itJ;
		joi_type itK;
		
		float totRatio;
		float curLerp;
		float curLerpNoPower;
		float curPower;
		float curLerpWithPower;
		float curRatio;
		
		int mvx = matVolDim.getIX();
		int mvy = matVolDim.getIY();
		int mvz = matVolDim.getIZ();
		
		if (jv != NULL) {
			
			
			
			
			
			curJV = jv->Child("materials");
			
			k = 0;
			for (itK = curJV->object_value.begin(); itK != curJV->object_value.end(); itK++) {
				curK = itK->second;
				
				j = 0;
				for (itJ = curK->object_value.begin(); itJ != curK->object_value.end(); itJ++) {
					curJ = itJ->second;
					
					i = 0;
					totRatio = 0.0f;
					for (itI = curJ->object_value.begin(); itI != curJ->object_value.end(); itI++) {
						curI = itI->second;
						
						curInd0 = i+j*mvx;
						curCol = curI->Child("i0_color");
						
						
						matSlice0[curInd0].h = curCol->Child(0)->number_value;
						matSlice0[curInd0].s = curCol->Child(1)->number_value;
						matSlice0[curInd0].l = curCol->Child(2)->number_value;
						
						hsv2rgb(&(matSlice0[curInd0]));
						
						matSlice0[curInd0].power = curI->Child("i1_power")->number_value;
						matSlice0[curInd0].ratio = curI->Child("i2_ratio")->number_value;
						
						if (matSlice0[curInd0].ratio <= 0.0f) {
							matSlice0[curInd0].ratio = 1.0f/(mvx-1.0f);
						}
						
						totRatio += matSlice0[curInd0].ratio;
						
						i++;
					}
					
					
					if (i == 0) {
						
					}
					else {
						for (m = 0; m < i; m++) {
							curInd0 = m+j*mvx;
							matSlice0[curInd0].ratio = matSlice0[curInd0].ratio*(matVolDim.getFX()-1.0f)/totRatio;
						}
						
						
						totN = 0;
						for (m = 0; m < i; m++) {
							curInd0 = m+j*mvx;
							
							if (i == 1) {
								curInd0Prev = curInd0;
								curInd0Next = curInd0;
							}
							else {
								curInd0Prev = (m-1)+j*mvx;
								curInd0Next = (m+1)+j*mvx;
							}
							
							
							
							curRatio = matSlice0[curInd0].ratio;
							
							for (n = 0; (n < (curRatio+0.1f) )&&(totN < mvx); n++) {
								curLerp = ((float)n)/curRatio;
								curInd1 = totN + j*mvx;
								
								if (m == 0) {
									
									curLerpNoPower = curLerp*0.5f;
									curPower = mixf(matSlice0[curInd0].power,matSlice0[curInd0Next].power,curLerpNoPower);
									curLerpWithPower = pow(curLerpNoPower,curPower*8.0f);
									
									matSlice1[curInd1].r = mixf(matSlice0[curInd0].r,matSlice0[curInd0Next].r,curLerpWithPower);
									matSlice1[curInd1].g = mixf(matSlice0[curInd0].g,matSlice0[curInd0Next].g,curLerpWithPower);
									matSlice1[curInd1].b = mixf(matSlice0[curInd0].b,matSlice0[curInd0Next].b,curLerpWithPower);
								}
								else if (m == (i-1)) {
									curLerpNoPower = curLerp*0.5f+0.5f;
									curPower = mixf(matSlice0[curInd0Prev].power,matSlice0[curInd0].power,curLerpNoPower);
									curLerpWithPower = pow(curLerpNoPower,curPower*8.0f);
									
									matSlice1[curInd1].r = mixf(matSlice0[curInd0Prev].r,matSlice0[curInd0].r,curLerpWithPower);
									matSlice1[curInd1].g = mixf(matSlice0[curInd0Prev].g,matSlice0[curInd0].g,curLerpWithPower);
									matSlice1[curInd1].b = mixf(matSlice0[curInd0Prev].b,matSlice0[curInd0].b,curLerpWithPower);
								}
								else {
									
									
									if (curLerp < 0.5f) {
										curLerpNoPower = curLerp + 0.5f;
										curPower = mixf(matSlice0[curInd0Prev].power,matSlice0[curInd0].power,curLerpNoPower);
										curLerpWithPower = pow(curLerpNoPower,curPower*8.0f);
										
										matSlice1[curInd1].r = mixf(matSlice0[curInd0Prev].r,matSlice0[curInd0].r,curLerpWithPower);
										matSlice1[curInd1].g = mixf(matSlice0[curInd0Prev].g,matSlice0[curInd0].g,curLerpWithPower);
										matSlice1[curInd1].b = mixf(matSlice0[curInd0Prev].b,matSlice0[curInd0].b,curLerpWithPower);
									}
									else {
										curLerpNoPower = curLerp - 0.5f;
										curPower = mixf(matSlice0[curInd0].power,matSlice0[curInd0Next].power,curLerpNoPower);
										curLerpWithPower = pow(curLerpNoPower,curPower*8.0f);
										
										matSlice1[curInd1].r = mixf(matSlice0[curInd0].r,matSlice0[curInd0Next].r,curLerpWithPower);
										matSlice1[curInd1].g = mixf(matSlice0[curInd0].g,matSlice0[curInd0Next].g,curLerpWithPower);
										matSlice1[curInd1].b = mixf(matSlice0[curInd0].b,matSlice0[curInd0Next].b,curLerpWithPower);											
										
									}
									
									
									
								}
								
								
								
								totN++;
							}
							
							
						}
					}
						
					
					
					
					
					j++;
					
				}
				
				
				
				
				
				////////////////////
				
				
				
				
				
				for (p = 0; p < mvx; p++) {
					
					totN = 0;
					for (m = 0; m < j; m++) {
						curInd0 = p + m*mvx;
						
						if (j == 1) {
							curInd0Prev = curInd0;
							curInd0Next = curInd0;
						}
						else {
							curInd0Prev = p + (m-1)*mvx;
							curInd0Next = p + (m+1)*mvx;
						}
						
						
						
						if (j == 0) {
							curRatio = (float(mvy));
						}
						else {
							curRatio = (float(mvy))/(float(j));
						}
						
						
						for (n = 0; (n < (curRatio+0.1f))&&(totN < mvy); n++) {
							curLerp = ((float)n)/curRatio;
							curInd1 = p + totN*mvx;
							
							if (m == 0) {
								
								curLerpWithPower = curLerp*0.5f;
								
								matSlice2[curInd1].r = mixf(matSlice1[curInd0].r,matSlice1[curInd0Next].r,curLerpWithPower);
								matSlice2[curInd1].g = mixf(matSlice1[curInd0].g,matSlice1[curInd0Next].g,curLerpWithPower);
								matSlice2[curInd1].b = mixf(matSlice1[curInd0].b,matSlice1[curInd0Next].b,curLerpWithPower);
							}
							else if (m == (j-1)) {
								curLerpWithPower = curLerp*0.5f+0.5f;
								
								matSlice2[curInd1].r = mixf(matSlice1[curInd0Prev].r,matSlice1[curInd0].r,curLerpWithPower);
								matSlice2[curInd1].g = mixf(matSlice1[curInd0Prev].g,matSlice1[curInd0].g,curLerpWithPower);
								matSlice2[curInd1].b = mixf(matSlice1[curInd0Prev].b,matSlice1[curInd0].b,curLerpWithPower);
							}
							else {
								
								
								if (curLerp < 0.5f) {
									curLerpWithPower = curLerp + 0.5f;
									
									matSlice2[curInd1].r = mixf(matSlice1[curInd0Prev].r,matSlice1[curInd0].r,curLerpWithPower);
									matSlice2[curInd1].g = mixf(matSlice1[curInd0Prev].g,matSlice1[curInd0].g,curLerpWithPower);
									matSlice2[curInd1].b = mixf(matSlice1[curInd0Prev].b,matSlice1[curInd0].b,curLerpWithPower);
								}
								else {
									curLerpWithPower = curLerp - 0.5f;
									
									matSlice2[curInd1].r = mixf(matSlice1[curInd0].r,matSlice1[curInd0Next].r,curLerpWithPower);
									matSlice2[curInd1].g = mixf(matSlice1[curInd0].g,matSlice1[curInd0Next].g,curLerpWithPower);
									matSlice2[curInd1].b = mixf(matSlice1[curInd0].b,matSlice1[curInd0Next].b,curLerpWithPower);											
									
								}
								
								
								
							}
							
							
							
							mvInd = curInd1 + k*mvx*mvy;
							rv = matSlice2[curInd1].r*255.0f;
							gv = matSlice2[curInd1].g*255.0f;
							bv = matSlice2[curInd1].b*255.0f;
							matVol[mvInd] = (0 << 24) | (bv << 16) | (gv << 8) | (rv);
							
							
							
							
							totN++;
						}
						
						
					}
				}
				
				
				
				
				////////////////////
				
				
				
				
				
				
				
				
				
				
				k++;
			}
			
			
			
			glBindTexture(GL_TEXTURE_3D, 0);
			glBindTexture(GL_TEXTURE_3D, volIdMat);
			glTexSubImage3D(
				GL_TEXTURE_3D,
				0,

				0,
				0,
				0,

				mvx,
				mvy,
				mvz,

				GL_RGBA,
				GL_UNSIGNED_BYTE,

				matVol
			);
			glBindTexture(GL_TEXTURE_3D, 0);
			
			
			
		}
		
		
		
		
		 
		
		
		
		matVolLock = false;	
		
	}
	
	int getRandomContId() {
		return iGenRand(360,419);
	}
	int getRandomNPCId() {
		return (iGenRand(1432,1671)/4)*4;
	}
	int getRandomMonsterId() {
		return (iGenRand(1240,1431)/2)*2;
	}
	int getRandomObjId() {
		return iGenRand(0,907);
		
	}
	
	void fillWithRandomObjects(int parentUID, int gen) {
		
		int i;
		int maxObj = iGenRand(2,16);
		BaseObj* tmpObj = NULL;
		
		int curId;
		
		
		for (i = 0; i < maxObj; i++) {
			gw->gameObjects[gameObjCounter] = baseObj;
			tmpObj = &(gw->gameObjects[gameObjCounter]);
			
			curId = getRandomObjId();
			
			
			// if (
			// 	(curId%5 == 0) &&
			// 	(gen <= 1)
			// ) {
				
			// 	curId = getRandomContId();
			// }
			
			tmpObj->init(
				gameObjCounter,
				parentUID,
				curId, 
				pixelsPerCell,
				&lastCellPos,
				// iGenRand(1,4),
				// iGenRand(1,4),
				// iGenRand(1,4)
				2,
				2,
				2
			);
			
			gw->gameObjects[parentUID].children.push_back(gameObjCounter);
			
			gameObjCounter++;
			
			if (isContainer[curId] && (gen < 1)) {
				fillWithRandomObjects(gameObjCounter-1, gen + 1);
			}
			
		}
		
		
	}
	
	
	void performDrag() {
		
		int i;
		int bestPos;
		bool moveCont = false;
		bool draggedIntoWorldObj = false;
		BaseObj* sourceObj = NULL;
		BaseObj* destObj = NULL;
		
		vector<BaseObjType>* myVec;
		
		
		
		
		cout << "from " << dragStrings[draggingFromType] << " to " << dragStrings[draggingToType] << "\n";
		
		switch (draggingFromType) {
			case E_DT_NOTHING:
				
			break;
			case E_DT_WORLD_OBJECT:
			
				sourceObj = &(gw->gameObjects[draggingFromInd]);
			
				switch (draggingToType) {
					case E_DT_NOTHING:
						
						lastCellPos.copyFrom(&(worldMarker));
						lastCellPos.intDivXYZ(pixelsPerCell);
						lastCellPos.addXYZ(0,0,5);
						sourceObj->positionInCells.copyFrom(&lastCellPos);
						sourceObj->updateBounds();
						
					break;
					case E_DT_WORLD_OBJECT:
					case E_DT_INV_OBJECT:
					case E_DT_INV_OBJECT_PARENT:
						destObj = &(gw->gameObjects[draggingToInd]);
						moveCont = true;
					break;
				}
			break;
			
			case E_DT_INV_OBJECT:
			
				sourceObj = &(gw->gameObjects[draggingFromInd]);
			
				switch (draggingToType) {
					case E_DT_NOTHING:
						
						
						lastCellPos.copyFrom(&(worldMarker));
						lastCellPos.intDivXYZ(pixelsPerCell);
						lastCellPos.addXYZ(0,0,5);
						sourceObj->positionInCells.copyFrom(&lastCellPos);
						sourceObj->updateBounds();
						
						gw->gameObjects[sourceObj->parentUID].removeChild(sourceObj->uid);
						gw->visObjects.push_back(sourceObj->uid);
						sourceObj->parentUID = 0;
						
						
					break;
					case E_DT_WORLD_OBJECT:
					case E_DT_INV_OBJECT:
					case E_DT_INV_OBJECT_PARENT:
						destObj = &(gw->gameObjects[draggingToInd]);
						moveCont = true;
					break;
				}
			break;
			case E_DT_INV_OBJECT_PARENT:
				
			break;
		}
		
		
		if (moveCont) {
			
			if (isContainer[destObj->objectType]) {	
				if (draggingFromInd == draggingToInd) {
					goto PERFORM_DRAG_END;
				}
			}
			else {
				if (draggingFromInd == destObj->parentUID) {
					goto PERFORM_DRAG_END;
				}
			}
			
			
			gw->gameObjects[sourceObj->parentUID].removeChild(sourceObj->uid);
			
			if (isContainer[destObj->objectType]) {
				destObj->children.push_back(sourceObj->uid);
				sourceObj->parentUID = destObj->uid;
				draggedIntoWorldObj = true;
			}
			else {
				
				myVec = &(gw->gameObjects[destObj->parentUID].children);
				
				bestPos = 0;
				for (i = 0; i < myVec->size(); i++) {
					if ((*myVec)[i] == destObj->uid) {
						bestPos = i+1;
					}
				}
				myVec->insert(
					myVec->begin()+bestPos,
					sourceObj->uid
				);
				
				sourceObj->parentUID = destObj->parentUID;
			}
			
			if (draggingFromType == E_DT_WORLD_OBJECT) {
				gw->removeVisObject(sourceObj->uid);
			}
			
		}
		
		
		
		
		
		if (
			(draggingFromType == E_DT_INV_OBJECT) ||
			(draggingToType == E_DT_INV_OBJECT) ||
			(draggingToType == E_DT_INV_OBJECT_PARENT) ||
			draggedIntoWorldObj
		) {
			refreshContainers(false);
		}
		
		
PERFORM_DRAG_END:		
		markerFound = false;
		isDraggingObject = false;
	}
	
	
	void placeNewEnt(int et) {
		
		
		BaseObj* tmpObj = NULL;
		
		int newType = 0;
		
		int xv = 2;
		int yv = 2;
		int zv = 3;
		
		int mf = 0;
		
		switch (et) {
			case E_ENTTYPE_OBJ:
				newType = getRandomObjId();
				zv = 2;
			break;
			case E_ENTTYPE_MONSTER:
				newType = getRandomMonsterId();
				mf = 2;
			break;
			case E_ENTTYPE_NPC:
				newType = getRandomNPCId();
				mf = 4;
			break;
		}
		
		
		gw->gameObjects[gameObjCounter] = baseObj;
		tmpObj = &(gw->gameObjects[gameObjCounter]);
		tmpObj->init(
			gameObjCounter,
			0,
			newType,
			pixelsPerCell,
			&lastCellPos,
			xv,yv,zv
		);
		
		
		tmpObj->maxFrames = mf;
		gw->visObjects.push_back(gameObjCounter);
		gameObjCounter++;
		
		
		if (isContainer[newType]) {
			fillWithRandomObjects(gameObjCounter-1, 0);
		}
		
		
	}



	void dispatchEvent(
		int button,
		int state,
		float x,
		float y,
		UIComponent* comp,
		bool automated = false,
		bool preventRefresh = false
	) {
		
		UIComponent* tempComp;
		
		FIVector4 *cameraPos = &(dynObjects[E_OBJ_CAMERA]->pos);
		
		changingGenVal = false;
		
		BaseObj* tmpObj = NULL;
		GameOrgNode* tmpNode = NULL;
		
		bool hitPicker = false;
		bool wasDoubleClick = false;
		
		float wheelDelta = 0.0f;
		
		double tempTime = myTimer.getElapsedTimeInMilliSec();
		
		int i;
		int j;
		
		int cbDataCount;
		JSONValue* cbData = NULL;
		
		bool doSPUpdate = false;
		bool mouseUpEvent = false;
		bool mouseDownEvent = false;
		
		float curValue = comp->getValue();
		float curValueY = comp->getValueY();
		
		draggingMap = false;
		
		bool noTravel = false;
		bool isInteractiveComp = false;
		bool suppressSound = false;
		
		
		
		switch (comp->guiClass) {
			case E_GT_SLIDER:
			case E_GT_BUTTON:
			case E_GT_RADIO:
			case E_GT_CHECK:
			case E_GT_DRAGPAD:
					isInteractiveComp = true;
			break;
			default:
				if (comp->jvNodeNoTemplate->HasChild("interactive")) {
					isInteractiveComp = true;
				}
			break;
		}
		
		suppressSound = automated||(!isInteractiveComp);
		
		
		switch(button) {
			case GLUT_NO_BUTTON:
			
				
				
				switch(state) {
					case GLUT_OVER:
						playSoundEvent("mouseOver",suppressSound);
					break;
					case GLUT_OUT:
						playSoundEvent("mouseOut",suppressSound);
					break;
					case GLUT_CHANGING:
						if (comp->guiClass == E_GT_DRAGPAD) {
							
							if (comp->uid.compare("map.mapHolder") == 0) {
								cameraPos->setFXYZRef(&baseCameraPos);
								
								cameraPos->addXYZ(
									-(x - comp->dragStart.x)*worldSizeInPixels.getFX()/(cameraZoom*comp->resultDimInPixels.x),
									-(y - comp->dragStart.y)*worldSizeInPixels.getFY()/(cameraZoom*comp->resultDimInPixels.y),
									0.0f
								);
								
								
								
								updateCamVals();
								
								//doTraceVecND("cameraPos ", cameraPos);
								
								
								draggingMap = true;
							}
							
						}
						else {
							doSPUpdate = true;
						}
						
					break;
				}
				
			break;
			case GLUT_LEFT_BUTTON:
			
			
				if (state == GLUT_DOWN) {
					playSoundEvent("mouseDown",suppressSound);
					
					if (comp->uid.compare("map.mapHolder") == 0) {
						baseCameraPos.setFXYZRef(cameraPos);
					}
					
					mouseDownEvent = true;
					mdTime = myTimer.getElapsedTimeInMilliSec();
				}
				else {
					playSoundEvent("mouseUp",suppressSound);
					
					if (comp->guiClass == E_GT_DRAGPAD) {
						
					}
					else {
						doSPUpdate = true;
						mouseUpEvent = true;
					}
					
					
				}
			break;
			
			case 3: // wheel up
				wheelDelta = 1.0f / 20.0f;
				break;

			case 4: // wheel down
				wheelDelta = -1.0f / 20.0f;
				break;
			
			
		}
		
		if (mouseUpEvent) {
			if (!automated) {
				noTravel = mouseEnd.distance(&mouseStart) < MAX_TRAVEL_DIS;
				
				if (lastNodeId == comp->nodeId) {
					
					if ( (tempTime-clickTime) < 500 ) {
						wasDoubleClick = true;
					}
					
				}
				
				clickTime = tempTime;
				lastNodeId = comp->nodeId;
			}
		}
		
		
		
		if (comp->uid.compare("map.mapHolder") == 0) {
			zoomDelta += wheelDelta;
			targetZoom = pow(2.0, zoomDelta);
		}
		
		if (comp->uid.compare("#contItemParent") == 0) {
			if (comp->jvNodeNoTemplate != NULL) {
				if (comp->jvNodeNoTemplate->HasChild("objectId")) {
					if (mouseUpEvent) {
						if (isDraggingObject) {
							if (noTravel) {
								
							}
							else {
								draggingToType = E_DT_INV_OBJECT_PARENT;
								draggingToInd = comp->jvNodeNoTemplate->Child("objectId")->number_value;
								performDrag();
							}
						}
					}
				}
			}
			
			goto DISPATCH_EVENT_END;
		}
		
		if (comp->uid.compare("#contItem") == 0) {
			
			
			
			if (comp->jvNodeNoTemplate != NULL) {
				
				
				if (comp->jvNodeNoTemplate->HasChild("objectId")) {
					
					// !!
					
					if (mouseUpEvent) {
						
						if (wasDoubleClick) {
							i = comp->jvNodeNoTemplate->Child("objectId")->number_value;
							if (isContainer[gw->gameObjects[i].objectType]) {
								toggleCont(i, false);
							}
							else {
								gw->gameObjects[i].isEquipped = !(gw->gameObjects[i].isEquipped);
								if (gw->gameObjects[i].isEquipped) {
									playSoundEvent("showGUI");
								}
								else {
									playSoundEvent("hideGUI");
								}
								refreshContainers(false);
							}
							
							
						}
						else if (isDraggingObject) {
							if (noTravel) {
								
							}
							else {
								draggingToType = E_DT_INV_OBJECT;
								draggingToInd = comp->jvNodeNoTemplate->Child("objectId")->number_value;
								performDrag();
							}
							
						}
					}
					else if (mouseDownEvent) {
						
						isDraggingObject = true;
						draggingFromType = E_DT_INV_OBJECT;
						draggingFromInd = comp->jvNodeNoTemplate->Child("objectId")->number_value;
					}
				}
			}
			
			goto DISPATCH_EVENT_END;
			
		}
		
		
		
		if (mouseUpEvent) {
			
			
			if (comp->uid.compare("placeEntity.npc") == 0) {
				placeNewEnt(E_ENTTYPE_NPC);
			}
			if (comp->uid.compare("placeEntity.monster") == 0) {
				placeNewEnt(E_ENTTYPE_MONSTER);
			}
			else if (comp->uid.compare("placeEntity.object") == 0) {
				placeNewEnt(E_ENTTYPE_OBJ);
			}
			else if (comp->uid.compare("charEdit.savePose") == 0) {
				saveOrg();
			}
			else if (comp->uid.compare("charEdit.loadPose") == 0) {
				loadOrg();
			}
			else if (comp->uid.compare("$charEdit.orgOn") == 0) {
				orgOn = curValue != 0.0f;
			}
			else if (comp->uid.compare("$charEdit.pathfindingOn") == 0) {
				pathfindingOn = curValue != 0.0f;
			}
			else if (comp->uid.compare("$charEdit.editPose") == 0) {
				editPose = curValue != 0.0f;
			}
			else if (comp->uid.compare("$charEdit.mirrorOn") == 0) {
				mirrorOn = curValue != 0.0f;
			}
			else if (comp->uid.compare("$charEdit.applyToChildren") == 0) {
				applyToChildren = curValue != 0.0f;
			}
			else if (comp->uid.compare("fieldMenu.ok") == 0) {
				endFieldInput(true);
			}
			else if (comp->uid.compare("fieldMenu.cancel") == 0) {
				endFieldInput(false);
			}
			else if (comp->uid.compare("#materialPicker") == 0) {
				if (selectedNode != NULL) {
					selectedNode->orgVecs[E_OV_MATPARAMS].setFX(comp->index);
					tmpNode = getMirroredNode(selectedNode);
					if (tmpNode != NULL) {
						tmpNode->orgVecs[E_OV_MATPARAMS].setFX(comp->index);
					}
					makeDirty();
				}
			}
			else if (comp->uid.compare("#contMenu.close") == 0) {
				
				i = comp->getParent()->getChild(1)->jvNodeNoTemplate->Child("objectId")->number_value;
				
				cout << "ival " << i << "\n";
				
				gw->gameObjects[i].isOpen = false;
				refreshContainers(false);
				
			}
			
			
			
			
			if (comp->getFloatingChildCount() == 0) {
				ddMenu->visible = false;
				markerFound = false;
			}
			
		}
		
		
		
		
		
				
		if (comp->uid.compare("$options.sound.masterVolume") == 0) {
			masterVolume = curValue*0.2; // ;
		}
		else if (comp->uid.compare("$options.sound.ambientVolume") == 0) {
			ambientVolume = curValue;
		}
		else if (comp->uid.compare("$options.sound.guiVolume") == 0) {
			guiVolume = curValue;
		}
		else if (comp->uid.compare("$options.sound.musicVolume") == 0) {
			musicVolume = curValue;
		}
		else if (comp->uid.compare("$options.sound.fxVolume") == 0) {
			fxVolume = curValue;
		}
		else if (comp->uid.compare("$options.graphics.clipDist") == 0) {
			clipDist[1] = curValue*65536.0f;
		}
		else if (comp->uid.compare("$options.graphics.fov") == 0) {
			FOV = mixf(25.0f,120.0f,curValue);
			focalLength = 1.0f / tan(FOV / 2.0f);
			
		}
		
		
		if (
			(button == GLUT_LEFT_BUTTON) ||
			(state == GLUT_CHANGING)	
		) {
			if (comp->uid.compare("#materialVal") == 0) {
				updateMatFlag = true;
			}
			
		}
		
		
		
		
		
		
		
		
		
		if (comp->jvNodeNoTemplate != NULL) {
			if (comp->jvNodeNoTemplate->HasChild("callback")) {
				curCallback = comp->jvNodeNoTemplate->Child("callback")->string_value;
				
				if (comp->jvNodeNoTemplate->HasChild("callbackData")) {
					
					cbData = comp->jvNodeNoTemplate->Child("callbackData");
				
					// cbDataCount = cbData->CountChildren();
					// for (i = 0; i < cbDataCount; i++) {
					// 	cbDataStrings[i] = cbData->Child(i)->string_value;
					// }
				
				}
				
				if (doSPUpdate) {
					if (curCallback.compare("updateShaderParam") == 0) {
						
						if (cbData != NULL) {
							
							
							cbDataStrings[0] = cbData->Child("shaderName")->string_value;
							cbDataStrings[1] = cbData->Child("paramName")->string_value;
							
							
							
							shaderMap[cbDataStrings[0]]->paramMap[cbDataStrings[1]] = curValue;
							
							if (
								(cbDataStrings[0].compare("GenerateVolume") == 0)	||
								(cbDataStrings[0].compare("RenderVolume") == 0) ||
								(cbDataStrings[0].compare("RenderVolumeCubeMap") == 0)
							) {
								
								if (preventRefresh) {
									
								}
								else {
									if (mouseUpEvent) {
										forceRestart = true;
										readyForRestart = true;
									}
									else {
										changingGenVal = true;
										if (mouseMoved) {
											
											readyForRestart = true;
										}
									}
								}
								
								
								
							}
							
							
						}
					}
				}
				
				
			}
		}
		
DISPATCH_EVENT_END:
		
		if (mouseMoved) {
			mouseMoved = false;
		}
		if (mouseUpEvent) {
			isDraggingObject = false;
		}
	}

	StyleSheet* getNewStyleSheet(string ssName) {
		styleSheetMap[ssName].init();
		return &(styleSheetMap[ssName]);
	}

	void initStyleSheet() {
		
		int i;
		
		StyleSheet* mainSS = getNewStyleSheet("defaultSS");
		StyleSheetState* curState = &(mainSS->compStates[E_COMP_UP]);
		
		
		
		curState->setVal(E_SS_BGCOL0_R, 0.2f, 0.15f, 0.1f, 1.0f);
		curState->setVal(E_SS_BGCOL1_R, 0.1f, 0.075f, 0.05f, 0.5f);
		curState->setVal(E_SS_FGCOL0_R, 0.0f, 0.0f, 0.0f, 0.0f);
		curState->setVal(E_SS_FGCOL1_R, 0.0f, 0.0f, 0.0f, 0.0f);
		curState->setVal(E_SS_TGCOL0_R, 1.0f, 0.75f, 0.0f, 1.0f);
		curState->setVal(E_SS_TGCOL1_R, 1.0f, 0.25f, 0.0f, 0.5f);
		curState->setVal(E_SS_BGCOLTEXT0_R, 0.0f, 0.0f, 0.0f, 0.0f);
		curState->setVal(E_SS_BGCOLTEXT1_R, 0.0f, 0.0f, 0.0f, 0.0f);
		curState->setVal(E_SS_FGCOLTEXT0_R, 1.0f, 1.0f, 1.0f, 1.0f);
		curState->setVal(E_SS_FGCOLTEXT1_R, 1.0f, 0.8f, 0.7f, 1.0f);
		curState->setVal(E_SS_BDCOL_R, 1.0f, 1.0f, 1.0f, 0.5f);

		curState->props[E_SS_PADDING] = 2.0f;
		curState->props[E_SS_BORDER] = 1.0f;
		curState->props[E_SS_MARGIN] = 2.0f;
		curState->props[E_SS_CORNERRAD] = 4.0f;
		curState->props[E_SS_ROUNDNESS] = 1.0f;

		mainSS->compStates[E_COMP_OVER].copyFrom(& (mainSS->compStates[E_COMP_UP]) );
		mainSS->compStates[E_COMP_DOWN].copyFrom(& (mainSS->compStates[E_COMP_UP]) );

		
		
		curState = &(mainSS->compStates[E_COMP_OVER]);
		
		
		curState->setVal(E_SS_FGCOLTEXT0_R, 1.0f, 1.0f, 1.0f, 1.0f);
		curState->setVal(E_SS_FGCOLTEXT1_R, 1.0f, 1.0f, 1.0f, 1.0f);
		curState->props[E_SS_BDCOL_A] = 1.0f;
		
		curState->setVal(E_SS_BGCOL0_R, 0.1f, 0.075f, 0.05f, 1.0);
		curState->setVal(E_SS_BGCOL1_R, 0.05f, 0.025f, 0.0125f, 0.5);
		
		
		
		curState = &(mainSS->compStates[E_COMP_DOWN]);
		
		
		curState->setVal(E_SS_FGCOLTEXT0_R, 1.0f, 0.8f, 0.7f, 1.0f);
		curState->setVal(E_SS_FGCOLTEXT1_R, 1.0f, 1.0f, 1.0f, 1.0f);
		curState->props[E_SS_BDCOL_A] = 1.0f;
		curState->props[E_SS_BORDER] = 2.0f;

		curState->setVal(E_SS_BGCOL0_R, 0.05f, 0.025f, 0.0125f, 0.5f);	
		curState->setVal(E_SS_BGCOL1_R, 0.1f, 0.075f, 0.05f, 1.0f);	
		
		
		
		StyleSheet* tooltipSS = getNewStyleSheet("tooltipSS");
		tooltipSS->copyFrom(mainSS);
		
		curState = &(tooltipSS->compStates[E_COMP_UP]);
		curState->setVal(E_SS_BGCOL0_R, 0.0f, 0.0f, 0.0f, 1.0f);
		curState->setVal(E_SS_BGCOL1_R, 0.0f, 0.0f, 0.0f, 1.0f);
		curState->setVal(E_SS_FGCOLTEXT0_R, 1.0f, 0.75f, 0.0f, 1.0f);
		curState->setVal(E_SS_FGCOLTEXT1_R, 1.0f, 0.75f, 0.0f, 1.0f);
		curState->setVal(E_SS_BDCOL_R, 1.0f, 0.75f, 0.0f, 1.0f);
		tooltipSS->compStates[E_COMP_OVER].copyFrom(& (tooltipSS->compStates[E_COMP_UP]) );
		tooltipSS->compStates[E_COMP_DOWN].copyFrom(& (tooltipSS->compStates[E_COMP_UP]) );

		curState = &(tooltipSS->compStates[E_COMP_OVER]);
		curState = &(tooltipSS->compStates[E_COMP_DOWN]);
		
		
		
		
		StyleSheet* headerSS = getNewStyleSheet("headerSS");
		headerSS->copyFrom(mainSS);
		
		curState = &(headerSS->compStates[E_COMP_UP]);
		curState->setVal(E_SS_BGCOL0_R, 0.0f, 0.2f, 0.5f, 1.0f);
		curState->setVal(E_SS_BGCOL1_R, 0.0f, 0.4f, 0.8f, 0.5f);
		curState->setVal(E_SS_FGCOLTEXT0_R, 1.0f, 0.75f, 0.0f, 1.0f);
		curState->setVal(E_SS_FGCOLTEXT1_R, 1.0f, 0.75f, 0.0f, 1.0f);
		curState->setVal(E_SS_BDCOL_R, 1.0f, 0.75f, 0.0f, 1.0f);
		headerSS->compStates[E_COMP_OVER].copyFrom(& (headerSS->compStates[E_COMP_UP]) );
		headerSS->compStates[E_COMP_DOWN].copyFrom(& (headerSS->compStates[E_COMP_UP]) );

		curState = &(headerSS->compStates[E_COMP_OVER]);
		curState = &(headerSS->compStates[E_COMP_DOWN]);
		
		
		
		StyleSheet* redSS = getNewStyleSheet("redSS");
		redSS->copyFrom(mainSS);
		
		for (i = 0; i < E_COMP_TOTAL; i++) {
			curState = &(redSS->compStates[i]);
			curState->setVal(E_SS_BGCOL0_R, 1.0f, 0.2f, 0.5f, 1.0f);
			curState->setVal(E_SS_BGCOL1_R, 0.8f, 0.4f, 0.8f, 0.5f);
		}
		
		
		
		StyleSheet* greenSS = getNewStyleSheet("greenSS");
		greenSS->copyFrom(mainSS);
		
		for (i = 0; i < E_COMP_TOTAL; i++) {
			curState = &(greenSS->compStates[i]);
			curState->setVal(E_SS_BGCOL0_R, 0.0f, 1.0f, 0.5f, 1.0f);
			curState->setVal(E_SS_BGCOL1_R, 0.0f, 0.8f, 0.8f, 0.5f);
		}
		
		
		
		
		
	}

	int requestTerIndex(int requestingBlockId)
	{


		int i;

		bool foundFree = false;

		float bestDis;
		float testDis;
		int bestInd = 0;

		GameBlock *curBlock;

		// find if blockId already in use
		for (i = 0; i < MAX_TER_TEX; i++)
		{
			if (terTextures[i].usedByBlockId == requestingBlockId)
			{
				return i;
			}
		}

		// find if any blockIds not in use
		for (i = 0; i < MAX_TER_TEX; i++)
		{
			if (terTextures[i].usedByBlockId == -1)
			{
				bestInd = i;
				foundFree = true;
				break;
			}
		}

		if (foundFree)
		{

		}
		else
		{

			// find furthest blockId
			for (i = 0; i < MAX_TER_TEX; i++)
			{

				curBlock = gw->getBlockAtId(terTextures[i].usedByBlockId);
				testDis = curBlock->offsetInBlocks.distance(&(gw->camBlockPos));

				if (i == 0)
				{
					bestInd = 0;
					bestDis = testDis;
				}
				else
				{
					if (testDis > bestDis)
					{
						bestDis = testDis;
						bestInd = i;
					}
				}

			}

		}

		terTextures[bestInd].usedByBlockId = requestingBlockId;
		terTextures[bestInd].alreadyBound = false;
		return bestInd;


	}


	static void qNormalizeAngle(int &angle)
	{
		while (angle < 0)
		{
			angle += 360 * 16;
		}
		while (angle > 360 * 16)
		{
			angle -= 360 * 16;
		}
	}

	~Singleton()
	{
		if (gw)
		{
			delete gw;
		}
	}



	


	void setProgAction(eProgramState ps, unsigned char kc, eProgramAction pa, bool isDown)
	{

		if (isDown)
		{
			progActionsDown[ps * 256 + kc] = pa;
		}
		else
		{
			progActionsUp[ps * 256 + kc] = pa;
		}
	}

	void setProgActionAll(unsigned char kc, eProgramAction pa, bool isDown)
	{
		int i;

		for (i = 0; i < E_PS_SIZE; i++)
		{
			setProgAction((eProgramState)i, kc, pa, isDown);
		}

	}

	void drawCrossHairs(FIVector4 originVec, float radius)
	{
		FIVector4 minV;
		FIVector4 maxV;

		float xm;
		float ym;
		float zm;

		float maxRad = 4096.0f;

		int i;
		for (i = 0; i < 3; i++)
		{

			switch (i)
			{
			case 0:
				xm = maxRad;
				ym = radius;
				zm = radius;
				break;
			case 1:
				xm = radius;
				ym = maxRad;
				zm = radius;
				break;
			case 2:
				xm = radius;
				ym = radius;
				zm = maxRad;
				break;
			}

			minV.setFXYZ(
				originVec.getFX() - xm,
				originVec.getFY() - ym,
				originVec.getFZ() - zm
			);

			maxV.setFXYZ(
				originVec.getFX() + xm,
				originVec.getFY() + ym,
				originVec.getFZ() + zm
			);

			drawBox(&minV, &maxV);
		}


	}

	void drawLine(FIVector4 *p0, FIVector4 *p1)
	{
		

		glBegin(GL_LINES);
		glMultiTexCoord3f(GL_TEXTURE0, 0.0f, 0.0f, 0.0f);
		glVertex3f(p0->getFX(), p0->getFY(), p0->getFZ());
		glMultiTexCoord3f(GL_TEXTURE0, 0.0f, 0.0f, 1.0f);
		glVertex3f(p1->getFX(), p1->getFY(), p1->getFZ());
		glEnd();
	}


	void drawCubeCentered(FIVector4 *originVec, float radius)
	{
		FIVector4 minV;
		FIVector4 maxV;

		minV.setFXYZ(
			originVec->getFX() - radius,
			originVec->getFY() - radius,
			originVec->getFZ() - radius
		);

		maxV.setFXYZ(
			originVec->getFX() + radius,
			originVec->getFY() + radius,
			originVec->getFZ() + radius
		);

		drawBox(&minV, &maxV);
	}

	void drawBoxUp(FIVector4 originVec, float radiusX, float radiusY, float diamZ)
	{
		FIVector4 minV;
		FIVector4 maxV;

		minV.setFXYZ(
			originVec.getFX() - radiusX,
			originVec.getFY() - radiusY,
			originVec.getFZ()
		);

		maxV.setFXYZ(
			originVec.getFX() + radiusX,
			originVec.getFY() + radiusY,
			originVec.getFZ() + diamZ
		);

		drawBox(&minV, &maxV);
	}


	void drawBox(
		FIVector4 *v0,
		FIVector4 *v1,
		int faceFlag=2
	) {


		float minX = min(v0->getFX(),v1->getFX());
		float minY = min(v0->getFY(),v1->getFY());
		float minZ = min(v0->getFZ(),v1->getFZ());

		float maxX = max(v0->getFX(),v1->getFX());
		float maxY = max(v0->getFY(),v1->getFY());
		float maxZ = max(v0->getFZ(),v1->getFZ());


		bool drawFront = false;
		bool drawBack = false;
		
		switch(faceFlag) {
			case 0:
				drawBack = true;
			break;
			case 1:
				drawFront = true;
			break;
			case 2:
				drawBack = true;
				drawFront = true;
			break;
		}

		glBegin(GL_QUADS);


		if (drawFront) {
			// front
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, -1.0f, 1.0f);
			glVertex3f(minX, minY, maxZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, -1.0f, 1.0f);
			glVertex3f(maxX, minY, maxZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, 1.0f, 1.0f);
			glVertex3f(maxX, maxY, maxZ);
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, 1.0f, 1.0f);
			glVertex3f(minX, maxY, maxZ);
			// right
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, -1.0f, 1.0f);
			glVertex3f(maxX, minY, maxZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, -1.0f, -1.0f);
			glVertex3f(maxX, minY, minZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, 1.0f, -1.0f);
			glVertex3f(maxX, maxY, minZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, 1.0f, 1.0f);
			glVertex3f(maxX, maxY, maxZ);
			// top
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, 1.0f, 1.0f);
			glVertex3f(minX, maxY, maxZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, 1.0f, 1.0f);
			glVertex3f(maxX, maxY, maxZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, 1.0f, -1.0f);
			glVertex3f(maxX, maxY, minZ);
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, 1.0f, -1.0f);
			glVertex3f(minX, maxY, minZ);
		}
		
		
		if (drawBack) {
			// back
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, -1.0f, -1.0f);
			glVertex3f(minX, minY, minZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, -1.0f, -1.0f);
			glVertex3f(maxX, minY, minZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, 1.0f, -1.0f);
			glVertex3f(maxX, maxY, minZ);
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, 1.0f, -1.0f);
			glVertex3f(minX, maxY, minZ);
			// left
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, -1.0f, 1.0f);
			glVertex3f(minX, minY, maxZ);
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, -1.0f, -1.0f);
			glVertex3f(minX, minY, minZ);
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, 1.0f, -1.0f);
			glVertex3f(minX, maxY, minZ);
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, 1.0f, 1.0f);
			glVertex3f(minX, maxY, maxZ);
			// bottom
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, -1.0f, 1.0f);
			glVertex3f(minX, minY, maxZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, -1.0f, 1.0f);
			glVertex3f(maxX, minY, maxZ);
			glMultiTexCoord3f(GL_TEXTURE0, 1.0f, -1.0f, -1.0f);
			glVertex3f(maxX, minY, minZ);
			glMultiTexCoord3f(GL_TEXTURE0, -1.0f, -1.0f, -1.0f);
			glVertex3f(minX, minY, minZ);
		}
		
		

		glEnd();
	}
	
	
	void getMaterialString() {
		string resString = "\n";
		
		JSONValue* jv = fetchJSONData("materials.js");
		
		if (jv != NULL) {
			JSONValue* jv2 = jv->Child("materials");
			JSONValue* curChild;
			
			int numChildren = jv2->CountChildren();
			int i;
			
			string lastKey;
			
			for (i = 0; i < numChildren; i++) {
				curChild = jv2->Child(i);
				lastKey = jv2->lastKey;
				
				splitStrings.clear();
				splitStrings = split(lastKey, '_');
				
				resString.append("const float TEX_"+splitStrings[1]+"="+i__s(i)+".0/255.0;\n");
				
			}
			
			resString.append("\n");
			
			includeMap["materials"] = resString;
			
		}
		
		
		
	}
	
	void refreshIncludeMap() {
		getMaterialString();
	}
	

	void doShaderRefresh(bool doBake)
	{

		LAST_COMPILE_ERROR = false;

		readyToRecompile = 0;

		int i;
		int j;
		
		Shader* curShader;
		
		refreshIncludeMap();


		for (i = 0; i < shaderStrings.size(); i++) {
			shaderMap[ shaderStrings[i] ]->init( "../src/glsl/" + shaderStrings[i] + ".c", doBake, &includeMap);
		}
		shadersAreLoaded = 1;
		readyToRecompile = 1;
		
		if (LAST_COMPILE_ERROR) {
			
		}
		else {
			
			// load saved data (if exists)
			// merge saved data with existing data (if exists)
			// save merged data to saved data
			
			
			
			stringBuf = "{\n\t\"params\":[\n";
			
			
			
			for (i = 0; i < shaderStrings.size(); i++) {
				curShader = shaderMap[ shaderStrings[i] ];
				
				std::sort(curShader->paramVec.begin(), curShader->paramVec.end(), compareStruct);
				
				for (j = 0; j < curShader->paramVec.size(); j++) {
					stringBuf.append("\t\t{");
					stringBuf.append("\"shaderName\":\""+shaderStrings[i]+"\",");
					stringBuf.append("\"paramName\":\""+curShader->paramVec[j]+"\",");
					stringBuf.append("\"uid\":\"$shaderParams."+shaderStrings[i]+"."+curShader->paramVec[j]+"\"");
					stringBuf.append("},\n");
				}
			}
			
			stringBuf[stringBuf.size()-2] = ' ';
			
			
			stringBuf.append("\t]\n}\n\n");
			
			// this should automatically clear the key
			// and deallocate existing entries
			
			processJSONFromString(
				&stringBuf,
				&(externalJSON["shaderParams"].jv)
			);
			
			
			
		}
		

	}





	

	void setWH(int w, int h)
	{

		baseW = w;
		baseH = h;
	}

	void sampleFBODirect(FBOSet *fbos, int offset = 0)
	{
		int i;
		if (shadersAreLoaded)
		{
			for (i = 0; i < fbos->numBufs; i++)
			{
				setShaderTexture(i + offset, fbos->fbos[i].color_tex);
			}
		}
	}

	void unsampleFBODirect(FBOSet *fbos, int offset = 0)
	{
		int i;
		if (shadersAreLoaded)
		{
			for (i = fbos->numBufs - 1; i >= 0; i--)
			{
				setShaderTexture(i + offset, 0);
			}
		}
	}



	void bindFBODirect(FBOSet *fbos, int doClear = 1)
	{
		setMatrices(fbos->width, fbos->height);
		
		fbos->bind(doClear);
		currentFBOResolutionX = fbos->width;
		currentFBOResolutionY = fbos->height;
	}

	////


	// todo: optimize this
	FBOSet* getFBOByName(string &fboName) {
		
		if (fboMap.find( fboName ) == fboMap.end()) {
			cout << "invalid key" << fboName << "\n";
			exit(0);
		}
		
		return &(fboMap[fboName]);
	}

	void sampleFBO(string fboName, int offset = 0, int swapFlag = -1)
	{
		FBOSet *fbos;

		if (swapFlag == -1)
		{
			fbos = getFBOByName(fboName);//&(fboMap[fboName]);
		}
		else
		{

			if (swapFlag == 0)
			{
				fbos = getFBOByName(fboName + "0");
			}
			else
			{
				fbos = getFBOByName(fboName + "1");
			}

		}

		if (fbos)
		{
			sampleFBODirect(fbos, offset);
		}
		else
		{
			doTrace("sampleFBO: Invalid FBO Name");
		}


	}

	void unsampleFBO(string fboName, int offset = 0, int swapFlag = -1)
	{

		FBOSet *fbos;

		if (swapFlag == -1)
		{
			fbos = getFBOByName(fboName);
		}
		else
		{

			if (swapFlag == 0)
			{
				fbos = getFBOByName(fboName + "0");
			}
			else
			{
				fbos = getFBOByName(fboName + "1");
			}

		}

		if (fbos)
		{
			unsampleFBODirect(fbos, offset);
		}
		else
		{
			doTrace("unsampleFBO: Invalid FBO Name");
		}

	}

	FBOSet *getFBOSet (string fboName)
	{
		return getFBOByName(fboName);
	}

	FBOWrapper *getFBOWrapper (string fboName, int offset)
	{
		FBOSet *fbos = getFBOByName(fboName);
		return fbos->getFBOWrapper(offset);
	}

	
	
	void copyFBO(string src, string dest, int num = 0)
	{
		bindShader("CopyShader");
		bindFBO(dest);
		//sampleFBO(src, 0);
		setShaderTexture(0, getFBOWrapper(src,num)->color_tex);
		drawFSQuad();
		unsampleFBO(src, 0);
		unbindFBO();
		unbindShader();
	}

	void copyFBO2(string src, string dest)
	{
		bindShader("CopyShader2");
		bindFBO(dest);
		sampleFBO(src, 0);
		drawFSQuad();
		unsampleFBO(src, 0);
		unbindFBO();
		unbindShader();
	}

	void bindFBO(string fboName, int swapFlag = -1, int doClear = 1)
	{

		FBOSet *fbos;

		if (swapFlag == -1)
		{
			fbos = getFBOByName(fboName);
		}
		else
		{

			if (swapFlag == 0)
			{
				fbos = getFBOByName(fboName + "1");
			}
			else
			{
				fbos = getFBOByName(fboName + "0");
			}

		}

		if (fbos)
		{
			bindFBODirect(fbos, doClear);
		}
		else
		{
			doTrace("bindFBO: Invalid FBO Name");
		}


	}

	void unbindFBO()
	{
		
		glBindFramebufferEXT(GL_FRAMEBUFFER_EXT, 0);
		setMatrices(baseW, baseH);

	}



	void bindShader(string shaderName)
	{
		
		int i;
		int totSize;

		if (shadersAreLoaded)
		{
			curShader = shaderName;
			curShaderPtr = shaderMap[curShader];
			curShaderPtr->bind();
			
			totSize = curShaderPtr->paramVec.size();
			
			if (bakeParamsOn) {
				
			}
			else {
				for (i = 0; i < totSize; i++) {
					
					// if (curShaderPtr->paramVec[i].compare("lightColBNight")) {
					// 	cout << curShaderPtr->paramMap[curShaderPtr->paramVec[i]] << "\n";
					// }
					
					setShaderFloat(
						curShaderPtr->paramVec[i],
						curShaderPtr->paramMap[curShaderPtr->paramVec[i]]
					);
				}
			}
			
		}

	}

	void unbindShader()
	{
		if (shadersAreLoaded)
		{
			curShaderPtr->unbind();
		}
	}

	void setShaderArrayfVec3(string paramName, float *x, int count)
	{
		curShaderPtr->setShaderArrayfVec3(paramName, x, count);
	}
	void setShaderArrayfVec4(string paramName, float *x, int count)
	{
		curShaderPtr->setShaderArrayfVec4(paramName, x, count);
	}
	void setShaderMatrix4x4(string paramName, float *x, int count)
	{
		curShaderPtr->setShaderMatrix4x4(paramName, x, count);
	}
	void setShaderArray(string paramName, float *x, int count)
	{
		curShaderPtr->setShaderArray(paramName, x, count);
	}
	
	GLint getShaderLoc(string paramName) {
		return curShaderPtr->getShaderLoc(paramName);
	}
	
	void setShaderFloat(string paramName, float x)
	{
		curShaderPtr->setShaderFloat(paramName, x);
	}
	void setShaderInt(string paramName, int x)
	{
		curShaderPtr->setShaderInt(paramName, x);
	}
	void setShaderfVec2(string paramName, FIVector4 *v)
	{
		curShaderPtr->setShaderfVec2(paramName, v);
	}
	void setShaderVec2(string paramName, float x, float y)
	{
		curShaderPtr->setShaderVec2(paramName, x, y);
	}
	void setShaderVec3(string paramName, float x, float y, float z)
	{
		curShaderPtr->setShaderVec3(paramName, x, y, z);
	}
	void setShaderfVec3(string paramName, FIVector4 *v)
	{
		curShaderPtr->setShaderfVec3(paramName, v);
	}

	void setShaderVec4(string paramName, float x, float y, float z, float w)
	{
		curShaderPtr->setShaderVec4(paramName, x, y, z, w);
	}
	void setShaderfVec4(string paramName, FIVector4 *v)
	{
		curShaderPtr->setShaderfVec4(paramName, v);
	}



	void setShaderFloatUB(string paramName, float x)
	{
		curShaderPtr->setShaderFloatUB(paramName, x);
	}
	void setShaderfVec4UB(string paramName, FIVector4 *v)
	{
		curShaderPtr->setShaderfVec4UB(paramName, v);
	}



	void updateUniformBlock(int ubIndex, int ubDataSize = -1)
	{
		curShaderPtr->updateUniformBlock(ubIndex, ubDataSize);
	}
	void invalidateUniformBlock(int ubIndex)
	{
		curShaderPtr->invalidateUniformBlock(ubIndex);
	}
	void beginUniformBlock(int ubIndex)
	{
		curShaderPtr->beginUniformBlock(ubIndex);
	}
	bool wasUpdatedUniformBlock(int ubIndex)
	{

		return curShaderPtr->wasUpdatedUniformBlock(ubIndex);

	}

	void setShaderTexture(int multitexNumber, uint texId)
	{
		if (shadersAreLoaded)
		{
			glActiveTexture(GL_TEXTURE0 + multitexNumber);
			glBindTexture(GL_TEXTURE_2D, texId);
			curShaderPtr->setShaderInt(shaderTextureIds[multitexNumber] , multitexNumber);
		}
	}

	void setShaderTexture3D(int multitexNumber, uint texId)
	{
		if (shadersAreLoaded)
		{
			glActiveTexture(GL_TEXTURE0 + multitexNumber);
			glBindTexture(GL_TEXTURE_3D, texId);
			curShaderPtr->setShaderInt(shaderTextureIds[multitexNumber], multitexNumber);
		}
	}


	bool shiftDown()
	{
		return (bool)(glutGetModifiers()&GLUT_ACTIVE_SHIFT);
	}

	bool ctrlDown()
	{
		return (bool)(glutGetModifiers()&GLUT_ACTIVE_CTRL);
	}

	bool altDown()
	{
		return (bool)(glutGetModifiers()&GLUT_ACTIVE_ALT);
	}


	void drawQuadBounds(
		float fx1,
		float fy1,
		float fx2,
		float fy2,
		float fz
	) {
		//glColor4f(1, 1, 1, 1);
		//glNormal3f(0, 0, 1);
		
		glBegin(GL_QUADS);

		glTexCoord2f(0.0f, 0.0f);
		glVertex3f(fx1, fy1, fz);

		glTexCoord2f(1.0f, 0.0f);
		glVertex3f(fx2, fy1, fz);

		glTexCoord2f(1.0f, 1.0f);
		glVertex3f(fx2, fy2, fz);

		glTexCoord2f(0.0f, 1.0f);
		glVertex3f(fx1, fy2, fz);

		glEnd();
	}

	void drawFSQuad()
	{
		glCallList(fsqDL);
	}
	

	void drawFSQuadOffset(
		float xOff,
		float yOff,
		float zm
	)
	{
		float fx1 = (xOff - 1.0f) * zm;
		float fy1 = (yOff - 1.0f) * zm;
		float fx2 = (xOff + 1.0f) * zm;
		float fy2 = (yOff + 1.0f) * zm;

		glBegin(GL_QUADS);
		//glColor4f(1, 1, 1, 1);
		//glNormal3f(0, 0, 1);

		glTexCoord2f(0.0f, 0.0f);
		glVertex3f(fx1, fy1, 0.0f);

		glTexCoord2f(1.0f, 0.0f);
		glVertex3f(fx2, fy1, 0.0f);

		glTexCoord2f(1.0f, 1.0f);
		glVertex3f(fx2, fy2, 0.0f);

		glTexCoord2f(0.0f, 1.0f);
		glVertex3f(fx1, fy2, 0.0f);

		glEnd();
	}

	void drawFBO(string fboName, int ind, float zm, int swapFlag = -1)
	{
		if (swapFlag == -1)
		{
			drawFBOOffset(fboName, ind, 0.0f, 0.0f, zm);
		}
		else
		{
			if (swapFlag == 0)
			{
				drawFBOOffset(fboName + "1", ind, 0.0f, 0.0f, zm);
			}
			else
			{
				drawFBOOffset(fboName + "0", ind, 0.0f, 0.0f, zm);
			}

		}
	}

	void drawFBOOffsetDirect(FBOSet *fbos, int ind, float xOff, float yOff, float zm)
	{

		glBindTexture(GL_TEXTURE_2D, fbos->fbos[ind].color_tex);
		//glClearColor(0.2,0.2,0.2,0.0);
		//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		drawFSQuadOffset(xOff, yOff, zm);
		glBindTexture(GL_TEXTURE_2D, 0);
	}

	void drawFBOOffset(string fboName, int ind, float xOff, float yOff, float zm)
	{
		FBOSet *fbos = getFBOByName(fboName);

		if (fbos)
		{
			drawFBOOffsetDirect(fbos, ind, xOff, yOff, zm);
		}
		else
		{
			doTrace("drawFBOOffsetDirect: Invalid FBO Name");
		}

	}
	
	
	float getTerHeightScaled(float val)
	{
		return mixf(0.125f,0.875f,val)*worldSizeInPixels.getFZ();
		
	}


	float getSLNormalized()
	{
		return (((float)gw->seaLevel) / 255.0f);
	}
	float getSLInPixels()
	{
		return getSLNormalized()*worldSizeInPixels.getFZ() + 2.5f*pixelsPerCell;
	}

	float getHeightAtPixelPos(float x, float y, bool dd = false)
	{
		FBOWrapper *fbow;
		float xc;
		float yc;

		int channel = 0;

		float testHeight;
		
		float v0;
		float v1;
		float v2;
		float v3;
		
		if (mapInvalid)
		{

			cout << "mapInvalid\n";
			return 0.0f;

		}
		else
		{
			FBOWrapper *fbow = getFBOWrapper("hmFBO", 0);

			xc = (x / worldSizeInPixels.getFX()) * ((float)fbow->width);
			yc = (y / worldSizeInPixels.getFY()) * ((float)fbow->height);

			v0 = fbow->getPixelAtLinear((xc * mapFreqs.getFX()), (yc * mapFreqs.getFX()), channel);
			v1 = fbow->getPixelAtLinear((xc * mapFreqs.getFY()), (yc * mapFreqs.getFY()), channel);
			v2 = fbow->getPixelAtLinear((xc * mapFreqs.getFZ()), (yc * mapFreqs.getFZ()), channel);
			v3 = fbow->getPixelAtLinear((xc * mapFreqs.getFW()), (yc * mapFreqs.getFW()), channel);


			if (dd) {
				//cout << "hmvals: " << v0 << ", " << v1 << ", " << v2 << ", " << v3 << "\n";
			}
			

			testHeight = 
				  v0 * mapAmps.getFX()
				+ v1 * mapAmps.getFY()
				+ v2 * mapAmps.getFZ()
				+ v3 * mapAmps.getFW()
				
				- v1 * mapAmps.getFY()*0.5f
				- v2 * mapAmps.getFZ()*0.5f
				- v3 * mapAmps.getFW()*0.5f
				
			;
			
			if (dd) {
				//cout << "testHeight " << testHeight << "\n";
			}

			testHeight = clampf(testHeight,0.0f,1.0f);

			return getTerHeightScaled(testHeight);



		}



	}
	
	
	void transformOrg(GameOrg* curOrg) {
		curOrg->baseNode->doTransform(this);
	}
	
	void angleToVec(FIVector4* fv, float xr, float yr) {
		fv->setFXYZ(
			 -sin(xr)*sin(yr),
			 -cos(xr)*sin(yr),
			 -cos(yr)
		);
		fv->normalize();
	}
	
	void vecToAngle(FIVector4* fv, FIVector4 * ta) {
		
		ta->setFXYZ(
			atan2(fv->getFX(),fv->getFY()),
			acos(fv->getFZ()),
			0.0f	
		);
	}
	
	
	void syncObjects(FIVector4* bp) {
		int i;
				
		float xrp;
		float yrp;
		
		float xrotrad = (mainCamera->rotation[0]);
		float yrotrad = (mainCamera->rotation[1]);
		
		
		
		
		
		
		for (i = 1; i < E_OBJ_LENGTH; i++)
		{

			if (dynObjects[i]->moveType == E_MT_TRACKBALL) {
				
				xrp = xrotrad +	dynObjects[i]->posTrackball.getFX()/200.0f;
				yrp = yrotrad + dynObjects[i]->posTrackball.getFY()/200.0f;
				
				angleToVec(&tempVec1,xrp,yrp);
				tempVec1.multXYZ(dynObjects[i]->posTrackball.getFZ()*10.0f + 8.0f*pixelsPerCell);
				
				
				dynObjects[i]->pos.copyFrom(bp);
				dynObjects[i]->pos.addXYZRef( &(tempVec1) );
				
			}
			else {
				if (dynObjects[i]->moveType == E_MT_RELATIVE) {
					dynObjects[i]->pos.copyFrom(bp);
					dynObjects[i]->pos.addXYZRef( &(dynObjects[i]->posRel) );
				}
			}

		}
		
		//!!!
		//testHuman->basePosition.copyFrom(&(dynObjects[E_OBJ_HUMAN]->pos));
		
		if (currentActor != NULL) {
			testHuman->basePosition.copyFrom(&(currentActor->centerPointInPixels));
		}
		
		
		transformOrg(testHuman);
	}

	void updateCamVals() {
		
		FIVector4 *cameraPos = &(dynObjects[E_OBJ_CAMERA]->pos);
		
		if (cameraPos->getFX() > worldSizeInPixels.getFX() / 2.0)
		{
			cameraPos->setFX( cameraPos->getFX() - worldSizeInPixels.getFX() );
		}
		if (cameraPos->getFX() < -worldSizeInPixels.getFX() / 2.0)
		{
			cameraPos->setFX( cameraPos->getFX() + worldSizeInPixels.getFX() );
		}
		if (cameraPos->getFY() > worldSizeInPixels.getFY() / 2.0)
		{
			cameraPos->setFY( cameraPos->getFY() - worldSizeInPixels.getFY() );
		}
		if (cameraPos->getFY() < -worldSizeInPixels.getFY() / 2.0)
		{
			cameraPos->setFY( cameraPos->getFY() + worldSizeInPixels.getFY() );
		}



		//syncObjects(cameraPos);

		
		mainCamera->unitPos[0] = dynObjects[E_OBJ_CAMERA]->pos.getFX();
		mainCamera->unitPos[1] = dynObjects[E_OBJ_CAMERA]->pos.getFY();
		mainCamera->unitPos[2] = dynObjects[E_OBJ_CAMERA]->pos.getFZ();
	}

	void moveCamera(FIVector4 *pModXYZ)
	{
		
		int i;
		FIVector4 *cameraPos = &(dynObjects[E_OBJ_CAMERA]->pos);
		
		if (
				(pModXYZ->getFX() != 0.0) ||
				(pModXYZ->getFY() != 0.0) ||
				(pModXYZ->getFZ() != 0.0)
		) {
			wsBufferInvalid = true;
		}
		
		

		cameraPos->addXYZRef(pModXYZ);


		//pModXYZ->setFZ(0.0f);
		
		updateCamVals();
		
	}
	
	GameOrgNode* getMirroredNode(GameOrgNode* curNode) {
		if ((curNode->nodeName < E_BONE_C_BEG)&&mirrorOn) {
			if (curNode->nodeName <= E_BONE_L_END) {
				return testHuman->baseNode->getNode(
					curNode->nodeName+(E_BONE_R_BEG-E_BONE_L_BEG)
				);
			}
			else {
				return testHuman->baseNode->getNode(
					curNode->nodeName-(E_BONE_R_BEG-E_BONE_L_BEG)
				);
			}
		}
		else {
			return NULL;
		}
		
	}



	void applyNodeChanges(GameOrgNode* _curNode, float dx, float dy) {
		
		GameOrgNode* curNode = _curNode;
		
		int i;
		int j;
		int k;
		
		float xm = 0.0f;
		float ym = 0.0f;
		float zm = 0.0f;
		
		float dirMod = 1.0f;
		
		if (
			(curNode->nodeName < E_BONE_C_BEG) &&
			(mirrorOn)
		) {
			j = 2;
		}
		else {
			j = 1;
		}
		
		for (i = 0; i < j; i++) {
			
			
			if (i == 1) {
				curNode = getMirroredNode(curNode);
				
				dirMod = -1.0f;
			}
			
			
			if (abDown) {
				makeDirty();
			}
			
			xm = dx/50.0f;
			ym = dy/50.0f;
			
			if (shiftDown()) { // || altDown()
								
				if (lbDown) {
					curNode->orgVecs[E_OV_TBNRAD0].addXYZ(0.0f,xm,ym);
				}
				if (rbDown) {
					curNode->orgVecs[E_OV_TBNRAD1].addXYZ(0.0f,xm,ym);
				}
				if (mbDown) {
					
					curNode->orgVecs[E_OV_TBNRAD0].addXYZ(ym, 0.0f, 0.0f);
					curNode->orgVecs[E_OV_TBNRAD1].addXYZ(ym, 0.0f, 0.0f);
					
					//curNode->boneLengthScale += ym;
				}
			}
			else {
				
				if (lbDown) {
					curNode->orgVecs[E_OV_THETAPHIRHO].addXYZ(dirMod*ym,0.0,0.0); //dirMod*ym
				}
				if (rbDown) {
					curNode->orgVecs[E_OV_THETAPHIRHO].addXYZ(0.0,0.0,dirMod*ym);
				}
				if (mbDown) {
					curNode->orgVecs[E_OV_THETAPHIRHO].addXYZ(0.0,dirMod*ym,0.0);
				}
				
				
			}
			
			if (applyToChildren) {
				for (k = 0; k < curNode->children.size(); k++) {
					applyNodeChanges(curNode->children[k], dx, dy);
				}
			}
			
			
		}
			
		
	}

	void moveObject(float dx, float dy)
	{

		int i;
		int j;
		int diffx;
		int diffy;
		
		
		GameOrgNode* curNode;

		
		modXYZ.setFXYZ(0.0f,0.0f,0.0f);

		float dxZM = dx;
		float dyZM = dy;

		bool doDefault = false;
		
		
		
		
		//////////
		
		
		float xmod = 0.0f;
		float ymod = 0.0f;
		float zmod = 0.0f;
		float xrotrad = (mainCamera->rotation[0]);
		float yrotrad = (mainCamera->rotation[1]);
		
		

		
		
		
		
		//////////
		
		
		
		
		
		

		if (abDown) {
			
			if ( shiftDown() ) { //rbDown || 
				zmod += dy;

			}
			else {
				
				xmod += float(sin(yrotrad))*dy;
				ymod += float(cos(yrotrad))*dy;
				//zmod -= float(cos(xrotrad))*dy;

				xmod += float(cos(yrotrad))*(-dx);
				ymod -= float(sin(yrotrad))*(-dx);
			}
			
			modXYZ.setFXYZ(
				xmod*4.0f,
				ymod*4.0f,
				zmod*4.0f
			);
			

			lastModXYZ.addXYZRef(&modXYZ);


		}
		
		
		if (
			(orgOn) && 
			(activeNode != NULL) &&
			editPose
			
		) {
				
			applyNodeChanges(activeNode, dx, dy);
			
		}
		else {
			if (
				shiftDown() && 
				(mouseState == E_MOUSE_STATE_BRUSH) && 
				lbDown
			) {
				
				curBrushRad -= modXYZ.getFZ() / 50.0f;
				if (curBrushRad < 0.0f)
				{
					curBrushRad = 0.0f;
				}

			}
			else {
				if (mouseState == E_MOUSE_STATE_BRUSH) {
					doDefault = true;
				}
				else {

					if (activeObject == E_OBJ_CAMERA) {
						doDefault = true;
					}
					else {
						
						if (dynObjects[activeObject]->moveType == E_MT_TRACKBALL) {
							if (shiftDown()) {
								dynObjects[activeObject]->posTrackball.addXYZ(0.0f,0.0f,dy);
							}
							else {
								dynObjects[activeObject]->posTrackball.addXYZ(dx,dy,0.0f);
							}
							
						}
						else {
							if (dynObjects[activeObject]->moveType == E_MT_RELATIVE) {
								dynObjects[activeObject]->posRel.addXYZRef(&modXYZ, -1.0f);
							}
							else {
								dynObjects[activeObject]->pos.addXYZRef(&modXYZ, -1.0f);
							}
						}
						
						
						
					}
				}

				if (doDefault)
				{
					
					
					if (rbDown) {
						mainCamera->addRotation(dx*0.005f, dy*0.005f);
					}
					
				}
				


			}
		}
		


		






	}

	void updateMultiLights()
	{
		if (multiLights)
		{
			numDynLights = E_OBJ_LENGTH - E_OBJ_LIGHT0;
		}
		else
		{
			numDynLights = 1;
		}
	}

	void toggleFullScreen()
	{
		isFullScreen = !isFullScreen;
		if (isFullScreen)
		{
			glutFullScreen();
		}
		else
		{
			glutPositionWindow(250, 50);
		}
	}




	/*
	GLUT_KEY_F1   F1 function key
	GLUT_KEY_F2   F2 function key
	GLUT_KEY_F3   F3 function key
	GLUT_KEY_F4   F4 function key
	GLUT_KEY_F5   F5 function key
	GLUT_KEY_F6   F6 function key
	GLUT_KEY_F7   F7 function key
	GLUT_KEY_F8   F8 function key
	GLUT_KEY_F9   F9 function key
	GLUT_KEY_F10    F10 function key
	GLUT_KEY_F11    F11 function key
	GLUT_KEY_F12    F12 function key
	GLUT_KEY_LEFT   Left function key
	GLUT_KEY_RIGHT    Right function key
	GLUT_KEY_UP   Up function key
	GLUT_KEY_DOWN   Down function key
	GLUT_KEY_PAGE_UP  Page Up function key
	GLUT_KEY_PAGE_DOWN  Page Down function key
	GLUT_KEY_HOME   Home function key
	GLUT_KEY_END    End function key
	GLUT_KEY_INSERT   Insert function key
	*/



	void restartGen(bool instantRefresh, bool clearEverything) {
		
		
		gw->actionOnHolders(E_HOLDER_ACTION_RESET, instantRefresh, clearEverything);

		
		
	}

	void setObjToElevationBase(FIVector4* obj) {
		
		obj->setFZ(
			getHeightAtPixelPos(obj->getFX(), obj->getFY())
		);

	}

	void setCameraToElevationBase() {
		FIVector4 *cameraPos = &(dynObjects[E_OBJ_CAMERA]->pos);

		setObjToElevationBase(cameraPos);
	}

	void setCameraToElevation()
	{
		setCameraToElevationBase();
		
		wsBufferInvalid = true;
	}



	void processSpecialKeys(int key, int _x, int _y)
	{

		int x = _x / scaleFactor;
		int y = _y / scaleFactor;

		switch (key)
		{
		case GLUT_KEY_F1 :

			break;
		case GLUT_KEY_F2 :

			break;
		case GLUT_KEY_F3 :

			break;
		}
	}
	
	
	void updateCS() {
		if (
			(bCtrl != bCtrlOld) ||
			(bShift != bShiftOld)
		) {
			forceGetPD = true;
			wsBufferInvalid = true;
		}
		bCtrlOld = bCtrl;
		bShiftOld = bShift;
	}
	
	void playBump(BaseObj* ge) {
		FIVector4 *cameraPos = &(dynObjects[E_OBJ_CAMERA]->pos);
		
		if (ge == NULL) {
			playSoundPosAndPitch(
				"bump0",
				cameraPos,
				cameraPos,
				0.3f
			);
		}
		else {
			playSoundPosAndPitch(
				"bump0",
				cameraPos,
				&(ge->centerPointInPixels),
				0.3f
			);
		}
		
		
	}
	
	void getMarkerPos(int x, int y) {
		getPixData(&spaceUpPD, x, y, true, false);
		worldMarker.copyFrom(&spaceUpPD);
		lastCellPos.copyFrom(&(worldMarker));
		lastCellPos.intDivXYZ(pixelsPerCell);
	}
	
	
	void processInput(unsigned char key, bool keyDown, int x, int y) {
		
		if (inputOn) {
			if (keyDown) {
				
			}
			else {
				processFieldInput(key);	
			}
			return;
		}
		
		unsigned char newKey = key;
		
		if (
			(key >= 'A') &&
			(key <= 'Z')
		) {
			newKey += 32;
		}
		
		keysPressed[newKey] = keyDown;
		
		
		
		
		if (keyDown) {
			if (currentActor != NULL) {
				if (key == keyMap[KEYMAP_UP]) {
					gw->moveCell(currentActor,0,0,1);
				}
				
				if (key == keyMap[KEYMAP_DOWN]) {
					gw->moveCell(currentActor,0,0,-1);
				}
				
				if (key == keyMap[KEYMAP_FORWARD]) {
					gw->moveCellRotated(currentActor,1);
				}
				
				if (key == keyMap[KEYMAP_BACKWARD]) {
					gw->moveCellRotated(currentActor,-1);
				}
				
				if (key == keyMap[KEYMAP_RIGHT]) {
					
					gw->rotateCell(currentActor,1,E_DIR_Z);
					
					// currentActor->rotate(1,E_DIR_Z,true);
					// if (gw->testHit(currentActor)) {
					// 	playBump(currentActor);
					// 	currentActor->rotate(0,E_DIR_Z,true);
					// }
					//testHuman->baseNode->orgVecs[E_OV_THETAPHIRHO].addXYZ(0.0f,0.0f,-M_PI/2.0f);
					//transformOrg(testHuman);//testHuman->applyt
					//makeDirty();
				}
				
				if (key == keyMap[KEYMAP_LEFT]) {

					gw->rotateCell(currentActor,0,E_DIR_Z);

					// currentActor->rotate(0,E_DIR_Z,true);
					// if (gw->testHit(currentActor)) {
					// 	playBump(currentActor);
					// 	currentActor->rotate(1,E_DIR_Z,true);
					// }
					//testHuman->baseNode->orgVecs[E_OV_THETAPHIRHO].addXYZ(0.0f,0.0f,M_PI/2.0f);
					//transformOrg(testHuman);
					//makeDirty();
				}
			}
			
			
		}		
		else {
			switch (key) {





			
			// case 'a':
			// 	// selectedNode->material += 1.0f;
			// 	// curNode = getMirroredNode(selectedNode);
			// 	// if (curNode != NULL) {
			// 	// 	curNode->material += 1.0f;
			// 	// }
			// 	// makeDirty();
			// break;
			// case 'z':
			// 	// selectedNode->material -= 1.0f;
			// 	// curNode = getMirroredNode(selectedNode);
			// 	// if (curNode != NULL) {
			// 	// 	curNode->material -= 1.0f;
			// 	// }
			// 	// makeDirty();
				
			// break;


				
				
				case '1':
					getMarkerPos(x, y);
					placeNewEnt(E_ENTTYPE_NPC);
				break;
				case '2':
					getMarkerPos(x, y);
					placeNewEnt(E_ENTTYPE_MONSTER);
				break;
				case '3':
					getMarkerPos(x, y);
					placeNewEnt(E_ENTTYPE_OBJ);
				break;
				
				
				case 'i':
						isMacro = !isMacro;
						
						//mirrorOn = !mirrorOn;
						cout << "isMacro: " << isMacro << "\n";
					break;


				// case '9':
				// 	saveAllData();
				// 	cout << "data saved\n";
				// break;
				
				case 19: //ctrl-s
					saveExternalJSON();
					saveGUIValues();
					//cout << "Use s key in web editor to save\n";
					break;

				case 15: //ctrl-o
					//loadAllData();
					loadValuesGUI();

					break;

				case '[':
					iNumSteps /= 2;
					if (iNumSteps < 16)
					{
						iNumSteps = 16;
					}
					doTraceND("iNumSteps: ", i__s(iNumSteps));

					break;
				case ']':
					iNumSteps *= 2;
					if (iNumSteps > 256)
					{
						iNumSteps = 256;
					}
					doTraceND("iNumSteps: ", i__s(iNumSteps));

					break;


				case 'u':
					
					
					break;
					
				case 'q':
				
					if (currentActor == NULL) {
						
						if (bestObjInd >= E_OBJ_LENGTH) {
							setCurrentActor(&(gw->gameObjects[bestObjInd]));
						}
						
					}
					else{
						setCurrentActor(NULL);
					}
				
					// autoScroll = !autoScroll;
					
					// if (autoScroll) {
					// 	scrollTimer.start();
					// 	baseScrollPos.copyFrom(&(dynObjects[E_OBJ_CAMERA]->pos));
					// }
					
					
					break;

				case 'w':
					resetActiveNode();
				break;
				case 'W':
					maxWInPages++;
					break;
				case 'Q':
					maxWInPages--;
					if (maxWInPages < 1)
					{
						maxWInPages = 1;
					}
					break;

				case 27: // esc
					//std::exit(0);
					
					if (ddMenu->visible || contMenu->visible) {
						ddMenu->visible = false;
						contMenu->visible = false;
						closeAllContainers();
						escCount = 0;
					}
					else {
						
						escCount++;
						if (escCount >= 3) {
							std::exit(0);
						}
					}
					
					//pickerMenu->visible = false;
					
					
					
					break;

				case 'b':
				
					bakeParamsOn = !bakeParamsOn;
					cout << "bakeParamsOn: " << bakeParamsOn << "\n";
					doShaderRefresh(bakeParamsOn);
					
					
					
				
					//radiosityOn = !radiosityOn;
					break;


				case 'R':
				
					//loadValuesGUI(false);
					
					
					loadGUI();
					loadValuesGUI();
				break;
				case 'r':
					doShaderRefresh(bakeParamsOn);
					

					cout << "Shaders Refreshed\n";
					
					break;
					
				case 'j':
					doShaderRefresh(bakeParamsOn);
				
					mapInvalid = true;
					gw->initMap();
				break;

				case 'G':
					gridOn = 1.0 - gridOn;
					cout << "Grid On: " << gridOn << "\n";

					break;


				case 'g':
				
					mouseState++;

					if (mouseState == E_MOUSE_STATE_LENGTH)
					{
						mouseState = 0;
					}
					
					cout << mouseStateStrings[mouseState] << "\n";


					wsBufferInvalid = true;
					forceGetPD = true;
				
					
				break;
				
				case 'k':
					gameAI->getKB();
				break;
				
				case 'l':

					multiLights = !multiLights;
					updateMultiLights();


					forceGetPD = true;

					break;

				case ';':
					doPageRender = !doPageRender;
					cout << "doPageRender: " << doPageRender << "\n";
				break;
				case 'p':
					toggleFullScreen();
					break;

				case 'o':
					targetTimeOfDay = 1.0f-targetTimeOfDay;
					
					break;

				case 'h':
					waterOn = !waterOn;

					if (MAX_LAYERS == 1)
					{
						waterOn = false;
					}



					cout << "waterOn " << waterOn << "\n";
					break;

				case 't':
					testOn = !testOn;
					
					break;
				// case 'o':
				// 	//rotOn = !rotOn;
				// 	break;

				case '\t':
				
					if (ddMenu->visible || contMenu->visible) {
						ddMenu->visible = false;
						contMenu->visible = false;
						closeAllContainers();
						
						escCount = 0;
					}
					else {
						if (mainGUI->isReady) {
							if (mainMenu == NULL) {
								
							}
							else {
								if (mainMenu->visible) {
									playSoundEvent("hideGUI");
								}
								
								mainMenu->visible = !(mainMenu->visible);
								
								if (mainMenu->visible) {
									playSoundEvent("showGUI");
								}
							}
						}
					}
				
					
					
				
					
					
					break;

				case ' ':
					//selectedEnts.cycleEnts();
					getMarkerPos(x, y);
					
					ddMenu->visible = !(ddMenu->visible);
					markerFound = ddMenu->visible;
					
					// ddMenu->floatOffset.x = (guiX);
					// ddMenu->floatOffset.y = min((float)(guiY), (float)( (guiWinH - ddMenu->getChild(0)->resultDimInPixels.y) ));
					
					ddMenuBar = ddMenu->getChild(0)->getChild(0);
					ddMenuBar->lastDrag.x = (guiX);
					ddMenuBar->lastDrag.y = min((float)(guiY), (float)( (guiWinH - ddMenu->getChild(0)->resultDimInPixels.y) ));
					ddMenuBar->forceDragUpdate = true;
					
					
					
					
				break;

				case 'c':
					doShaderRefresh(bakeParamsOn);
					restartGen(false, true);
					break;
				

				case 'x':
					fogOn = 1.0 - fogOn;
					cout << "fog on " << fogOn << "\n";
					break;

				case 'm':

					
					runReport();
					

					break;

				
				// case 'A':
				// 	maxHInPages++;
				// 	break;
				// case 'Z':
				// 	maxHInPages--;
				// 	if (maxHInPages < 1)
				// 	{
				// 		maxHInPages = 1;
				// 	}
				// 	break;

				

				case 'v':
					gw->toggleVis(selectedEnts.getSelectedEnt());
					break;

				case 'A':
				case 'Z':
				case 'S':
				case 'F':
				case 'E':
				case 'D':
				case 'a':
				case 'z':
				case 's':
				case 'f':
				case 'e':
				case 'd':
					// reserved for movement
				break;

				default:
					cout << "No code for key: " << key << "\n";
					break;
			}
		}
		
		
	}
	
	
	
	
	
	
	void keyboardUp(unsigned char key, int _x, int _y)
	{
		int x = _x / scaleFactor;
		int y = _y / scaleFactor;
		
		//cout << "key: " << key << "\n";
		
		
		
		
		
		
		
		// switch(key) {
		// 	case keyMap[KEYMAP_UP]:
		// 	case keyMap[KEYMAP_DOWN]:
		// 	case keyMap[KEYMAP_LEFT]:
		// 	case keyMap[KEYMAP_RIGHT]:
		// 	case keyMap[KEYMAP_FORWARD]:
		// 	case keyMap[KEYMAP_BACKWARD]:
		// 		return;
		// 	break;
			
		// }
		
		
		
		
		GameOrgNode* curNode;
		
		


		
		bShift = shiftDown();
		bCtrl = ctrlDown();
		updateCS();


		if (key == 17) {
			glutLeaveMainLoop();
		}

		processInput(key, false, x, y);


	}
	
	void keyboardDown(unsigned char key, int _x, int _y)
	{
		int x = _x / scaleFactor;
		int y = _y / scaleFactor;
		
		
		
		
		
		
		
		bShift = shiftDown();
		bCtrl = ctrlDown();
		updateCS();

		processInput(key, true, x, y);
	}

	void runReport() {
		
		mainGUI->runReport();
		
		cout << "Object Count: " << lastObjectCount << "\n";
		// cout << "lightCount: " << gw->lightCount << "\n";
		// cout << "TOT GPU MEM USED (MB): " << TOT_GPU_MEM_USAGE << "\n";
		// cout << "HolderSize (MB): " << holderSizeMB << "\n";
		// cout << "Num GPU Holders: " << gpuPool->holderPoolItems.size() << "\n";
		// cout << "GPU Pooled MB Used: " << ((float)gpuPool->holderPoolItems.size())*holderSizeMB << "\n";
		// cout << "totalPointCount: " << totalPointCount << "\n";
	}
	

	void getPixData(FIVector4 *toVector, int _xv, int _yv, bool forceUpdate, bool isObj)
	{

		FBOWrapper *fbow;
		int newX;
		int newY;
		
		float xv = _xv;
		float yv = _yv;


		if (wsBufferInvalid || forceUpdate || forceGetPD)
		{
			if (isObj) {
				getFBOWrapper("geomTargFBO", 1)->getPixels();
			}
			else {
				getFBOWrapper("pagesTargFBO", 0)->getPixels();
			}
			
			//cout << "getBuf\n";
			
		}

		
		
		newX = clamp(xv, 0, bufferDim.getIX() - 1);
		newY = clamp(yv, 0, bufferDim.getIY() - 1);


		if (isObj) {
			fbow = getFBOWrapper("geomTargFBO", 1);
			fbow->getPixelAtF(toVector, newX, (bufferDim.getIY() - 1) - newY);
		}
		else {
			fbow = getFBOWrapper("pagesTargFBO", 0);
			fbow->getPixelAtF(toVector, newX, (bufferDim.getIY() - 1) - newY);
		}

		wsBufferInvalid = false;
		forceGetPD = false;
		
	}

	void mouseMove(int _x, int _y)
	{

		mouseMoved = true;

		int x = _x / scaleFactor;
		int y = _y / scaleFactor;

		int dx = x - lastPosX;
		int dy = y - lastPosY;

		guiX = _x/UI_SCALE_FACTOR;
		guiY = _y/UI_SCALE_FACTOR;

		bShift = shiftDown();
		bCtrl = ctrlDown();
		updateCS();

		lastMouseX = x;
		lastMouseY = y;

		mouseXUp = x;
		mouseYUp = y;

		bool ddVis = false;
		bool noTravel = false;
		
		if (ddMenu != NULL) {
			ddVis = ddMenu->visible;
		}
		
		
		if (mbDown) {
			getMarkerPos(x, y);
			placeNewEnt(iGenRand(0,2));
		}
		
		if (abDown)
		{
			moveObject((float)dx, (float)dy);
		}
		else
		{

			if (RT_TRANSFORM||orgOn||pathfindingOn||(mouseState != E_MOUSE_STATE_MOVE)) {
				getPixData(&mouseMovePD, x, y, false, false);
			}

			

			// if (
			// 	mouseState != E_MOUSE_STATE_MOVE
			// )	{

				gw->modifyUnit(&mouseMovePD, E_BRUSH_MOVE);
			//}
			
			

			//////////////

			if (
				orgOn &&
				editPose
				&& (!ddVis)
			) {
				updateNearestOrgNode(false, &mouseMovePD);
			}
			else {
				if (!ddVis) {
					activeNode = NULL;
					setSelNode(NULL);
				}
			}
			

			gw->findNearestEnt(
				&highlightedEnts,
				E_ET_GEOM,
				2,
				1,
				&mouseMovePD
			);
			highlightedEnt = highlightedEnts.getSelectedEnt();


			//////////////


		}

		lastPosX = x;
		lastPosY = y;

		if ( (x >= 0) && (y >= 0) && (x < baseW) && (y < baseH) )
		{

			
		}
	}


	void makeDirty() {
		testHuman->gph->childrenDirty = true;
	}

	void setSelNode(GameOrgNode* newNode) {
		
		selectedNode = newNode;
		if (selectedNode != lastSelNode) {
			makeDirty();
		}
		lastSelNode = newNode;
		
	}

	



	void worldToScreenBase(FIVector4 *sc, FIVector4 *wc) {
		
		
		
		
		
		
		
		Vector4 v;
		v.x = wc->getFX();
		v.y = wc->getFY();
		v.z = wc->getFZ();
		v.w = 1.0;
		

		
		
		
		
		GLdouble winX;
		GLdouble winY;
		GLdouble winZ;
		
		
		gluProject(
			v.x,// GLdouble  	objX,
			v.y,// GLdouble  	objY,
			v.z, // GLdouble  	objZ,
			viewMatrixD, // const GLdouble *  	model,
			projMatrixD, // const GLdouble *  	proj,
			viewport, // const GLint *  	view,
			&winX,
			&winY,
			&winZ
		);
		
		sc->setFXYZ(
			(winX/bufferDim.getFX())/((float)DEF_SCALE_FACTOR),
			(winY/bufferDim.getFY())/((float)DEF_SCALE_FACTOR),
			1.0f - winZ/clipDist[1]
		);
		

	}

	void refreshContainers(bool onMousePos) {
		UIComponent* objCont = NULL;
		
		bool oldVis = false;
		
		if (contMenu != NULL) {
			
			cout << "refreshContainers\n";
			
			externalJSON.erase("objectData"); // mem leak?
			
			oldVis = contMenu->visible;
			contMenu->visible = anyContainerOpen();

			objCont = mainGUI->findNodeByString("objectContainer");
			//objCont->jvNodeNoTemplate->Child("dataParams")->number_value = contIndex;
			
			mainGUI->refreshNode(objCont);
			
			if (onMousePos&&(oldVis == false)) {
				
				// contMenu->dragOffset.x = 0.0f;
				// contMenu->dragOffset.y = 0.0f;
				contMenuBar = contMenu->getChild(0)->getChild(0);
				
				contMenuBar->lastDrag.x = (guiX);
				contMenuBar->lastDrag.y = min((float)(guiY), (float)( (guiWinH - contMenu->getChild(0)->resultDimInPixels.y) ));
				contMenuBar->forceDragUpdate = true;
			}
			
		}
	}

	void toggleCont(int contIndex, bool onMousePos) {
		
		if (
			isContainer[gw->gameObjects[contIndex].objectType]
		) {
			
			gw->gameObjects[contIndex].isOpen = !(gw->gameObjects[contIndex].isOpen);
			refreshContainers(onMousePos);
		}
		else {
			playBump(NULL);	
		}
		
		
	}


	float getShortestAngle(float begInRad, float endInRad, float amount) {
		int begInDeg = begInRad*180/M_PI;
		int endInDeg = endInRad*180/M_PI;
		
		float shortest_angle = ((((endInDeg - begInDeg) % 360) + 540) % 360) - 180;
		
		return shortest_angle * amount * M_PI / 180.0f;
	}

	void handleMovement() {
		FIVector4 *cameraPos = &(dynObjects[E_OBJ_CAMERA]->pos);
		
		
		double curTime = myTimer.getElapsedTimeInMilliSec();
		
		int i;
		
		
		if (currentActor != NULL) {
			if (!rbDown) {
				vecToAngle(
					&(dirVecs[currentActor->orientationXYZ.getIY()]),
					&tempVec1
				);
				mainCamera->rotation[0] += 
					getShortestAngle(mainCamera->rotation[0],tempVec1.getFX(),0.1f);
			}
		}
		
		
		float xrotrad = (mainCamera->rotation[0]);
		float yrotrad = (mainCamera->rotation[1]);
		
		angleToVec(&lookAtVec,xrotrad,yrotrad);
		
		
		double curMoveTime = moveTimer.getElapsedTimeInMilliSec();
		double timeThresh = 200.0;
		
		float xmod = 0.0f;
		float ymod = 0.0f;
		float zmod = 0.0f;
		
		float tempZoom = 1.0;
		
		float tempMoveSpeed;
		
		//unsigned char curKey;
		
		
		if (currentActor == NULL) {
			if (keysPressed[keyMap[KEYMAP_UP]]) {
				zmod += 1.0f;
			}

			if (keysPressed[keyMap[KEYMAP_DOWN]]) {
				zmod -= 1.0f;
			}

			if (keysPressed[keyMap[KEYMAP_FORWARD]]) {

				
				xmod += float(sin(xrotrad));
				ymod += float(cos(xrotrad));
				zmod -= float(cos(yrotrad));
			}

			if (keysPressed[keyMap[KEYMAP_BACKWARD]]) {
				
				xmod -= float(sin(xrotrad));
				ymod -= float(cos(xrotrad));
				zmod += float(cos(yrotrad));
			}

			if (keysPressed[keyMap[KEYMAP_RIGHT]]) {
				
				xmod += float(cos(xrotrad));
				ymod -= float(sin(xrotrad));
			}

			if (keysPressed[keyMap[KEYMAP_LEFT]]) {
				
				xmod -= float(cos(xrotrad));
				ymod += float(sin(xrotrad));
			}

			
			
			
			curMoveAccel = (curMoveTime-lastMoveTime)*0.5;
			curMoveSpeed += curMoveAccel;
			
			if (curMoveSpeed > 128.0f) {
				curMoveSpeed = 128.0f;
			}
			
			lastMoveTime = curMoveTime;
			
			
			tempMoveSpeed = curMoveSpeed;
			if (bShift) {
				tempMoveSpeed *= 0.1;
			}
			
			modXYZ.setFXYZ(
				xmod*tempMoveSpeed,
				ymod*tempMoveSpeed,
				zmod*tempMoveSpeed
			);
			
			moveCamera(&modXYZ);
			
			
			
			if (
				(xmod != 0.0f) ||
				(ymod != 0.0f) ||
				(zmod != 0.0f)
			) {
				wsBufferInvalid = true;
			
			}
			else {
				
				curMoveAccel = 0.0f;
				curMoveSpeed *= 0.95f;
			}
			
			isMoving = (curMoveSpeed >= 1.0);
		}
		else {
			
			
			
			//for (i = 0; i < 10; i++) {
				targetCameraPos.copyFrom(&lookAtVec);
				targetCameraPos.multXYZ( -(mainCamera->subjectDistance)*subjectZoom*tempZoom );
				targetCameraPos.addXYZRef(&(currentActor->centerPointInPixels));
				
			// 	gw->gameObjects[E_OBJ_CAMERA].positionInCells.setFXYZRef(&targetCameraPos);
			// 	gw->gameObjects[E_OBJ_CAMERA].updateBounds();
				
			// 	if (
			// 		gw->testHit(&(gw->gameObjects[E_OBJ_CAMERA])) != E_CD_SOLID	
			// 	) {
			// 		break;
			// 	}
				
			// 	tempZoom *= 0.75f;
				
			// }
			
			
			
			
			modXYZ.copyFrom(&targetCameraPos);
			modXYZ.addXYZRef(cameraPos,-1.0f);
			modXYZ.multXYZ(0.5f);
			
			moveCamera(&modXYZ);
			
		}
		
		
	}
	
	bool anyMenuVisible() {
		bool doProc = false;
		
		if ((mainGUI != NULL)) {
			if (mainGUI->isReady) {
				if (mainMenu != NULL) {
					if (mainMenu->visible){
						doProc = true;
					}
				}
				if (ddMenu != NULL) {
					if (ddMenu->visible){
						doProc = true;
					}
				}
				if (contMenu != NULL) {
					if (contMenu->visible){
						doProc = true;
					}
				}
				// if (pickerMenu != NULL) {
				// 	if (pickerMenu->visible){
				// 		doProc = true;
				// 	}
				// }
				if (fieldMenu != NULL) {
					if (fieldMenu->visible) {
						doProc = true;
					}
				}
				
			}
		}
		
		return doProc;
		
	}

	void mouseClick(int button, int state, int _x, int _y)
	{
		
		int tempInt;


		FIVector4 *cameraPos = &(dynObjects[E_OBJ_CAMERA]->pos);

		int x = _x / scaleFactor;
		int y = _y / scaleFactor;

		lastPosX = x;
		lastPosY = y;
		
		guiX = _x/UI_SCALE_FACTOR;
		guiY = _y/UI_SCALE_FACTOR;

		GameBlock *curBlock;

		int res;
		int i;
		int j;
		int k;
		int ii;
		int jj;
		int bestInd;
		int upInd;
		float bestDis;
		float curDis;
		bool findObject = false;
		bool hitObject = false;
		bool wasDoubleClick = false;
		
		bool ddVis = false;
		if (ddMenu != NULL) {
			ddVis = ddMenu->visible;
		}

		float wheelDelta = 0.0f;
		bool mbClicked = false;
		bool rbClicked = false;
		bool lbClicked = false;

		int mouseMovingStart;

		FIVector4 testVec;
		FIVector4 oneVec;
		oneVec.setFXYZ(1.0f, 1.0f, 1.0f);
		oneVec.normalize();

		bool doProc = false;
		bool noTravel = false;
		bool abClicked = false;
		
		hitGUI = false;
		
		
		
		
		
		
		

		switch (button)
		{
		case GLUT_LEFT_BUTTON:
			lbDown = (state == GLUT_DOWN);
			lbClicked = (state == GLUT_UP);

			break;
		case GLUT_RIGHT_BUTTON:
			rbDown = (state == GLUT_DOWN);
			rbClicked = (state == GLUT_UP);

			break;
		case GLUT_MIDDLE_BUTTON:
			mbDown = (state == GLUT_DOWN);
			mbClicked = (state == GLUT_UP);

			break;

		case 3: // wheel up
			wheelDelta = 1.0f / 20.0f;
			break;

		case 4: // wheel down
			wheelDelta = -1.0f / 20.0f;
			break;
		}

		abDown = lbDown || rbDown || mbDown;
		abClicked = lbClicked || rbClicked || mbClicked;
		
		
		
		if (abDown) {
			mouseStart.setIXY(x, y);
		}
		if (abClicked) {
			mouseEnd.setIXY(x, y);
			noTravel = mouseEnd.distance(&mouseStart) < MAX_TRAVEL_DIS;	
		}
		
		if (anyMenuVisible()) {
			hitGUI = mainGUI->testHit(button, state, guiX, guiY);
		}
		

		if (hitGUI) {
			return;
		}
		
		//cout << "NO GUI HIT\n";
		
		
		wsBufferInvalid = true;
		
		if (abDown) {
			getPixData(&mouseDownPD, x, y, true, false);
			getPixData(&mouseDownOPD, x, y, true, true);
		}
		else {
			getPixData(&mouseUpPD, x, y, true, false);
			getPixData(&mouseUpOPD, x, y, true, true);
		}
		
		
		
		

		if (state == GLUT_DOWN) {
			mouseVel.setFXY(0.0f, 0.0f);
		}
		
		//GamePage* gp;

		if (abClicked) {
			
			if (lbClicked) {
				if (noTravel) {
					
				}
				else {
					if (isDraggingObject) {
						
						upInd = mouseUpOPD.getFW();
						
						//cout << "UP IND " << upInd << "\n";
						
						if (upInd == 0) {
							draggingToInd = 0;
							draggingToType = E_DT_NOTHING;
							performDrag();
						}
						else {
							if (upInd >= E_OBJ_LENGTH) {
								
									if (isContainer[gw->gameObjects[upInd].objectType]) {
										draggingToInd = upInd;
										draggingToType = E_DT_WORLD_OBJECT;
									}
									else {
										draggingToInd = 0;
										draggingToType = E_DT_NOTHING;
									}
									
									performDrag();
							}						
						}
						
						
						
					}
				}
			}
			
			


			if (ddMenu != NULL) {
								
				if (noTravel) {
					ddMenu->visible = false;
					markerFound = false;
				}
			}
			


			if (abDown)
			{

			}
			else
			{

				muTime = myTimer.getElapsedTimeInMilliSec();


				if ( (activeObject == E_OBJ_CAMERA) && (muTime - mdTime > 300.0f) )
				{
					mouseMovingStart = (mouseMovingLoc - min(mouseMovingStepsBack, mouseCount) + mouseMovingSize) % mouseMovingSize;


					if (mouseCount > 0)
					{
						mouseVel.copyFrom( &(mouseMoving[mouseMovingLoc]) );
						mouseVel.addXYZRef( &(mouseMoving[mouseMovingStart]), -1.0f);
					}


				}



				lastModXYZ.normalize();

				if (shiftDown())
				{

				}
				else
				{




					activeObject = E_OBJ_CAMERA;
					


					
					
					
					gw->findNearestEnt(
						&selectedEnts,
						E_ET_GEOM,
						2,
						1,
						&mouseUpPD,
						true
					);
					
					selectedEnt = selectedEnts.getSelectedEnt();

					if (
						(selectedEnt == NULL) ||
						(mouseState == E_MOUSE_STATE_PICKING) ||
						(mouseState == E_MOUSE_STATE_BRUSH)
					)	{

					}
					else
					{

						switch (selectedEnt->buildingType)
						{
						case E_CT_DOOR:
						case E_CT_WINDOW:
							
							

						
							gw->getHoldersInEnt(selectedEnt);
							selectedEnt->toggleTransform();
							gw->getHoldersInEnt(selectedEnt);
							gw->refreshHoldersInList(true, true);
							gw->holdersToRefresh.clear();
							
							if (selectedEnt->toggled) {
								// open
								switch (selectedEnt->buildingType)
								{
									case E_CT_DOOR:
										playSoundPosAndPitch(
											"open3",
											cameraPos,
											selectedEnt->getVisMinInPixelsT(),
											0.3f
										);
									break;
									case E_CT_WINDOW:
										playSoundPosAndPitch(
											"open1",
											cameraPos,
											selectedEnt->getVisMinInPixelsT(),
											0.3f
										);
									break;
								}
							}
							else {
								// close
								
								switch (selectedEnt->buildingType)
								{
									case E_CT_DOOR:
										playSoundPosAndPitch(
											"close2",
											cameraPos,
											selectedEnt->getVisMinInPixelsT(),
											0.3f
										);
									break;
									case E_CT_WINDOW:
										playSoundPosAndPitch(
											"close1",
											cameraPos,
											selectedEnt->getVisMinInPixelsT(),
											0.3f
										);
									break;
								}
							}
							

							
							wsBufferInvalid = true;
							break;

						case E_CT_LANTERN:
							selectedEnt->light->toggle();
							playSoundPosAndPitch(
								"castinet0",
								cameraPos,
								selectedEnt->getVisMinInPixelsT(),
								0.3f
							);
							gw->updateLights();
							cout << "final toggle " << selectedEnt->light->toggled << "\n";
							break;

						}

					}






					if ( noTravel ) {
						
						if (pathfindingOn) {
							if (lbClicked) {
								
								if (currentStep == 2) {
									currentStep = 0;
									moveNodes[0].setFXYZ(0.0,0.0,0.0);
									moveNodes[1].setFXYZ(0.0,0.0,0.0);
								}
								else {
									moveNodes[currentStep].copyFrom(&(gw->lastUnitPos));
									currentStep++;
								}
							}
						}
						else {
							switch (mouseState) {
								case E_MOUSE_STATE_BRUSH:
									
									if (lbClicked)
									{
										gw->modifyUnit(&mouseUpPD, E_BRUSH_ADD);
									}
									else
									{
										gw->modifyUnit(&mouseUpPD, E_BRUSH_SUB);
									}

									forceGetPD = true;

								break;
							}
						}
						
						
						
					}

				}


			}


		}
		else {
			if (abDown) {

				lastModXYZ.setFXYZ(0.0f, 0.0f, 0.0f);

				mouseMovingLoc = 0;
				mouseCount = 0;
				mdTime = myTimer.getElapsedTimeInMilliSec();
				


				activeObject = E_OBJ_CAMERA;
				
				
				if (mouseState == E_MOUSE_STATE_MOVE) {
					if (
						orgOn &&
						editPose
						&& (!ddVis)
						
					) {
						findObject = !(updateNearestOrgNode(true, &mouseDownPD));
					}
					else {
						findObject = true;
					}
					
					if (findObject&&lbDown) {
						
						
						
						bestInd = mouseDownOPD.getFW();
						
						
						
						bestObjInd = bestInd;
						
						//setCurrentActor(&(gw->gameObjects[bestInd]));
						
						
						
						
						
						if (bestObjInd != 0) {
							if (lastObjInd == bestObjInd) {
								if ( (mdTime-clickTime) < 500 ) {
									wasDoubleClick = true;
								}
							}
						}
						
						lastObjInd = bestObjInd;
						clickTime = mdTime;
						
						
						draggingFromInd = 0;
						draggingFromType = E_DT_NOTHING;
						
						if (wasDoubleClick) {
							toggleCont(bestObjInd, true);
						}
						
						if (bestInd >= E_OBJ_LENGTH) {
							
							isDraggingObject = true;
							//markerFound = true;
							draggingFromInd = bestObjInd;
							draggingFromType = E_DT_WORLD_OBJECT;
							
							// todo: make sure bestInd exists
							
						}
						else {
							
							if (bCtrl) {
								if (bestInd <= 0) {
									
								}
								else {
									activeObject = (E_OBJ)(bestInd);
									hitObject = true;
								}
							}
							
							if (hitObject) {
								
							}
							else {
								setCurrentActor(NULL);
							}
							
							
						}
						
					}
				}
				
				
				
				
				
				
				
				


			}
		}



		


		if ( (button == 3) || (button == 4) ) {
			
			if (currentActor != NULL) {
				subjectDelta -= wheelDelta;
				subjectZoom = pow(2.0, subjectDelta);
			}
			 

		}

		

	}
	

	
	void resetActiveNode() {
		
		GameOrgNode* curNode = NULL;
		
		if (selectedNode == NULL) {
			curNode = lastSelNode;
		}
		else {
			curNode = selectedNode;
		}
		
		if (curNode != NULL) {
			//curNode->rotThe = 0.0f;
			//curNode->rotPhi = 0.0f;
			//curNode->rotRho = 0.0f;
			//curNode->boneLengthScale = 1.0f;
			
			//curNode->tbnRadScale0.setFXYZ(1.0f,1.0f,1.0f);
			//curNode->tbnRadScale1.setFXYZ(1.0f,1.0f,1.0f);
			makeDirty();
		}
	}
	
	bool updateNearestOrgNode(bool setActive, FIVector4* mousePosWS) {
		// tempVec3.setFXYZRef(mousePosWS);
		// tempVec3.addXYZRef(&(testHuman->basePosition),-1.0f);
		
		//worldToScreenBase(&tempVec1, mousePosWS);
		
		bestNode = NULL;
		bestNodeDis = 99999.0f;
		findNearestOrgNode(
			testHuman->baseNode,
			mousePosWS//&tempVec1
		);
		
		//cout << "bestNodeDis " << bestNodeDis << "\n";
		
		if (bestNodeDis >= 3.0f*pixelsPerCell) {
			bestNode = NULL;
			activeNode = NULL;
			setSelNode(NULL);
		}
		
		if (bestNode != NULL) {
			
			setSelNode(bestNode);
			if (setActive) {
				activeNode = bestNode;				
			}
		}
		
		return (bestNode != NULL);
	}
	
	void findNearestOrgNode(
		GameOrgNode* curNode,
		FIVector4* mousePosWS
	) {
		
		tempVec3.setFXYZRef(&(curNode->orgTrans[1]));
		tempVec3.multXYZ(pixelsPerCell);
		tempVec3.addXYZRef(&(testHuman->basePosition));
		
		//worldToScreenBase(&tempVec2, &tempVec3);
		float curDis = mousePosWS->distance(&tempVec3);//&tempVec2);
		
		if (curDis < bestNodeDis) {
			bestNodeDis = curDis;
			bestNode = curNode;
		}
		
		int i;
		
		for (i = 0; i < curNode->children.size(); i++) {
			findNearestOrgNode(curNode->children[i],mousePosWS);
		}
		
	}


	// void processB64(charArr *sourceBuffer, charArr *saveBuffer)
	// {

	// 	char *buf = sourceBuffer->data;
	// 	int len = sourceBuffer->size;

	// 	if (saveBuffer != &nullBuffer)
	// 	{
	// 		if (saveBuffer->data != NULL)
	// 		{
	// 			delete[] saveBuffer->data;
	// 			saveBuffer->data = NULL;
	// 		}
	// 		saveBuffer->data = new char[len];
	// 		strncpy(saveBuffer->data, buf, len);
	// 		saveBuffer->size = len;
	// 	}

	// 	FBOSet *fbos = getFBOByName("palFBO");


	// 	//unsigned char* resultImage = new unsigned char[256*256*4];

	// 	membuf inBuffer(sourceBuffer->data, sourceBuffer->data + sourceBuffer->size);
	// 	std::istream myIS(&inBuffer);
	// 	Poco::Base64Decoder b64in(myIS);



	// 	std::ostringstream oss;
	// 	oss << b64in.rdbuf();

	// 	std::string strConst = oss.str();
	// 	const char *inString = strConst.c_str();


	// 	lodepng_decode32(&resultImage, &palWidth, &palHeight, (unsigned char *)inString, strConst.size() );

	// 	fbos->copyFromMem(0, resultImage);

	// }

	void getJVNodeByString(
		JSONValue* rootNode,
		JSONValue** resultNode,
		string stringToSplit
		//, bool dd = false
	) {
		//if (TEMP_DEBUG) cout << "getJVNodeByString(" << stringToSplit <<  ")\n";
		
		int i;
		*resultNode = rootNode;
		
		splitStrings.clear();
		splitStrings = split(stringToSplit, '.');
		
		for (i = 0; i < splitStrings.size(); i++) {
			//if (dd) cout << splitStrings[i] << "\n";
			
			if (
				(splitStrings[i][0] >= '0')	&&
				(splitStrings[i][0] <= '9')
			) {
				*resultNode = (*resultNode)->Child(
					stoi(splitStrings[i])
				);
			}
			else {
				if ( (*resultNode)->HasChild(splitStrings[i]) ) {
					*resultNode = (*resultNode)->Child(splitStrings[i]);
				}
				else {
					cout << "NULL RESULT NODE\n";
					*resultNode = NULL;
					return;
				}
			}
			
			
			
		}
		
	}
	
	
	void closeAllContainers() {
		BaseObj* curCont;
		for (itBaseObj iterator = gw->gameObjects.begin(); iterator != gw->gameObjects.end(); iterator++) {
			// iterator->first = key
			// iterator->second = value
			
			curCont = &(gw->gameObjects[iterator->first]);
			curCont->isOpen = false;
		}
	}
	
	bool anyContainerOpen() {
		BaseObj* curCont;
		for (itBaseObj iterator = gw->gameObjects.begin(); iterator != gw->gameObjects.end(); iterator++) {
			// iterator->first = key
			// iterator->second = value
			
			curCont = &(gw->gameObjects[iterator->first]);
			
			if (curCont->isOpen) {
				return true;
			}
		}
		return false;
	}

	void cleanJVPointer(JSONValue** jv) {
		
		if (*jv != NULL)
		{
			delete *jv;
		}
		*jv = NULL;
		
	}

	void getObjectData() {//int paramVal) {
		int i;
		int objectType;
		int childId;
		
		JSONValue* tempVal0;
		JSONValue* tempVal1;
		BaseObj* curCont;
		
		
		cleanJVPointer(&(externalJSON["objectData"].jv));
		
		
		externalJSON["objectData"].jv = new JSONValue(JSONObject());
		externalJSON["objectData"].jv->object_value["objects"] = new JSONValue(JSONArray());
		tempVal0 = externalJSON["objectData"].jv->object_value["objects"];
		
		for (itBaseObj iterator = gw->gameObjects.begin(); iterator != gw->gameObjects.end(); iterator++) {
			// iterator->first = key
			// iterator->second = value
			
			curCont = &(gw->gameObjects[iterator->first]);
			
			if (curCont->isOpen) {
				
				tempVal0->array_value.push_back( new JSONValue(JSONObject()) );
				
				tempVal0->array_value.back()->object_value["children"] = new JSONValue(JSONArray());
				tempVal0->array_value.back()->object_value["objectId"] = new JSONValue( ((double)(iterator->first)) );
				tempVal1 = tempVal0->array_value.back()->Child("children");
				
				
				for (i = 0; i < curCont->children.size(); i++) {
					tempVal1->array_value.push_back(new JSONValue(JSONObject()));
					childId = curCont->children[i];
					objectType = gw->gameObjects[childId].objectType;
					tempVal1->array_value.back()->object_value["objectType"] = new JSONValue( ((double)(objectType)) );
					tempVal1->array_value.back()->object_value["objectId"] = new JSONValue( ((double)(childId)) );
				}
			}
		}
	}
	
	string getStringForObjectId(int objectId) {
		int objectType = entIdToIcon[gw->gameObjects[objectId].objectType];
		
		if (isContainer[objectType]) {
			return i__s(objectType) + "& Test Container ";
		}
		else {
			if (gw->gameObjects[objectId].isEquipped) {
				return "(E) " + i__s(objectType) + "& Test Object ";
			}
			else {
				return i__s(objectType) + "& Test Object ";
			}
		}
	}

	JSONValue* fetchJSONData(string dataFile, JSONValue* params = NULL) {
		
		
		bool doLoad = false;
		bool loadRes = false;
		
		if (externalJSON.find( dataFile ) == externalJSON.end()) {
			doLoad = true;
		}
		else {
			if (externalJSON[dataFile].jv == NULL) {
				doLoad = true;
			}
		}
			
		if (doLoad) {
			if (dataFile.compare("shaderParams") == 0) {
				cout << "attempted to load shaderParams\n";
			}
			else if (dataFile.compare("objectData") == 0) {
				getObjectData();//params->number_value);
			}
			else {
				cout << "load jv data "  + dataFile << "\n";
				loadRes = loadJSON(
					"..\\data\\" + dataFile,
					&((externalJSON[dataFile]).jv)
				);
				
				if (loadRes == false) {
					return NULL;	
				}
				
			}
			
			
		}
		
		
		
		return (externalJSON[dataFile]).jv;
	}

	bool processJSONFromString(
		string* sourceBuffer,
		JSONValue** destObj
	) {
		cleanJVPointer(destObj);
		
		*destObj = JSON::Parse(sourceBuffer->c_str());

		if (*destObj == NULL)
		{
			doTraceND("Invalid JSON\n\n");
			cout << sourceBuffer << "\n\n";
			return false;
		}
		else
		{
			doTraceND("\nValid JSON\n");
			return true;
		}
		
	}

	bool processJSON(
		charArr *sourceBuffer,
		charArr *saveBuffer,
		JSONValue** destObj
	) {
		
		cleanJVPointer(destObj);

		//doTraceND("destObj is now NULL");
		

		//doTraceND("processJSON()");

		char *buf = sourceBuffer->data;
		int len = sourceBuffer->size;
		//JSONValue *jsonVal = NULL;

		if (saveBuffer != &nullBuffer)
		{
			if (saveBuffer->data != NULL)
			{
				delete[] saveBuffer->data;
				saveBuffer->data = NULL;
			}
			saveBuffer->data = new char[len];
			strncpy(saveBuffer->data, buf, len);
			saveBuffer->size = len;
		}

		//doTraceND("Begin JSON::Parse()");

		if (buf == NULL)
		{
			//doTraceND("buf is NULL");
			return false;
		}
		else
		{
			//doTraceND("buf is not NULL");
			*destObj = JSON::Parse(buf);
		}


		//doTraceND("End JSON::Parse()");


		if (*destObj == NULL)
		{
			doTraceND("Invalid JSON\n\n");
			return false;
		}
		else
		{
			doTraceND("\nValid JSON\n");
			return true;
		}


	}
	
	
	bool loadJSON(
		string path,
		JSONValue** destObj
	) {
		
		bool res = false;
		
		charArr dest;
		dest.data = NULL;
		dest.size = 0;
		
		if ( loadFile(path, &dest) )
		{
			if (processJSON(&dest, &nullBuffer, destObj)) {
				res = true;
			}
			else {
				res = false;
			}
		}
		else {
			res = false;
		}
		
		
		if (dest.data != NULL)
		{
			delete[] dest.data;
			dest.data = NULL;
		}
		
		return res;
		
	}
	
	
	void setGUIText(
		string key,
		string stringValue,
		float floatValue = 0.0f,
		bool applyVal = false,
		bool applyString = true
	) {
		UICStruct* curComp;
		if (compMap.find( key ) == compMap.end()) {
			// invalid key
		}
		else {
			curComp = &(compMap[key]);
			
			if (curComp->nodeId < 0) {
				// component was deleted
			}
			else {
				if (applyString) {
					compStack[curComp->nodeId].data->setText(stringValue);
				}
				if (applyVal) {
					compStack[curComp->nodeId].data->setValue(floatValue);
				}
				
			}
		}
	}
	
	float getGUIValue(string key) {
		UICStruct* curComp;
		if (compMap.find( key ) == compMap.end()) {
			// invalid key
		}
		else {
			curComp = &(compMap[key]);
			
			if (curComp->nodeId < 0) {
				// component was deleted
			}
			else {
				return compStack[curComp->nodeId].data->getValue();
			}
		}
		
		return 0.0;
	}
	
	UIComponent* getGUIComp(string key) {
		UICStruct* curComp;
		if (compMap.find( key ) == compMap.end()) {
			// invalid key
		}
		else {
			curComp = &(compMap[key]);
			
			if (curComp->nodeId < 0) {
				// component was deleted
			}
			else {
				return compStack[curComp->nodeId].data;
			}
		}
		
		return NULL;
	}
	
	void setGUIValue(
		string key,
		float floatValue,
		bool dispatchEvent = false,
		bool preventRefresh = false
	) {
		UICStruct* curComp;
		
		if (compMap.find( key ) == compMap.end()) {
			// invalid key
		}
		else {
			curComp = &(compMap[key]);
			
			if (curComp->nodeId < 0) {
				// component was deleted
			}
			else {
				compStack[curComp->nodeId].data->setValue(floatValue,dispatchEvent,preventRefresh);
			}
		}
	}
	
	
	void loadValuesGUI(bool applyValues = false) {
		
		cout << "Loading GUI Values\n";
		
		int i;
		
		charArr dest;
		dest.data = NULL;
		dest.size = 0;
		
		UICStruct* curComp;
		
		string loadBuf;
		//vector<string> splitStrings;
		
		
		if ( loadFile(guiSaveLoc, &dest) )
		{
			loadBuf = string(dest.data);
			
			splitStrings.clear();
			splitStrings = split(loadBuf, '^');
			
			for (i = 0; i < splitStrings.size(); i += 2) {
				
				setGUIValue(
					splitStrings[i],
					hexToFloat( &(splitStrings[i+1]) ),
					true,
					true
				);
				
				if (applyValues) {
					
				}
				else {
					
				}
				
			}
			
		}
		else {
			cout << "Unable to load GUI Values\n";
			
		}
		
		if (dest.data != NULL)
		{
			delete[] dest.data;
			dest.data = NULL;
		}
		
		cout << "End Loading GUI Values\n";
	}
	
	
	void saveExternalJSON() {
		
		cout << "Saving External JSON Values\n";
		
		
		
		
		for(itJSStruct iterator = externalJSON.begin(); iterator != externalJSON.end(); iterator++) {
			
			if (iterator->second.jv != NULL) {
				saveFileString(
					"..\\data\\" + iterator->first,
					&(iterator->second.jv->Stringify())
				);
			}
			
			// iterator->first = key
			// iterator->second = value
		}
		
		
		
		cout << "End Saving External JSON Values\n";
	}
	
	
	void saveGUIValues() {
		
		cout << "Saving GUI Values\n";
		
		stringBuf = "";
		
		for(itUICStruct iterator = compMap.begin(); iterator != compMap.end(); iterator++) {
				
				if (iterator->second.nodeId < 0) {
					
				}
				else {
					if (iterator->first[0] ==  '$') {
						stringBuf.append(
							iterator->first + "^" + floatToHex(compStack[iterator->second.nodeId].data->getValue()) + "^"
						);
					}
					
					
				}
				
		    // iterator->first = key
		    // iterator->second = value
		}
		
		saveFileString(guiSaveLoc,&stringBuf);
		
		cout << "End Saving GUI Values\n";
	}
	
	
	void updateGUI() {
		
		float chunkMem;
		float fbMem;
		
		
		
		int mvPerPage = (volGenFBOX*volGenFBOX*volGenFBOX)/(1024*1024);
		
		float voxelsGen = PAGE_COUNT*mvPerPage;
		
		string maxGPUMString = " / " + fi__s(MAX_GPU_MEM);
		
		if (frameCount%120 == 0) {
			
			chunkMem = ((float)gpuPool->holderPoolItems.size())*holderSizeMB;
			fbMem = TOT_GPU_MEM_USAGE - chunkMem;
			
			
			setGUIText("debug.fbMem", "Frame Buffer Mem Used: " + fi__s(fbMem) + maxGPUMString, fbMem/MAX_GPU_MEM, true );
			setGUIText("debug.chunkMem", "Chunk Mem Used: " + fi__s(chunkMem) + maxGPUMString, chunkMem/MAX_GPU_MEM, true );
			setGUIText("debug.totMem", "Total Mem Used: " + fi__s(TOT_GPU_MEM_USAGE) + maxGPUMString, TOT_GPU_MEM_USAGE/MAX_GPU_MEM, true );
			setGUIText("debug.chunksGen", "Voxels Generated (In Millions!): " + fi__s(voxelsGen) );
			 
		}
		
	}
	
	
	
	void beginFieldInput(string defString, int cb) {
		currentFieldString = defString;
		
		fieldCallback = cb;
		
		inputOn = true;
		fieldMenu->visible = true;
		
		if (fieldText != NULL) {
			if (currentFieldString.compare("") == 0) {
				fieldText->setText(" ");
			}
			else {
				fieldText->setText(currentFieldString);
			}
			
		}
	}
	
	void processFieldInput(unsigned char key) {
		
		bool doRef = false;
		
		switch (key) {
			case 13: // enter
				endFieldInput(true);
			break;
			case 27: // esc
				endFieldInput(false);
			break;
			case 8: // backspace
				currentFieldString = currentFieldString.substr(0, currentFieldString.size()-1);
				doRef = true;
			break;
			default:
				currentFieldString += key;
				doRef = true;
			break;
		}
		
		if (doRef) {
			if (fieldText != NULL) {
				fieldText->setText(currentFieldString);
			}
		}
	}
	
	void endFieldInput(bool success) {
		inputOn = false;
		fieldMenu->visible = false;
		
		float tempVal;
		
		if (success) {
			switch (fieldCallback) {
				case E_FC_SAVEORG:
				
					tempVal = testHuman->baseNode->orgVecs[E_OV_THETAPHIRHO].getFZ();
				
					testHuman->baseNode->orgVecs[E_OV_THETAPHIRHO].setFZ(0.0f);
					transformOrg(testHuman);
									
					testHuman->saveToFile(currentFieldString);
					
					testHuman->baseNode->orgVecs[E_OV_THETAPHIRHO].setFZ(tempVal);
					transformOrg(testHuman);
					
				break;
				case E_FC_LOADORG:
					testHuman->loadFromFile(currentFieldString);
					//orientRotation();
					if (currentActor != NULL) {
						//currentActor->curRot = 1;
					}
					transformOrg(testHuman);
					makeDirty();
					
				break;
				
			}
		}
		
	}
	
	void saveOrg() {
		beginFieldInput("",E_FC_SAVEORG);
	}
	
	void loadOrg() {
		beginFieldInput("",E_FC_LOADORG);
	}
	

	void loadGUI() {
		externalJSON.clear();
		doShaderRefresh(bakeParamsOn);
		
		for(itUICStruct iterator = compMap.begin(); iterator != compMap.end(); iterator++) {
				iterator->second.nodeId = -1;
		    // iterator->first = key
		    // iterator->second = value
		}
		
		
		
		
		if (
			loadJSON("..\\data\\lastJSONBufferGUI.js", &guiRootJS)
		) {
			mainGUI->guiFromJSON(
				guiRootJS
			);
		
			// for(itUICStruct iterator = compMap.begin(); iterator != compMap.end(); iterator++) {
			// 	if (iterator->second.nodeId != -1) {
			// 		//iterator->second.uic = (compStack[iterator->second.nodeId].data);
			// 	}
			// }
		
		}
		
		mapComp = getGUIComp("map.mapHolder");
		mainMenu = getGUIComp("guiHandles.mainMenu");
		ddMenu = getGUIComp("guiHandles.ddMenu");
		contMenu = getGUIComp("guiHandles.contMenu");
		//pickerMenu = getGUIComp("guiHandles.pickerMenu");
		fieldMenu = getGUIComp("guiHandles.fieldMenu");
		fieldText = getGUIComp("fieldMenu.field");
		
		// if (pickerMenu != NULL) {
		// 	pickerMenu->visible = false;
		// }
		if (mainMenu != NULL) {
			mainMenu->visible = false;
		}
		if (ddMenu != NULL) {
			ddMenu->visible = false;
		}
		if (fieldMenu != NULL) {
			fieldMenu->visible = false;
		}
		
		updateMatFlag = true;
		
		
	}


	// void loadAllData()
	// {
	// 	// if ( loadFile("..\\data\\lastJSONBuffer.js", &lastJSONBuffer) )
	// 	// {
	// 	// 	processJSON(&lastJSONBuffer, &nullBuffer, &rootObjJS);
	// 	// }

	// 	// if ( loadFile("..\\data\\lastImageBuffer.txt", &lastImageBuffer) )
	// 	// {
	// 	// 	processB64(&lastImageBuffer, &nullBuffer);
	// 	// }

	// }

	// void saveAllData()
	// {
		
		
	// 	// saveFile("..\\data\\lastJSONBuffer.js", &lastJSONBuffer);
	// 	// saveFile("..\\data\\lastImageBuffer.txt", &lastImageBuffer);
		
	// 	// cout << "All Data Saved\n";
	// }


	bool loadFile(string fnString, charArr *dest)
	{
		
		const char* fileName = fnString.c_str();
		
		doTraceND("Loading: ", fileName);

		if (dest == NULL)
		{
			doTraceND("Null Data");
			return false;
		}

		std::ifstream infile (fileName, std::ifstream::in);


		if ( ! infile.is_open() )
		{
			doTraceND("Could Not Open File For Loading");
			return false;
		}

		// get size of file
		infile.seekg (0, infile.end);
		long size = (long)infile.tellg();
		infile.seekg (0, infile.beg);


		dest->size = size;

		if (dest->data != NULL)
		{
			delete[] dest->data;
			dest->data = NULL;
		}

		dest->data = new char[size+1];

		// read content of infile
		infile.read (dest->data, size);

		if ( infile.bad() )
		{
			doTraceND("Could Not Load From File");
			infile.close();
			return false;
		}

		infile.close();
		
		dest->data[size] = '\0';

		doTraceND("Load Successful");

		return true;
	}

	bool saveFileString(string fileName, string* source)
	{

		if (source == NULL)
		{
			doTraceND("Null Data");
			return false;
		}

		std::ofstream outfile (fileName.c_str(), std::ofstream::out);

		if ( ! outfile.is_open() )
		{
			doTraceND("Could Not Open File For Saving");
			return false;
		}

		outfile.write(source->c_str(), source->size());

		if ( outfile.bad() )
		{
			doTraceND("Could Not Save To File");
			outfile.close();
			return false;
		}

		outfile.close();

		doTraceND("Save Successful");

		return true;
	}

	bool saveFile(char *fileName, charArr *source)
	{

		if (source->data == NULL)
		{
			doTraceND("Null Data");
			return false;
		}

		std::ofstream outfile (fileName, std::ofstream::out);

		if ( ! outfile.is_open() )
		{
			doTraceND("Could Not Open File For Saving");
			return false;
		}

		outfile.write (source->data, source->size);

		if ( outfile.bad() )
		{
			doTraceND("Could Not Save To File");
			outfile.close();
			return false;
		}

		outfile.close();

		doTraceND("Save Successful");

		return true;
	}



	


	void updateAmbientSounds() {
		FIVector4 *cameraPos = &(dynObjects[E_OBJ_CAMERA]->pos);
		
		int i;
		int j;
		
		int maxRad = 2.0f;
		
		float avgHeight = 0.0f;
		float tot = 0.0f;
		
		for (i = -maxRad; i <= maxRad; i++) {
			for (j = -maxRad; j <= maxRad; j++) {
				avgHeight += getHeightAtPixelPos(
					cameraPos->getFX() + i*32.0f*pixelsPerCell,
					cameraPos->getFY() + j*32.0f*pixelsPerCell
				);
				tot += 1.0f;
			}
		}
		
		float terHeight = avgHeight/tot;
		
		float seaHeight = getSLInPixels();
		
		float heightDif = clampf((terHeight-seaHeight)/(16.0*pixelsPerCell), 0.0, 1.0);
		
		float isUnderWater = 0.0f;
		
		if (cameraPos->getFZ() < seaHeight) {
			isUnderWater = 1.0f;	
		}
		
		
		
		music[EML_BIRDSONG0]->setVolume(masterVolume*ambientVolume*timeOfDay*heightDif*(1.0-isUnderWater));
		music[EML_CRICKETS0]->setVolume(masterVolume*ambientVolume*(1.0f-timeOfDay)*heightDif*(1.0-isUnderWater));
		music[EML_OCEANWAVES0]->setVolume(masterVolume*ambientVolume*(1.0f-heightDif)*(1.0-isUnderWater));
		music[EML_UNDERWATER0]->setVolume(masterVolume*ambientVolume*(isUnderWater));
		
		
	}
	
	
	
	
	void frameUpdate() {
		
		
		if (updateMatFlag&&(!matVolLock)) {
			updateMatFlag = false;
			updateMatVol();
		}
		
		
		cameraZoom += (targetZoom - cameraZoom) / (4.0f);
		
		if (cameraZoom < 1.0f) {
			cameraZoom = 1.0f;
		}
		
		float hs = holderSizeInPixels;
		
		FIVector4 *cameraPos = &(dynObjects[E_OBJ_CAMERA]->pos);
		float scrollAmount = 0.0f;
		
		updateAmbientSounds();
		if ((mainGUI != NULL)) {
			if (mainGUI->isReady) {
				//mainGUI->testOver(guiX, guiY);
			}
			
		}
		
		
		if (autoScroll) {
			cameraPos->copyFrom(&baseScrollPos);
			scrollAmount = scrollTimer.getElapsedTimeInMilliSec()/scrollDiv;
			cameraPos->addXYZ(-scrollAmount,-scrollAmount,0.0f);
			
			// cameraPosAdjusted.copyFrom(cameraPos);
			// setObjToElevationBase(&cameraPosAdjusted);
			// cameraPos->addXYZ(16.0*pixelsPerCell,16.0*pixelsPerCell,0.0f);
			//syncObjects(&cameraPosAdjusted);
			
			//syncObjects(cameraPos);
			
			
			
			
		}
		else {
			if (
				(
					readyForRestart &&
					(guiLock == false)
					//&& (gw->curLoadRadius > minWInPages)	
				)
				||
				forceRestart
			) {
				
				if (forceRestart) {
					forceRestart = false;			
				}
				readyForRestart = false;
				guiLock = true;
				restartGen(false, false);
				guiLock = false;
				
			}
			
			updateGUI();
		}
		
		handleMovement();
		
		
		if (
			(gw->mapLockOn) ||
			(mapInvalid)
		) {
			
		}
		else {
			
			
			
			if (mainGUI != NULL) {
				if (mainGUI->isReady) {
					currentTick++;
					gw->update();
				}
			}
			
			
		}
		
		
		syncObjects(cameraPos);
		
		
		TRACE_ON = false;
		
		
		frameCount++;
	}
	
	


	void display(void)
	{
		
		bool noTravel = false;

		curTime = myTimer.getElapsedTimeInMilliSec();

		float elTime = curTime - lastTime;
		
		float fMouseVel;

		#ifdef USE_POCO
			if (myWS == NULL)
			{

			}
			else
			{

				if (myWS->dataReady)
				{

					if (myWS->isJSON)
					{
						// if ( processJSON( &(myWS->recBuffer), &lastJSONBuffer, &rootObjJS ) )
						// {
						// 	saveAllData();

						// }
					}
					else
					{
						//processB64(  &(myWS->recBuffer), &lastImageBuffer );

					}

					

					myWS->dataReady = false;
					myWS->isWorking = false;
				}
			}
		#endif

		




		if (elTime >= ( msPerFrame  )  ) {

			if (firstRun)
			{
				
			}
			else
			{
				if ( (frameCount % 120) == 0)
				{
					gw->updateLights();
				}
			}




			lastTime = curTime;
			timeOfDay += (targetTimeOfDay - timeOfDay) / 8.0;

			if (
				lbDown &&
				isDraggingObject && 
				(draggingFromType != E_DT_NOTHING) &&
				((curTime-mdTime) > 300)
			) {
				glutSetCursor(GLUT_CURSOR_CROSSHAIR);
			
				mouseMoveVec.setFXYZ(lastMouseX,lastMouseY,0.0);
				noTravel = mouseMoveVec.distance(&mouseStart) < MAX_TRAVEL_DIS;	
				markerFound = !noTravel;
				getPixData(&worldMarker, lastMouseX, lastMouseY, true, false);
			
			}
			else {
				markerFound = false;
				glutSetCursor(GLUT_CURSOR_RIGHT_ARROW);
			}


			mouseMovingLoc = (mouseMovingLoc + 1) % mouseMovingSize;
			mouseCount++;
			mouseMoving[mouseMovingLoc].setIXY(lastMouseX, lastMouseY);


			lastModXYZ.multXYZ(0.95f);
			mouseVel.multXYZ(0.95f);
			fMouseVel = mouseVel.distance(&origin);



			

			if (shadersAreLoaded)
			{

				if (traceOn)
				{
					traceOn = false;
					TRACE_ON = true;
				}
				if (updateLock)
				{

				}
				else
				{
					frameUpdate();
				}
			}

			
		}

		if (firstRun)
		{
			//toggleFullScreen();
		}

		firstRun = false;

		//doTrace( "POSSIBLE ERROR: " , i__s(glGetError()) , "\n" );

	}
	
	
	void setMatrices(int w, int h)
	{
		int i;
		float* ptr1;
		float* ptr2;
		
		if (perspectiveOn) {
			glViewport (0, 0, (GLsizei)w, (GLsizei)h); //set the viewport to the current window specifications
			glMatrixMode (GL_PROJECTION); //set the matrix to projection
			glLoadIdentity ();
			
			gluPerspective (
				FOV,
				(GLfloat)w / (GLfloat)h,
				clipDist[0],
				clipDist[1]
			); //set the perspective (angle of sight, width, height, , depth)
			glMatrixMode (GL_MODELVIEW); //set the matrix back to model
			
			//*180.0f/M_PI / 180 * M_PI
			
			glLoadIdentity();
			glRotatef(mainCamera->rotation[1]*180.0f/M_PI,1.0,0.0,0.0);
			glRotatef(mainCamera->rotation[0]*180.0f/M_PI,0.0,0.0,1.0);
			glTranslated(
				-mainCamera->unitPos[0],
				-mainCamera->unitPos[1],
				-mainCamera->unitPos[2]
			);
			
			
			
			glGetFloatv(GL_MODELVIEW_MATRIX, viewMatrix.get());
			glGetFloatv(GL_PROJECTION_MATRIX, projMatrix.get());
			
			ptr1 = viewMatrix.get();
			ptr2 = projMatrix.get();
			
			
			for (i = 0; i < 16; i++) {
				viewMatrixD[i] = ptr1[i];
				projMatrixD[i] = ptr2[i];
			}
			
			glGetIntegerv(GL_VIEWPORT, viewport);
			
			
			heightOfNearPlane =
				(
					((float)abs(viewport[3]-viewport[1])) /
			    (2.0f*tan(0.5f*FOV*M_PI/180.0f))
			  ) *
			  (
			  	2.0f*voxelSizeInWC / ((float)scaleFactor)	
			  );
			    
			
			
			// lastW = -1; 
			// lastH = -1;
			
		}
		else {
			if (
				(lastW == w) && 
				(lastH == h)
			) {
				
			}
			else {
				glViewport(0, 0, w, h);
				glMatrixMode(GL_PROJECTION);
				glLoadIdentity();
				glOrtho(-0.5, +0.5, -0.5, +0.5, 4.0, 15.0);
				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity ();
				glMatrixMode (GL_PROJECTION);
				glLoadIdentity ();
				
				lastW = w;
				lastH = h;
			}
		}
		
		

	}
	
	void reshape(int w, int h)
	{

		setWH(w, h);

		screenWidth = w;
		screenHeight = h;
		
		setMatrices(baseW, baseH);
	}
	void idleFunc(void)
	{

	}

};
