(function (cjs, an) {

var p; // shortcut to reference prototypes
var lib={};var ss={};var img={};
lib.ssMetadata = [
		{name:"MapAnimate_atlas_", frames: [[0,0,2000,1000],[0,1002,2000,1000]]},
		{name:"MapAnimate_atlas_2", frames: [[0,0,2000,1000],[0,1002,2000,1000]]},
		{name:"MapAnimate_atlas_3", frames: [[0,0,1981,1000],[0,1002,1981,1000]]},
		{name:"MapAnimate_atlas_4", frames: [[0,0,1981,1000],[0,1002,1981,1000]]},
		{name:"MapAnimate_atlas_5", frames: [[0,1002,1981,1000],[0,0,1981,1000]]},
		{name:"MapAnimate_atlas_6", frames: [[0,802,362,287],[364,802,50,106],[1302,0,590,590],[1302,592,590,590],[0,0,1300,800]]}
];


// symbols:



(lib.CachedTexturedBitmap_1 = function() {
	this.initialize(ss["MapAnimate_atlas_6"]);
	this.gotoAndStop(0);
}).prototype = p = new cjs.Sprite();



(lib.CachedTexturedBitmap_7 = function() {
	this.initialize(ss["MapAnimate_atlas_6"]);
	this.gotoAndStop(1);
}).prototype = p = new cjs.Sprite();



(lib.colorgris = function() {
	this.initialize(ss["MapAnimate_atlas_3"]);
	this.gotoAndStop(0);
}).prototype = p = new cjs.Sprite();



(lib.colorsolidoazul = function() {
	this.initialize(ss["MapAnimate_atlas_3"]);
	this.gotoAndStop(1);
}).prototype = p = new cjs.Sprite();



(lib.entrar = function() {
	this.initialize(ss["MapAnimate_atlas_6"]);
	this.gotoAndStop(2);
}).prototype = p = new cjs.Sprite();



(lib.entrarpngcopy = function() {
	this.initialize(ss["MapAnimate_atlas_6"]);
	this.gotoAndStop(3);
}).prototype = p = new cjs.Sprite();



(lib.espacio = function() {
	this.initialize(ss["MapAnimate_atlas_4"]);
	this.gotoAndStop(0);
}).prototype = p = new cjs.Sprite();



(lib.espacioBrillante = function() {
	this.initialize(ss["MapAnimate_atlas_"]);
	this.gotoAndStop(0);
}).prototype = p = new cjs.Sprite();



(lib.espacioTenue = function() {
	this.initialize(ss["MapAnimate_atlas_"]);
	this.gotoAndStop(1);
}).prototype = p = new cjs.Sprite();



(lib.estrellas = function() {
	this.initialize(ss["MapAnimate_atlas_4"]);
	this.gotoAndStop(1);
}).prototype = p = new cjs.Sprite();



(lib.mapamundi = function() {
	this.initialize(img.mapamundi);
}).prototype = p = new cjs.Bitmap();
p.nominalBounds = new cjs.Rectangle(0,0,3189,1000);


(lib.nubegrande = function() {
	this.initialize(ss["MapAnimate_atlas_5"]);
	this.gotoAndStop(0);
}).prototype = p = new cjs.Sprite();



(lib.nubemediana = function() {
	this.initialize(ss["MapAnimate_atlas_5"]);
	this.gotoAndStop(1);
}).prototype = p = new cjs.Sprite();



(lib.nubes = function() {
	this.initialize(ss["MapAnimate_atlas_2"]);
	this.gotoAndStop(0);
}).prototype = p = new cjs.Sprite();



(lib.nubescompletas = function() {
	this.initialize(img.nubescompletas);
}).prototype = p = new cjs.Bitmap();
p.nominalBounds = new cjs.Rectangle(0,0,3189,1000);


(lib.textura = function() {
	this.initialize(ss["MapAnimate_atlas_6"]);
	this.gotoAndStop(4);
}).prototype = p = new cjs.Sprite();



(lib.tierra = function() {
	this.initialize(ss["MapAnimate_atlas_2"]);
	this.gotoAndStop(1);
}).prototype = p = new cjs.Sprite();
// helper functions:

function mc_symbol_clone() {
	var clone = this._cloneProps(new this.constructor(this.mode, this.startPosition, this.loop));
	clone.gotoAndStop(this.currentFrame);
	clone.paused = this.paused;
	clone.framerate = this.framerate;
	return clone;
}

function getMCSymbolPrototype(symbol, nominalBounds, frameBounds) {
	var prototype = cjs.extend(symbol, cjs.MovieClip);
	prototype.clone = mc_symbol_clone;
	prototype.nominalBounds = nominalBounds;
	prototype.frameBounds = frameBounds;
	return prototype;
	}


(lib.Symbol_44_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.nubegrande();
	this.instance.parent = this;
	this.instance.setTransform(0,0,0.4478,0.4478);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol_44_Layer_1, null, null);


(lib.Symbol_33_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.nubemediana();
	this.instance.parent = this;
	this.instance.setTransform(0,0,0.5439,0.5439);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol_33_Layer_1, null, null);


(lib.Symbol_22_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.nubegrande();
	this.instance.parent = this;
	this.instance.setTransform(0,0,0.544,0.544);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol_22_Layer_1, null, null);


(lib.Symbol_11_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.nubemediana();
	this.instance.parent = this;
	this.instance.setTransform(0,0,0.4079,0.4079);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol_11_Layer_1, null, null);


(lib.Symbol_3_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.mapamundi();
	this.instance.parent = this;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol_3_Layer_1, null, null);


(lib.Symbol_2_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.nubescompletas();
	this.instance.parent = this;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol_2_Layer_1, null, null);


(lib.Symbol_1_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.estrellas();
	this.instance.parent = this;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol_1_Layer_1, null, null);


(lib.Scene_1_solido = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// solido
	this.instance = new lib.colorgris();
	this.instance.parent = this;
	this.instance.setTransform(-254,-100);
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(280).to({_off:false},0).wait(68));

}).prototype = p = new cjs.MovieClip();


(lib.an_TextInput = function(options) {
	this._element = new $.an.TextInput(options);
	this._el = this._element.create();
	var $this = this;
	this.addEventListener('added', function() {
		$this._lastAddedFrame = $this.parent.currentFrame;
		$this._element.attach($('#dom_overlay_container'));
	});
}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,100,22);

p._tick = _tick;
p._handleDrawEnd = _handleDrawEnd;
p._updateVisibility = _updateVisibility;



(lib.SymTierra_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.tierra();
	this.instance.parent = this;
	this.instance.setTransform(0,0,0.8079,0.8079);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = getMCSymbolPrototype(lib.SymTierra_Layer_1, null, null);


(lib.SymNubes_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.nubes();
	this.instance.parent = this;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = getMCSymbolPrototype(lib.SymNubes_Layer_1, null, null);


(lib.SymIngresar = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.entrarpngcopy();
	this.instance.parent = this;
	this.instance.setTransform(0,0,0.4439,0.4439);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,261.9,261.9);


(lib.SymEspacioBrillante_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.espacioBrillante();
	this.instance.parent = this;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

}).prototype = getMCSymbolPrototype(lib.SymEspacioBrillante_Layer_1, null, null);


(lib.Symbol_3_Layer_1_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance_1 = new lib.nubes();
	this.instance_1.parent = this;
	this.instance_1.setTransform(0,0,1.9523,1.9523);

	this.timeline.addTween(cjs.Tween.get(this.instance_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol_3_Layer_1_1, null, null);


(lib.Symbol_2_Layer_1_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance_1 = new lib.nubes();
	this.instance_1.parent = this;
	this.instance_1.setTransform(0,0,2.4484,2.4484);

	this.timeline.addTween(cjs.Tween.get(this.instance_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol_2_Layer_1_1, null, null);


(lib.Symbol_1_Layer_1_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance_1 = new lib.nubes();
	this.instance_1.parent = this;
	this.instance_1.setTransform(0,0,2.4484,2.4484);

	this.timeline.addTween(cjs.Tween.get(this.instance_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol_1_Layer_1_1, null, null);


(lib.boton1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.instance = new lib.entrar();
	this.instance.parent = this;
	this.instance.setTransform(20,20,0.9323,0.9323);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1).to({scaleX:1.0952,scaleY:1.0952,x:-28,y:-28},0).wait(1).to({scaleX:0.7017,scaleY:0.7017,x:88,y:88},0).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(-28,-28,646.2,646.2);


(lib.Symbol44 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1 = new lib.Symbol_44_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(443.6,223.9,1,1,0,0,0,443.6,223.9);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol44, new cjs.Rectangle(0,0,887.1,447.8), null);


(lib.Symbol33 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1 = new lib.Symbol_33_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(538.7,271.9,1,1,0,0,0,538.7,271.9);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol33, new cjs.Rectangle(0,0,1077.5,543.9), null);


(lib.Symbol22 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1 = new lib.Symbol_22_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(538.9,272,1,1,0,0,0,538.9,272);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol22, new cjs.Rectangle(0,0,1077.7,544), null);


(lib.Symbol11 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1 = new lib.Symbol_11_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(404,204,1,1,0,0,0,404,204);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol11, new cjs.Rectangle(0,0,808.1,407.9), null);


(lib.Symbol3 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1 = new lib.Symbol_3_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(1594.5,500,1,1,0,0,0,1594.5,500);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol3, new cjs.Rectangle(0,0,3189,1000), null);


(lib.Symbol2 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1 = new lib.Symbol_2_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(1594.5,500,1,1,0,0,0,1594.5,500);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol2, new cjs.Rectangle(0,0,3189,1000), null);


(lib.Symbol1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1 = new lib.Symbol_1_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(990.5,500,1,1,0,0,0,990.5,500);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol1, new cjs.Rectangle(0,0,1981,1000), null);


(lib.Scene_1_nubes4 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// nubes4
	this.instance = new lib.Symbol11();
	this.instance.parent = this;
	this.instance.setTransform(-280,-160,1,1,0,0,0,404,204);
	this.instance.alpha = 0.3984;
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(214).to({_off:false},0).wait(1).to({regY:203.9,scaleX:1.014,scaleY:1.014,x:-271.55,y:-155.9,alpha:0.409},0).wait(1).to({scaleX:1.0281,scaleY:1.0281,x:-263.1,y:-151.75,alpha:0.4179},0).wait(1).to({scaleX:1.0421,scaleY:1.0421,x:-254.7,y:-147.55,alpha:0.4269},0).wait(1).to({scaleX:1.0562,scaleY:1.0562,x:-246.25,y:-143.4,alpha:0.4358},0).wait(1).to({scaleX:1.0702,scaleY:1.0702,x:-237.85,y:-139.2,alpha:0.4448},0).wait(1).to({scaleX:1.0842,scaleY:1.0842,x:-229.4,y:-135.05,alpha:0.4537},0).wait(1).to({scaleX:1.0983,scaleY:1.0983,x:-221,y:-130.85,alpha:0.4627},0).wait(1).to({scaleX:1.1123,scaleY:1.1123,x:-212.5,y:-126.7,alpha:0.4716},0).wait(1).to({scaleX:1.1264,scaleY:1.1264,x:-204.1,y:-122.5,alpha:0.4806},0).wait(1).to({scaleX:1.1404,scaleY:1.1404,x:-195.7,y:-118.3,alpha:0.4896},0).wait(1).to({scaleX:1.1544,scaleY:1.1544,x:-187.25,y:-114.15,alpha:0.4985},0).wait(1).to({scaleX:1.1685,scaleY:1.1685,x:-178.85,y:-110,alpha:0.5075},0).wait(1).to({scaleX:1.1825,scaleY:1.1825,x:-170.35,y:-105.8,alpha:0.5164},0).wait(1).to({scaleX:1.1966,scaleY:1.1966,x:-161.95,y:-101.6,alpha:0.5254},0).wait(1).to({scaleX:1.2106,scaleY:1.2106,x:-153.5,y:-97.45,alpha:0.5343},0).wait(1).to({scaleX:1.2246,scaleY:1.2246,x:-145.1,y:-93.3,alpha:0.5433},0).wait(1).to({scaleX:1.2387,scaleY:1.2387,x:-136.65,y:-89.1,alpha:0.5522},0).wait(1).to({scaleX:1.2527,scaleY:1.2527,x:-128.25,y:-84.9,alpha:0.5612},0).wait(1).to({scaleX:1.2668,scaleY:1.2668,x:-119.8,y:-80.75,alpha:0.5701},0).wait(1).to({scaleX:1.2808,scaleY:1.2808,x:-111.35,y:-76.6,alpha:0.5791},0).wait(1).to({scaleX:1.2949,scaleY:1.2949,x:-102.95,y:-72.45,alpha:0.5881},0).wait(1).to({scaleX:1.3089,scaleY:1.3089,x:-94.5,y:-68.2,alpha:0.597},0).wait(1).to({scaleX:1.3229,scaleY:1.3229,x:-86.1,y:-64.05,alpha:0.606},0).wait(1).to({scaleX:1.337,scaleY:1.337,x:-77.65,y:-59.9,alpha:0.6149},0).wait(1).to({scaleX:1.351,scaleY:1.351,x:-69.2,y:-55.75,alpha:0.6239},0).wait(1).to({scaleX:1.3651,scaleY:1.3651,x:-60.75,y:-51.5,alpha:0.6328},0).wait(1).to({scaleX:1.3791,scaleY:1.3791,x:-52.35,y:-47.35,alpha:0.6418},0).wait(1).to({scaleX:1.3931,scaleY:1.3931,x:-43.95,y:-43.2,alpha:0.6507},0).wait(1).to({scaleX:1.4072,scaleY:1.4072,x:-35.5,y:-39.05,alpha:0.6597},0).wait(1).to({scaleX:1.4212,scaleY:1.4212,x:-27.1,y:-34.8,alpha:0.6687},0).wait(1).to({scaleX:1.4353,scaleY:1.4353,x:-18.65,y:-30.65,alpha:0.6776},0).wait(1).to({scaleX:1.4493,scaleY:1.4493,x:-10.2,y:-26.5,alpha:0.6866},0).wait(1).to({scaleX:1.4633,scaleY:1.4633,x:-1.75,y:-22.35,alpha:0.6955},0).wait(1).to({scaleX:1.4774,scaleY:1.4774,x:6.65,y:-18.1,alpha:0.7045},0).wait(1).to({scaleX:1.4914,scaleY:1.4914,x:15.1,y:-13.95,alpha:0.7134},0).wait(1).to({scaleX:1.5055,scaleY:1.5055,x:23.5,y:-9.8,alpha:0.7224},0).wait(1).to({scaleX:1.5195,scaleY:1.5195,x:32,y:-5.6,alpha:0.7313},0).wait(1).to({scaleX:1.5335,scaleY:1.5335,x:40.4,y:-1.45,alpha:0.7403},0).wait(1).to({scaleX:1.5476,scaleY:1.5476,x:48.8,y:2.75,alpha:0.7493},0).wait(1).to({scaleX:1.5616,scaleY:1.5616,x:57.25,y:6.9,alpha:0.7582},0).wait(1).to({scaleX:1.5757,scaleY:1.5757,x:65.65,y:11.1,alpha:0.7672},0).wait(1).to({scaleX:1.5897,scaleY:1.5897,x:74.1,y:15.25,alpha:0.7761},0).wait(1).to({scaleX:1.6037,scaleY:1.6037,x:82.55,y:19.45,alpha:0.7851},0).wait(1).to({scaleX:1.6178,scaleY:1.6178,x:91,y:23.6,alpha:0.794},0).wait(1).to({scaleX:1.6318,scaleY:1.6318,x:99.4,y:27.8,alpha:0.803},0).wait(1).to({scaleX:1.6459,scaleY:1.6459,x:107.85,y:31.95,alpha:0.8119},0).wait(1).to({scaleX:1.6599,scaleY:1.6599,x:116.25,y:36.15,alpha:0.8209},0).wait(1).to({scaleX:1.6739,scaleY:1.6739,x:124.65,y:40.3,alpha:0.8299},0).wait(1).to({scaleX:1.688,scaleY:1.688,x:133.15,y:44.5,alpha:0.8388},0).wait(1).to({scaleX:1.702,scaleY:1.702,x:141.55,y:48.65,alpha:0.8478},0).wait(1).to({scaleX:1.7161,scaleY:1.7161,x:150,y:52.85,alpha:0.8567},0).wait(1).to({scaleX:1.7301,scaleY:1.7301,x:158.4,y:57,alpha:0.8657},0).wait(1).to({scaleX:1.7442,scaleY:1.7442,x:166.85,y:61.2,alpha:0.8746},0).wait(1).to({scaleX:1.7582,scaleY:1.7582,x:175.25,y:65.35,alpha:0.8836},0).wait(1).to({scaleX:1.7722,scaleY:1.7722,x:183.75,y:69.5,alpha:0.8925},0).wait(1).to({scaleX:1.7863,scaleY:1.7863,x:192.15,y:73.7,alpha:0.9015},0).wait(1).to({scaleX:1.8003,scaleY:1.8003,x:200.55,y:77.9,alpha:0.9104},0).wait(1).to({scaleX:1.8144,scaleY:1.8144,x:209,y:82.05,alpha:0.9194},0).wait(1).to({scaleX:1.8284,scaleY:1.8284,x:217.4,y:86.2,alpha:0.9284},0).wait(1).to({scaleX:1.8424,scaleY:1.8424,x:225.85,y:90.4,alpha:0.9373},0).wait(1).to({scaleX:1.8565,scaleY:1.8565,x:234.25,y:94.6,alpha:0.9463},0).wait(1).to({scaleX:1.8705,scaleY:1.8705,x:242.7,y:98.75,alpha:0.9552},0).wait(1).to({scaleX:1.8846,scaleY:1.8846,x:251.15,y:102.9,alpha:0.9642},0).wait(1).to({scaleX:1.8986,scaleY:1.8986,x:259.6,y:107.1,alpha:0.9731},0).wait(1).to({scaleX:1.9126,scaleY:1.9126,x:268,y:111.3,alpha:0.9821},0).wait(1).to({scaleX:1.9267,scaleY:1.9267,x:276.4,y:115.45,alpha:0.991},0).wait(1).to({scaleX:1.9407,scaleY:1.9407,x:284.85,y:119.6,alpha:1},0).wait(1).to({alpha:0.9811},0).wait(1).to({alpha:0.9623},0).wait(1).to({alpha:0.9434},0).wait(1).to({alpha:0.9245},0).wait(1).to({alpha:0.9057},0).wait(1).to({alpha:0.8868},0).wait(1).to({alpha:0.8679},0).wait(1).to({alpha:0.8491},0).wait(1).to({alpha:0.8302},0).wait(1).to({alpha:0.8113},0).wait(1).to({alpha:0.7925},0).wait(1).to({alpha:0.7736},0).wait(1).to({alpha:0.7547},0).wait(1).to({alpha:0.7358},0).wait(1).to({alpha:0.717},0).wait(1).to({alpha:0.6981},0).wait(1).to({alpha:0.6792},0).wait(1).to({alpha:0.6604},0).wait(1).to({alpha:0.6415},0).wait(1).to({alpha:0.6226},0).wait(1).to({alpha:0.6038},0).wait(1).to({alpha:0.5849},0).wait(1).to({alpha:0.566},0).wait(1).to({alpha:0.5472},0).wait(1).to({alpha:0.5283},0).wait(1).to({alpha:0.5094},0).wait(1).to({alpha:0.4906},0).wait(1).to({alpha:0.4717},0).wait(1).to({alpha:0.4528},0).wait(1).to({alpha:0.434},0).wait(1).to({alpha:0.4151},0).wait(1).to({alpha:0.3962},0).wait(1).to({alpha:0.3774},0).wait(1).to({alpha:0.3585},0).wait(1).to({alpha:0.3396},0).wait(1).to({alpha:0.3208},0).wait(1).to({alpha:0.3019},0).wait(1).to({alpha:0.283},0).wait(1).to({alpha:0.2642},0).wait(1).to({alpha:0.2453},0).wait(1).to({alpha:0.2264},0).wait(1).to({alpha:0.2075},0).wait(1).to({alpha:0.1887},0).wait(1).to({alpha:0.1698},0).wait(1).to({alpha:0.1509},0).wait(1).to({alpha:0.1321},0).wait(1).to({alpha:0.1132},0).wait(1).to({alpha:0.0943},0).wait(1).to({alpha:0.0755},0).wait(1).to({alpha:0.0566},0).wait(1).to({alpha:0.0377},0).wait(1).to({alpha:0.0189},0).wait(1).to({alpha:0},0).wait(14));

}).prototype = p = new cjs.MovieClip();


(lib.Scene_1_nubes3 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// nubes3
	this.instance = new lib.Symbol22();
	this.instance.parent = this;
	this.instance.setTransform(-396.1,856,1,1,0,0,0,538.9,272);
	this.instance.alpha = 0.25;
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(214).to({_off:false},0).wait(1).to({regX:538.8,scaleX:1.0068,scaleY:1.0068,x:-388.3,y:851.1,alpha:0.2612},0).wait(1).to({scaleX:1.0135,scaleY:1.0135,x:-380.4,y:846.2,alpha:0.2724},0).wait(1).to({scaleX:1.0203,scaleY:1.0203,x:-372.55,y:841.25,alpha:0.2836},0).wait(1).to({scaleX:1.027,scaleY:1.027,x:-364.7,y:836.35,alpha:0.2948},0).wait(1).to({scaleX:1.0338,scaleY:1.0338,x:-356.8,y:831.5,alpha:0.306},0).wait(1).to({scaleX:1.0406,scaleY:1.0406,x:-348.9,y:826.6,alpha:0.3172},0).wait(1).to({scaleX:1.0473,scaleY:1.0473,x:-341.05,y:821.65,alpha:0.3284},0).wait(1).to({scaleX:1.0541,scaleY:1.0541,x:-333.15,y:816.75,alpha:0.3396},0).wait(1).to({scaleX:1.0608,scaleY:1.0608,x:-325.25,y:811.9,alpha:0.3507},0).wait(1).to({scaleX:1.0676,scaleY:1.0676,x:-317.4,y:807,alpha:0.3619},0).wait(1).to({scaleX:1.0744,scaleY:1.0744,x:-309.55,y:802.05,alpha:0.3731},0).wait(1).to({scaleX:1.0811,scaleY:1.0811,x:-301.65,y:797.15,alpha:0.3843},0).wait(1).to({scaleX:1.0879,scaleY:1.0879,x:-293.75,y:792.3,alpha:0.3955},0).wait(1).to({scaleX:1.0946,scaleY:1.0946,x:-285.9,y:787.4,alpha:0.4067},0).wait(1).to({scaleX:1.1014,scaleY:1.1014,x:-278,y:782.5,alpha:0.4179},0).wait(1).to({scaleX:1.1082,scaleY:1.1082,x:-270.15,y:777.55,alpha:0.4291},0).wait(1).to({scaleX:1.1149,scaleY:1.1149,x:-262.25,y:772.7,alpha:0.4403},0).wait(1).to({scaleX:1.1217,scaleY:1.1217,x:-254.4,y:767.8,alpha:0.4515},0).wait(1).to({scaleX:1.1284,scaleY:1.1284,x:-246.5,y:762.9,alpha:0.4627},0).wait(1).to({scaleX:1.1352,scaleY:1.1352,x:-238.6,y:757.95,alpha:0.4739},0).wait(1).to({scaleX:1.142,scaleY:1.142,x:-230.7,y:753.1,alpha:0.4851},0).wait(1).to({scaleX:1.1487,scaleY:1.1487,x:-222.85,y:748.2,alpha:0.4963},0).wait(1).to({scaleX:1.1555,scaleY:1.1555,x:-215,y:743.3,alpha:0.5075},0).wait(1).to({scaleX:1.1622,scaleY:1.1622,x:-207.1,y:738.4,alpha:0.5187},0).wait(1).to({scaleX:1.169,scaleY:1.169,x:-199.25,y:733.5,alpha:0.5299},0).wait(1).to({scaleX:1.1758,scaleY:1.1758,x:-191.35,y:728.6,alpha:0.541},0).wait(1).to({scaleX:1.1825,scaleY:1.1825,x:-183.45,y:723.7,alpha:0.5522},0).wait(1).to({scaleX:1.1893,scaleY:1.1893,x:-175.6,y:718.8,alpha:0.5634},0).wait(1).to({scaleX:1.196,scaleY:1.196,x:-167.75,y:713.85,alpha:0.5746},0).wait(1).to({scaleX:1.2028,scaleY:1.2028,x:-159.85,y:709,alpha:0.5858},0).wait(1).to({scaleX:1.2096,scaleY:1.2096,x:-151.95,y:704.1,alpha:0.597},0).wait(1).to({scaleX:1.2163,scaleY:1.2163,x:-144.1,y:699.2,alpha:0.6082},0).wait(1).to({scaleX:1.2231,scaleY:1.2231,x:-136.2,y:694.3,alpha:0.6194},0).wait(1).to({scaleX:1.2298,scaleY:1.2298,x:-128.3,y:689.4,alpha:0.6306},0).wait(1).to({scaleX:1.2366,scaleY:1.2366,x:-120.5,y:684.5,alpha:0.6418},0).wait(1).to({scaleX:1.2434,scaleY:1.2434,x:-112.6,y:679.6,alpha:0.653},0).wait(1).to({scaleX:1.2501,scaleY:1.2501,x:-104.7,y:674.7,alpha:0.6642},0).wait(1).to({scaleX:1.2569,scaleY:1.2569,x:-96.8,y:669.8,alpha:0.6754},0).wait(1).to({scaleX:1.2636,scaleY:1.2636,x:-88.95,y:664.9,alpha:0.6866},0).wait(1).to({scaleX:1.2704,scaleY:1.2704,x:-81.05,y:660,alpha:0.6978},0).wait(1).to({scaleX:1.2772,scaleY:1.2772,x:-73.15,y:655.1,alpha:0.709},0).wait(1).to({scaleX:1.2839,scaleY:1.2839,x:-65.3,y:650.2,alpha:0.7201},0).wait(1).to({scaleX:1.2907,scaleY:1.2907,x:-57.45,y:645.3,alpha:0.7313},0).wait(1).to({scaleX:1.2974,scaleY:1.2974,x:-49.55,y:640.4,alpha:0.7425},0).wait(1).to({scaleX:1.3042,scaleY:1.3042,x:-41.65,y:635.5,alpha:0.7537},0).wait(1).to({scaleX:1.311,scaleY:1.311,x:-33.8,y:630.65,alpha:0.7649},0).wait(1).to({scaleX:1.3177,scaleY:1.3177,x:-25.9,y:625.7,alpha:0.7761},0).wait(1).to({scaleX:1.3245,scaleY:1.3245,x:-18.05,y:620.8,alpha:0.7873},0).wait(1).to({scaleX:1.3312,scaleY:1.3312,x:-10.15,y:615.9,alpha:0.7985},0).wait(1).to({scaleX:1.338,scaleY:1.338,x:-2.3,y:611.05,alpha:0.8097},0).wait(1).to({scaleX:1.3448,scaleY:1.3448,x:5.6,y:606.1,alpha:0.8209},0).wait(1).to({scaleX:1.3515,scaleY:1.3515,x:13.5,y:601.2,alpha:0.8321},0).wait(1).to({scaleX:1.3583,scaleY:1.3583,x:21.35,y:596.3,alpha:0.8433},0).wait(1).to({scaleX:1.365,scaleY:1.365,x:29.2,y:591.45,alpha:0.8545},0).wait(1).to({scaleX:1.3718,scaleY:1.3718,x:37.1,y:586.5,alpha:0.8657},0).wait(1).to({scaleX:1.3786,scaleY:1.3786,x:44.95,y:581.6,alpha:0.8769},0).wait(1).to({scaleX:1.3853,scaleY:1.3853,x:52.85,y:576.7,alpha:0.8881},0).wait(1).to({scaleX:1.3921,scaleY:1.3921,x:60.75,y:571.8,alpha:0.8993},0).wait(1).to({scaleX:1.3988,scaleY:1.3988,x:68.65,y:566.95,alpha:0.9104},0).wait(1).to({scaleX:1.4056,scaleY:1.4056,x:76.5,y:562,alpha:0.9216},0).wait(1).to({scaleX:1.4124,scaleY:1.4124,x:84.35,y:557.1,alpha:0.9328},0).wait(1).to({scaleX:1.4191,scaleY:1.4191,x:92.25,y:552.25,alpha:0.944},0).wait(1).to({scaleX:1.4259,scaleY:1.4259,x:100.15,y:547.35,alpha:0.9552},0).wait(1).to({scaleX:1.4326,scaleY:1.4326,x:108,y:542.4,alpha:0.9664},0).wait(1).to({scaleX:1.4394,scaleY:1.4394,x:115.9,y:537.5,alpha:0.9776},0).wait(1).to({scaleX:1.4462,scaleY:1.4462,x:123.8,y:532.65,alpha:0.9888},0).wait(1).to({scaleX:1.4529,scaleY:1.4529,x:131.6,y:527.75,alpha:1},0).wait(1).to({alpha:0.9811},0).wait(1).to({alpha:0.9623},0).wait(1).to({alpha:0.9434},0).wait(1).to({alpha:0.9245},0).wait(1).to({alpha:0.9057},0).wait(1).to({alpha:0.8868},0).wait(1).to({alpha:0.8679},0).wait(1).to({alpha:0.8491},0).wait(1).to({alpha:0.8302},0).wait(1).to({alpha:0.8113},0).wait(1).to({alpha:0.7925},0).wait(1).to({alpha:0.7736},0).wait(1).to({alpha:0.7547},0).wait(1).to({alpha:0.7358},0).wait(1).to({alpha:0.717},0).wait(1).to({alpha:0.6981},0).wait(1).to({alpha:0.6792},0).wait(1).to({alpha:0.6604},0).wait(1).to({alpha:0.6415},0).wait(1).to({alpha:0.6226},0).wait(1).to({alpha:0.6038},0).wait(1).to({alpha:0.5849},0).wait(1).to({alpha:0.566},0).wait(1).to({alpha:0.5472},0).wait(1).to({alpha:0.5283},0).wait(1).to({alpha:0.5094},0).wait(1).to({alpha:0.4906},0).wait(1).to({alpha:0.4717},0).wait(1).to({alpha:0.4528},0).wait(1).to({alpha:0.434},0).wait(1).to({alpha:0.4151},0).wait(1).to({alpha:0.3962},0).wait(1).to({alpha:0.3774},0).wait(1).to({alpha:0.3585},0).wait(1).to({alpha:0.3396},0).wait(1).to({alpha:0.3208},0).wait(1).to({alpha:0.3019},0).wait(1).to({alpha:0.283},0).wait(1).to({alpha:0.2642},0).wait(1).to({alpha:0.2453},0).wait(1).to({alpha:0.2264},0).wait(1).to({alpha:0.2075},0).wait(1).to({alpha:0.1887},0).wait(1).to({alpha:0.1698},0).wait(1).to({alpha:0.1509},0).wait(1).to({alpha:0.1321},0).wait(1).to({alpha:0.1132},0).wait(1).to({alpha:0.0943},0).wait(1).to({alpha:0.0755},0).wait(1).to({alpha:0.0566},0).wait(1).to({alpha:0.0377},0).wait(1).to({alpha:0.0189},0).wait(1).to({alpha:0},0).wait(14));

}).prototype = p = new cjs.MovieClip();


(lib.Scene_1_nubes2 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// nubes2
	this.instance = new lib.Symbol33();
	this.instance.parent = this;
	this.instance.setTransform(1580.7,-200.1,1,1,0,0,0,538.7,271.9);
	this.instance.alpha = 0.5195;
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(214).to({_off:false},0).wait(1).to({scaleX:1.0085,scaleY:1.0085,x:1571.85,y:-195.8,alpha:0.5272},0).wait(1).to({scaleX:1.0171,scaleY:1.0171,x:1563.05,y:-191.45,alpha:0.5343},0).wait(1).to({scaleX:1.0256,scaleY:1.0256,x:1554.2,y:-187.2,alpha:0.5415},0).wait(1).to({scaleX:1.0341,scaleY:1.0341,x:1545.4,y:-182.85,alpha:0.5487},0).wait(1).to({scaleX:1.0427,scaleY:1.0427,x:1536.55,y:-178.6,alpha:0.5558},0).wait(1).to({scaleX:1.0512,scaleY:1.0512,x:1527.75,y:-174.3,alpha:0.563},0).wait(1).to({scaleX:1.0598,scaleY:1.0598,x:1518.9,y:-170,alpha:0.5701},0).wait(1).to({scaleX:1.0683,scaleY:1.0683,x:1510.1,y:-165.7,alpha:0.5773},0).wait(1).to({scaleX:1.0768,scaleY:1.0768,x:1501.25,y:-161.35,alpha:0.5845},0).wait(1).to({scaleX:1.0854,scaleY:1.0854,x:1492.45,y:-157.1,alpha:0.5916},0).wait(1).to({scaleX:1.0939,scaleY:1.0939,x:1483.6,y:-152.75,alpha:0.5988},0).wait(1).to({scaleX:1.1024,scaleY:1.1024,x:1474.8,y:-148.5,alpha:0.606},0).wait(1).to({scaleX:1.111,scaleY:1.111,x:1465.95,y:-144.2,alpha:0.6131},0).wait(1).to({scaleX:1.1195,scaleY:1.1195,x:1457.15,y:-139.9,alpha:0.6203},0).wait(1).to({scaleX:1.128,scaleY:1.128,x:1448.3,y:-135.6,alpha:0.6275},0).wait(1).to({scaleX:1.1366,scaleY:1.1366,x:1439.45,y:-131.25,alpha:0.6346},0).wait(1).to({scaleX:1.1451,scaleY:1.1451,x:1430.65,y:-127,alpha:0.6418},0).wait(1).to({scaleX:1.1537,scaleY:1.1537,x:1421.8,y:-122.7,alpha:0.649},0).wait(1).to({scaleX:1.1622,scaleY:1.1622,x:1413,y:-118.4,alpha:0.6561},0).wait(1).to({scaleX:1.1707,scaleY:1.1707,x:1404.15,y:-114.1,alpha:0.6633},0).wait(1).to({scaleX:1.1793,scaleY:1.1793,x:1395.35,y:-109.8,alpha:0.6704},0).wait(1).to({scaleX:1.1878,scaleY:1.1878,x:1386.5,y:-105.5,alpha:0.6776},0).wait(1).to({scaleX:1.1963,scaleY:1.1963,x:1377.7,y:-101.15,alpha:0.6848},0).wait(1).to({scaleX:1.2049,scaleY:1.2049,x:1368.9,y:-96.9,alpha:0.6919},0).wait(1).to({scaleX:1.2134,scaleY:1.2134,x:1360.05,y:-92.6,alpha:0.6991},0).wait(1).to({scaleX:1.2219,scaleY:1.2219,x:1351.2,y:-88.3,alpha:0.7063},0).wait(1).to({scaleX:1.2305,scaleY:1.2305,x:1342.4,y:-84,alpha:0.7134},0).wait(1).to({scaleX:1.239,scaleY:1.239,x:1333.6,y:-79.7,alpha:0.7206},0).wait(1).to({scaleX:1.2476,scaleY:1.2476,x:1324.75,y:-75.4,alpha:0.7278},0).wait(1).to({scaleX:1.2561,scaleY:1.2561,x:1315.95,y:-71.05,alpha:0.7349},0).wait(1).to({scaleX:1.2646,scaleY:1.2646,x:1307.1,y:-66.8,alpha:0.7421},0).wait(1).to({scaleX:1.2732,scaleY:1.2732,x:1298.3,y:-62.5,alpha:0.7493},0).wait(1).to({scaleX:1.2817,scaleY:1.2817,x:1289.45,y:-58.2,alpha:0.7564},0).wait(1).to({scaleX:1.2902,scaleY:1.2902,x:1280.65,y:-53.9,alpha:0.7636},0).wait(1).to({scaleX:1.2988,scaleY:1.2988,x:1271.8,y:-49.6,alpha:0.7707},0).wait(1).to({scaleX:1.3073,scaleY:1.3073,x:1263,y:-45.3,alpha:0.7779},0).wait(1).to({scaleX:1.3158,scaleY:1.3158,x:1254.15,y:-40.95,alpha:0.7851},0).wait(1).to({scaleX:1.3244,scaleY:1.3244,x:1245.35,y:-36.7,alpha:0.7922},0).wait(1).to({scaleX:1.3329,scaleY:1.3329,x:1236.5,y:-32.4,alpha:0.7994},0).wait(1).to({scaleX:1.3415,scaleY:1.3415,x:1227.7,y:-28.1,alpha:0.8066},0).wait(1).to({scaleX:1.35,scaleY:1.35,x:1218.9,y:-23.8,alpha:0.8137},0).wait(1).to({scaleX:1.3585,scaleY:1.3585,x:1210.05,y:-19.5,alpha:0.8209},0).wait(1).to({scaleX:1.3671,scaleY:1.3671,x:1201.25,y:-15.2,alpha:0.8281},0).wait(1).to({scaleX:1.3756,scaleY:1.3756,x:1192.4,y:-10.9,alpha:0.8352},0).wait(1).to({scaleX:1.3841,scaleY:1.3841,x:1183.6,y:-6.6,alpha:0.8424},0).wait(1).to({scaleX:1.3927,scaleY:1.3927,x:1174.7,y:-2.3,alpha:0.8496},0).wait(1).to({scaleX:1.4012,scaleY:1.4012,x:1165.95,y:2,alpha:0.8567},0).wait(1).to({scaleX:1.4097,scaleY:1.4097,x:1157.05,y:6.3,alpha:0.8639},0).wait(1).to({scaleX:1.4183,scaleY:1.4183,x:1148.25,y:10.6,alpha:0.871},0).wait(1).to({scaleX:1.4268,scaleY:1.4268,x:1139.4,y:14.9,alpha:0.8782},0).wait(1).to({scaleX:1.4353,scaleY:1.4353,x:1130.6,y:19.2,alpha:0.8854},0).wait(1).to({scaleX:1.4439,scaleY:1.4439,x:1121.75,y:23.5,alpha:0.8925},0).wait(1).to({scaleX:1.4524,scaleY:1.4524,x:1112.95,y:27.8,alpha:0.8997},0).wait(1).to({scaleX:1.461,scaleY:1.461,x:1104.15,y:32.1,alpha:0.9069},0).wait(1).to({scaleX:1.4695,scaleY:1.4695,x:1095.3,y:36.4,alpha:0.914},0).wait(1).to({scaleX:1.478,scaleY:1.478,x:1086.5,y:40.7,alpha:0.9212},0).wait(1).to({scaleX:1.4866,scaleY:1.4866,x:1077.65,y:45,alpha:0.9284},0).wait(1).to({scaleX:1.4951,scaleY:1.4951,x:1068.85,y:49.3,alpha:0.9355},0).wait(1).to({scaleX:1.5036,scaleY:1.5036,x:1060,y:53.6,alpha:0.9427},0).wait(1).to({scaleX:1.5122,scaleY:1.5122,x:1051.2,y:57.9,alpha:0.9499},0).wait(1).to({scaleX:1.5207,scaleY:1.5207,x:1042.35,y:62.2,alpha:0.957},0).wait(1).to({scaleX:1.5292,scaleY:1.5292,x:1033.55,y:66.5,alpha:0.9642},0).wait(1).to({scaleX:1.5378,scaleY:1.5378,x:1024.7,y:70.75,alpha:0.9713},0).wait(1).to({scaleX:1.5463,scaleY:1.5463,x:1015.9,y:75.1,alpha:0.9785},0).wait(1).to({scaleX:1.5549,scaleY:1.5549,x:1007.1,y:79.4,alpha:0.9857},0).wait(1).to({scaleX:1.5634,scaleY:1.5634,x:998.25,y:83.7,alpha:0.9928},0).wait(1).to({scaleX:1.5719,scaleY:1.5719,x:989.45,y:88,alpha:1},0).wait(1).to({alpha:0.9811},0).wait(1).to({alpha:0.9623},0).wait(1).to({alpha:0.9434},0).wait(1).to({alpha:0.9245},0).wait(1).to({alpha:0.9057},0).wait(1).to({alpha:0.8868},0).wait(1).to({alpha:0.8679},0).wait(1).to({alpha:0.8491},0).wait(1).to({alpha:0.8302},0).wait(1).to({alpha:0.8113},0).wait(1).to({alpha:0.7925},0).wait(1).to({alpha:0.7736},0).wait(1).to({alpha:0.7547},0).wait(1).to({alpha:0.7358},0).wait(1).to({alpha:0.717},0).wait(1).to({alpha:0.6981},0).wait(1).to({alpha:0.6792},0).wait(1).to({alpha:0.6604},0).wait(1).to({alpha:0.6415},0).wait(1).to({alpha:0.6226},0).wait(1).to({alpha:0.6038},0).wait(1).to({alpha:0.5849},0).wait(1).to({alpha:0.566},0).wait(1).to({alpha:0.5472},0).wait(1).to({alpha:0.5283},0).wait(1).to({alpha:0.5094},0).wait(1).to({alpha:0.4906},0).wait(1).to({alpha:0.4717},0).wait(1).to({alpha:0.4528},0).wait(1).to({alpha:0.434},0).wait(1).to({alpha:0.4151},0).wait(1).to({alpha:0.3962},0).wait(1).to({alpha:0.3774},0).wait(1).to({alpha:0.3585},0).wait(1).to({alpha:0.3396},0).wait(1).to({alpha:0.3208},0).wait(1).to({alpha:0.3019},0).wait(1).to({alpha:0.283},0).wait(1).to({alpha:0.2642},0).wait(1).to({alpha:0.2453},0).wait(1).to({alpha:0.2264},0).wait(1).to({alpha:0.2075},0).wait(1).to({alpha:0.1887},0).wait(1).to({alpha:0.1698},0).wait(1).to({alpha:0.1509},0).wait(1).to({alpha:0.1321},0).wait(1).to({alpha:0.1132},0).wait(1).to({alpha:0.0943},0).wait(1).to({alpha:0.0755},0).wait(1).to({alpha:0.0566},0).wait(1).to({alpha:0.0377},0).wait(1).to({alpha:0.0189},0).wait(1).to({alpha:0},0).wait(14));

}).prototype = p = new cjs.MovieClip();


(lib.Scene_1_nubes1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// nubes1
	this.instance = new lib.Symbol44();
	this.instance.parent = this;
	this.instance.setTransform(1512.6,827.9,1,1,0,0,0,443.6,223.9);
	this.instance.alpha = 0.3398;
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(214).to({_off:false},0).wait(1).to({regX:443.5,scaleX:1.0097,scaleY:1.0097,x:1502.7,y:823,alpha:0.3499},0).wait(1).to({scaleX:1.0194,scaleY:1.0194,x:1492.9,y:818.2,alpha:0.3597},0).wait(1).to({scaleX:1.0291,scaleY:1.0291,x:1483.1,y:813.35,alpha:0.3696},0).wait(1).to({scaleX:1.0388,scaleY:1.0388,x:1473.3,y:808.55,alpha:0.3794},0).wait(1).to({scaleX:1.0485,scaleY:1.0485,x:1463.5,y:803.7,alpha:0.3893},0).wait(1).to({scaleX:1.0582,scaleY:1.0582,x:1453.75,y:798.85,alpha:0.3991},0).wait(1).to({scaleX:1.0679,scaleY:1.0679,x:1443.95,y:794.05,alpha:0.409},0).wait(1).to({scaleX:1.0776,scaleY:1.0776,x:1434.15,y:789.15,alpha:0.4188},0).wait(1).to({scaleX:1.0873,scaleY:1.0873,x:1424.35,y:784.35,alpha:0.4287},0).wait(1).to({scaleX:1.0969,scaleY:1.0969,x:1414.55,y:779.5,alpha:0.4385},0).wait(1).to({scaleX:1.1066,scaleY:1.1066,x:1404.75,y:774.65,alpha:0.4484},0).wait(1).to({scaleX:1.1163,scaleY:1.1163,x:1394.95,y:769.85,alpha:0.4582},0).wait(1).to({scaleX:1.126,scaleY:1.126,x:1385.15,y:765,alpha:0.4681},0).wait(1).to({scaleX:1.1357,scaleY:1.1357,x:1375.4,y:760.2,alpha:0.4779},0).wait(1).to({scaleX:1.1454,scaleY:1.1454,x:1365.6,y:755.3,alpha:0.4878},0).wait(1).to({scaleX:1.1551,scaleY:1.1551,x:1355.8,y:750.5,alpha:0.4976},0).wait(1).to({scaleX:1.1648,scaleY:1.1648,x:1346,y:745.65,alpha:0.5075},0).wait(1).to({scaleX:1.1745,scaleY:1.1745,x:1336.2,y:740.8,alpha:0.5173},0).wait(1).to({scaleX:1.1842,scaleY:1.1842,x:1326.4,y:736,alpha:0.5272},0).wait(1).to({scaleX:1.1939,scaleY:1.1939,x:1316.6,y:731.15,alpha:0.537},0).wait(1).to({scaleX:1.2036,scaleY:1.2036,x:1306.85,y:726.3,alpha:0.5469},0).wait(1).to({scaleX:1.2133,scaleY:1.2133,x:1297.05,y:721.45,alpha:0.5567},0).wait(1).to({scaleX:1.223,scaleY:1.223,x:1287.25,y:716.6,alpha:0.5666},0).wait(1).to({scaleX:1.2327,scaleY:1.2327,x:1277.45,y:711.8,alpha:0.5764},0).wait(1).to({scaleX:1.2424,scaleY:1.2424,x:1267.65,y:706.95,alpha:0.5863},0).wait(1).to({scaleX:1.2521,scaleY:1.2521,x:1257.85,y:702.15,alpha:0.5961},0).wait(1).to({scaleX:1.2618,scaleY:1.2618,x:1248.1,y:697.3,alpha:0.606},0).wait(1).to({scaleX:1.2714,scaleY:1.2714,x:1238.3,y:692.5,alpha:0.6158},0).wait(1).to({scaleX:1.2811,scaleY:1.2811,x:1228.5,y:687.6,alpha:0.6257},0).wait(1).to({scaleX:1.2908,scaleY:1.2908,x:1218.7,y:682.75,alpha:0.6355},0).wait(1).to({scaleX:1.3005,scaleY:1.3005,x:1208.9,y:677.95,alpha:0.6454},0).wait(1).to({scaleX:1.3102,scaleY:1.3102,x:1199.1,y:673.1,alpha:0.6552},0).wait(1).to({scaleX:1.3199,scaleY:1.3199,x:1189.35,y:668.3,alpha:0.6651},0).wait(1).to({scaleX:1.3296,scaleY:1.3296,x:1179.55,y:663.45,alpha:0.6749},0).wait(1).to({scaleX:1.3393,scaleY:1.3393,x:1169.75,y:658.6,alpha:0.6848},0).wait(1).to({scaleX:1.349,scaleY:1.349,x:1159.95,y:653.75,alpha:0.6946},0).wait(1).to({scaleX:1.3587,scaleY:1.3587,x:1150.15,y:648.9,alpha:0.7045},0).wait(1).to({scaleX:1.3684,scaleY:1.3684,x:1140.35,y:644.1,alpha:0.7143},0).wait(1).to({scaleX:1.3781,scaleY:1.3781,x:1130.55,y:639.25,alpha:0.7242},0).wait(1).to({scaleX:1.3878,scaleY:1.3878,x:1120.75,y:634.4,alpha:0.734},0).wait(1).to({scaleX:1.3975,scaleY:1.3975,x:1111,y:629.6,alpha:0.7439},0).wait(1).to({scaleX:1.4072,scaleY:1.4072,x:1101.2,y:624.7,alpha:0.7537},0).wait(1).to({scaleX:1.4169,scaleY:1.4169,x:1091.4,y:619.9,alpha:0.7636},0).wait(1).to({scaleX:1.4266,scaleY:1.4266,x:1081.6,y:615.05,alpha:0.7734},0).wait(1).to({scaleX:1.4363,scaleY:1.4363,x:1071.8,y:610.25,alpha:0.7833},0).wait(1).to({scaleX:1.446,scaleY:1.446,x:1061.95,y:605.4,alpha:0.7931},0).wait(1).to({scaleX:1.4556,scaleY:1.4556,x:1052.2,y:600.55,alpha:0.803},0).wait(1).to({scaleX:1.4653,scaleY:1.4653,x:1042.4,y:595.75,alpha:0.8128},0).wait(1).to({scaleX:1.475,scaleY:1.475,x:1032.65,y:590.85,alpha:0.8227},0).wait(1).to({scaleX:1.4847,scaleY:1.4847,x:1022.85,y:586.05,alpha:0.8325},0).wait(1).to({scaleX:1.4944,scaleY:1.4944,x:1013,y:581.2,alpha:0.8424},0).wait(1).to({scaleX:1.5041,scaleY:1.5041,x:1003.25,y:576.35,alpha:0.8522},0).wait(1).to({scaleX:1.5138,scaleY:1.5138,x:993.45,y:571.55,alpha:0.8621},0).wait(1).to({scaleX:1.5235,scaleY:1.5235,x:983.65,y:566.7,alpha:0.8719},0).wait(1).to({scaleX:1.5332,scaleY:1.5332,x:973.9,y:561.9,alpha:0.8818},0).wait(1).to({scaleX:1.5429,scaleY:1.5429,x:964.05,y:557.05,alpha:0.8916},0).wait(1).to({scaleX:1.5526,scaleY:1.5526,x:954.25,y:552.15,alpha:0.9015},0).wait(1).to({scaleX:1.5623,scaleY:1.5623,x:944.45,y:547.35,alpha:0.9113},0).wait(1).to({scaleX:1.572,scaleY:1.572,x:934.65,y:542.5,alpha:0.9212},0).wait(1).to({scaleX:1.5817,scaleY:1.5817,x:924.85,y:537.7,alpha:0.931},0).wait(1).to({scaleX:1.5914,scaleY:1.5914,x:915.1,y:532.85,alpha:0.9409},0).wait(1).to({scaleX:1.6011,scaleY:1.6011,x:905.3,y:528.05,alpha:0.9507},0).wait(1).to({scaleX:1.6108,scaleY:1.6108,x:895.5,y:523.15,alpha:0.9606},0).wait(1).to({scaleX:1.6205,scaleY:1.6205,x:885.7,y:518.3,alpha:0.9704},0).wait(1).to({scaleX:1.6302,scaleY:1.6302,x:875.9,y:513.5,alpha:0.9803},0).wait(1).to({scaleX:1.6398,scaleY:1.6398,x:866.1,y:508.65,alpha:0.9901},0).wait(1).to({scaleX:1.6495,scaleY:1.6495,x:856.3,y:503.85,alpha:1},0).wait(1).to({alpha:0.9811},0).wait(1).to({alpha:0.9623},0).wait(1).to({alpha:0.9434},0).wait(1).to({alpha:0.9245},0).wait(1).to({alpha:0.9057},0).wait(1).to({alpha:0.8868},0).wait(1).to({alpha:0.8679},0).wait(1).to({alpha:0.8491},0).wait(1).to({alpha:0.8302},0).wait(1).to({alpha:0.8113},0).wait(1).to({alpha:0.7925},0).wait(1).to({alpha:0.7736},0).wait(1).to({alpha:0.7547},0).wait(1).to({alpha:0.7358},0).wait(1).to({alpha:0.717},0).wait(1).to({alpha:0.6981},0).wait(1).to({alpha:0.6792},0).wait(1).to({alpha:0.6604},0).wait(1).to({alpha:0.6415},0).wait(1).to({alpha:0.6226},0).wait(1).to({alpha:0.6038},0).wait(1).to({alpha:0.5849},0).wait(1).to({alpha:0.566},0).wait(1).to({alpha:0.5472},0).wait(1).to({alpha:0.5283},0).wait(1).to({alpha:0.5094},0).wait(1).to({alpha:0.4906},0).wait(1).to({alpha:0.4717},0).wait(1).to({alpha:0.4528},0).wait(1).to({alpha:0.434},0).wait(1).to({alpha:0.4151},0).wait(1).to({alpha:0.3962},0).wait(1).to({alpha:0.3774},0).wait(1).to({alpha:0.3585},0).wait(1).to({alpha:0.3396},0).wait(1).to({alpha:0.3208},0).wait(1).to({alpha:0.3019},0).wait(1).to({alpha:0.283},0).wait(1).to({alpha:0.2642},0).wait(1).to({alpha:0.2453},0).wait(1).to({alpha:0.2264},0).wait(1).to({alpha:0.2075},0).wait(1).to({alpha:0.1887},0).wait(1).to({alpha:0.1698},0).wait(1).to({alpha:0.1509},0).wait(1).to({alpha:0.1321},0).wait(1).to({alpha:0.1132},0).wait(1).to({alpha:0.0943},0).wait(1).to({alpha:0.0755},0).wait(1).to({alpha:0.0566},0).wait(1).to({alpha:0.0377},0).wait(1).to({alpha:0.0189},0).wait(1).to({alpha:0},0).wait(14));

}).prototype = p = new cjs.MovieClip();


(lib.Scene_1_boton = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// boton
	this.button_1 = new lib.boton1();
	this.button_1.name = "button_1";
	this.button_1.parent = this;
	this.button_1.setTransform(639,342,1,1,0,0,0,295,295);
	new cjs.ButtonHelper(this.button_1, 0, 1, 2);

	this.instance = new lib.CachedTexturedBitmap_7();
	this.instance.parent = this;
	this.instance.setTransform(767.75,479.65,0.5,0.5);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[]}).to({state:[{t:this.instance},{t:this.button_1}]},280).wait(68));

}).prototype = p = new cjs.MovieClip();


(lib.SymTierra = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1 = new lib.SymTierra_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(807.9,403.9,1,1,0,0,0,807.9,403.9);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.SymTierra, new cjs.Rectangle(0,0,1615.8,807.9), null);


(lib.SymNubes = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1 = new lib.SymNubes_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(1000,500,1,1,0,0,0,1000,500);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.SymNubes, new cjs.Rectangle(0,0,2000,1000), null);


(lib.SymEspacioBrillante = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1 = new lib.SymEspacioBrillante_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(1000,500,1,1,0,0,0,1000,500);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.SymEspacioBrillante, new cjs.Rectangle(0,0,2000,1000), null);


(lib.Symbol3_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1_1 = new lib.Symbol_3_Layer_1_1();
	this.Layer_1_1.name = "Layer_1_1";
	this.Layer_1_1.parent = this;
	this.Layer_1_1.setTransform(1952.2,976.1,1,1,0,0,0,1952.2,976.1);
	this.Layer_1_1.depth = 0;
	this.Layer_1_1.isAttachedToCamera = 0
	this.Layer_1_1.isAttachedToMask = 0
	this.Layer_1_1.layerDepth = 0
	this.Layer_1_1.layerIndex = 0
	this.Layer_1_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol3_1, new cjs.Rectangle(0,0,3904.5,1952.3), null);


(lib.Symbol2_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1_1 = new lib.Symbol_2_Layer_1_1();
	this.Layer_1_1.name = "Layer_1_1";
	this.Layer_1_1.parent = this;
	this.Layer_1_1.setTransform(2448.4,1224.2,1,1,0,0,0,2448.4,1224.2);
	this.Layer_1_1.depth = 0;
	this.Layer_1_1.isAttachedToCamera = 0
	this.Layer_1_1.isAttachedToMask = 0
	this.Layer_1_1.layerDepth = 0
	this.Layer_1_1.layerIndex = 0
	this.Layer_1_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol2_1, new cjs.Rectangle(0,0,4896.8,2448.4), null);


(lib.Symbol1_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1_obj_
	this.Layer_1_1 = new lib.Symbol_1_Layer_1_1();
	this.Layer_1_1.name = "Layer_1_1";
	this.Layer_1_1.parent = this;
	this.Layer_1_1.setTransform(2448.4,1224.2,1,1,0,0,0,2448.4,1224.2);
	this.Layer_1_1.depth = 0;
	this.Layer_1_1.isAttachedToCamera = 0
	this.Layer_1_1.isAttachedToMask = 0
	this.Layer_1_1.layerDepth = 0
	this.Layer_1_1.layerIndex = 0
	this.Layer_1_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Symbol1_1, new cjs.Rectangle(0,0,4896.8,2448.4), null);


(lib.AnimacionInicialconMotionFunction = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// estrellas
	this.instance = new lib.Symbol1();
	this.instance.parent = this;
	this.instance.setTransform(990.5,500,1,1,0,0,0,990.5,500);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1).to({alpha:0.9579},0).wait(1).to({alpha:0.9158},0).wait(1).to({alpha:0.8737},0).wait(1).to({alpha:0.8316},0).wait(1).to({alpha:0.7895},0).wait(1).to({alpha:0.7474},0).wait(1).to({alpha:0.7053},0).wait(1).to({alpha:0.6632},0).wait(1).to({alpha:0.6211},0).wait(1).to({alpha:0.5789},0).wait(1).to({alpha:0.5368},0).wait(1).to({alpha:0.4947},0).wait(1).to({alpha:0.4526},0).wait(1).to({alpha:0.4105},0).wait(1).to({alpha:0.3684},0).wait(1).to({alpha:0.3263},0).wait(1).to({alpha:0.2842},0).wait(1).to({alpha:0.2421},0).wait(1).to({alpha:0.2},0).wait(1).to({alpha:0.23},0).wait(1).to({alpha:0.26},0).wait(1).to({alpha:0.29},0).wait(1).to({alpha:0.32},0).wait(1).to({alpha:0.35},0).wait(1).to({alpha:0.38},0).wait(1).to({alpha:0.41},0).wait(1).to({alpha:0.44},0).wait(1).to({alpha:0.47},0).wait(1).to({alpha:0.5},0).wait(1).to({alpha:0.53},0).wait(1).to({alpha:0.56},0).wait(1).to({alpha:0.59},0).wait(1).to({alpha:0.62},0).wait(1).to({alpha:0.65},0).wait(1).to({alpha:0.68},0).wait(1).to({alpha:0.71},0).wait(1).to({alpha:0.74},0).wait(1).to({alpha:0.77},0).wait(1).to({alpha:0.8},0).wait(1).to({alpha:0.7785},0).wait(1).to({alpha:0.757},0).wait(1).to({alpha:0.7355},0).wait(1).to({alpha:0.714},0).wait(1).to({alpha:0.6925},0).wait(1).to({alpha:0.671},0).wait(1).to({alpha:0.6495},0).wait(1).to({alpha:0.628},0).wait(1).to({alpha:0.6065},0).wait(1).to({alpha:0.585},0).wait(1).to({alpha:0.5635},0).wait(1).to({alpha:0.542},0).wait(1).to({alpha:0.5205},0).wait(1).to({alpha:0.499},0).wait(1).to({alpha:0.4775},0).wait(1).to({alpha:0.456},0).wait(1).to({alpha:0.4345},0).wait(1).to({alpha:0.413},0).wait(1).to({alpha:0.3915},0).wait(1).to({alpha:0.37},0).wait(1).to({alpha:0.393},0).wait(1).to({alpha:0.416},0).wait(1).to({alpha:0.439},0).wait(1).to({alpha:0.462},0).wait(1).to({alpha:0.485},0).wait(1).to({alpha:0.508},0).wait(1).to({alpha:0.531},0).wait(1).to({alpha:0.554},0).wait(1).to({alpha:0.577},0).wait(1).to({alpha:0.6},0).wait(1).to({alpha:0.623},0).wait(1).to({alpha:0.646},0).wait(1).to({alpha:0.669},0).wait(1).to({alpha:0.692},0).wait(1).to({alpha:0.715},0).wait(1).to({alpha:0.738},0).wait(1).to({alpha:0.761},0).wait(1).to({alpha:0.784},0).wait(1).to({alpha:0.807},0).wait(1).to({alpha:0.83},0).wait(1).to({alpha:0.804},0).wait(1).to({alpha:0.778},0).wait(1).to({alpha:0.752},0).wait(1).to({alpha:0.726},0).wait(1).to({alpha:0.7},0).wait(1).to({alpha:0.674},0).wait(1).to({alpha:0.648},0).wait(1).to({alpha:0.622},0).wait(1).to({alpha:0.596},0).wait(1).to({alpha:0.57},0).wait(1).to({alpha:0.544},0).wait(1).to({alpha:0.518},0).wait(1).to({alpha:0.492},0).wait(1).to({alpha:0.466},0).wait(1).to({alpha:0.44},0).wait(1).to({alpha:0.414},0).wait(1).to({alpha:0.388},0).wait(1).to({alpha:0.362},0).wait(1).to({alpha:0.336},0).wait(1).to({alpha:0.31},0).wait(1).to({alpha:0.335},0).wait(1).to({alpha:0.36},0).wait(1).to({alpha:0.385},0).wait(1).to({alpha:0.41},0).wait(1).to({alpha:0.435},0).wait(1).to({alpha:0.46},0).wait(1).to({alpha:0.485},0).wait(1).to({alpha:0.51},0).wait(1).to({alpha:0.535},0).wait(1).to({alpha:0.56},0).wait(1).to({alpha:0.585},0).wait(1).to({alpha:0.61},0).wait(1).to({alpha:0.635},0).wait(1).to({alpha:0.66},0).wait(1).to({alpha:0.685},0).wait(1).to({alpha:0.71},0).wait(1).to({alpha:0.735},0).wait(1).to({alpha:0.76},0).wait(1).to({alpha:0.785},0).wait(1).to({alpha:0.81},0).wait(1).to({alpha:0.7795},0).wait(1).to({alpha:0.749},0).wait(1).to({alpha:0.7185},0).wait(1).to({alpha:0.688},0).wait(1).to({alpha:0.6575},0).wait(1).to({alpha:0.627},0).wait(1).to({alpha:0.5965},0).wait(1).to({alpha:0.566},0).wait(1).to({alpha:0.5355},0).wait(1).to({alpha:0.505},0).wait(1).to({alpha:0.4745},0).wait(1).to({alpha:0.444},0).wait(1).to({alpha:0.4135},0).wait(1).to({alpha:0.383},0).wait(1).to({alpha:0.3525},0).wait(1).to({alpha:0.322},0).wait(1).to({alpha:0.2915},0).wait(1).to({alpha:0.261},0).wait(1).to({alpha:0.2305},0).wait(1).to({alpha:0.2},0).wait(1).to({alpha:0.23},0).wait(1).to({alpha:0.26},0).wait(1).to({alpha:0.29},0).wait(1).to({alpha:0.32},0).wait(1).to({alpha:0.35},0).wait(1).to({alpha:0.38},0).wait(1).to({alpha:0.41},0).wait(1).to({alpha:0.44},0).wait(1).to({alpha:0.47},0).wait(1).to({alpha:0.5},0).wait(1).to({alpha:0.53},0).wait(1).to({alpha:0.56},0).wait(1).to({alpha:0.59},0).wait(1).to({alpha:0.62},0).wait(1).to({alpha:0.65},0).wait(1).to({alpha:0.68},0).wait(1).to({alpha:0.71},0).wait(1).to({alpha:0.74},0).wait(1).to({alpha:0.77},0).wait(1).to({alpha:0.8},0).wait(1).to({alpha:0.7715},0).wait(1).to({alpha:0.743},0).wait(1).to({alpha:0.7145},0).wait(1).to({alpha:0.686},0).wait(1).to({alpha:0.6575},0).wait(1).to({alpha:0.629},0).wait(1).to({alpha:0.6005},0).wait(1).to({alpha:0.572},0).wait(1).to({alpha:0.5435},0).wait(1).to({alpha:0.515},0).wait(1).to({alpha:0.4865},0).wait(1).to({alpha:0.458},0).wait(1).to({alpha:0.4295},0).wait(1).to({alpha:0.401},0).wait(1).to({alpha:0.3725},0).wait(1).to({alpha:0.344},0).wait(1).to({alpha:0.3155},0).wait(1).to({alpha:0.287},0).wait(1).to({alpha:0.2585},0).wait(1).to({alpha:0.23},0).wait(1).to({alpha:0.2625},0).wait(1).to({alpha:0.295},0).wait(1).to({alpha:0.3275},0).wait(1).to({alpha:0.36},0).wait(1).to({alpha:0.3925},0).wait(1).to({alpha:0.425},0).wait(1).to({alpha:0.4575},0).wait(1).to({alpha:0.49},0).wait(1).to({alpha:0.5225},0).wait(1).to({alpha:0.555},0).wait(1).to({alpha:0.5875},0).wait(1).to({alpha:0.62},0).wait(1).to({alpha:0.6525},0).wait(1).to({alpha:0.685},0).wait(1).to({alpha:0.7175},0).wait(1).to({alpha:0.75},0).wait(1).to({alpha:0.7825},0).wait(1).to({alpha:0.815},0).wait(1).to({alpha:0.8475},0).wait(1).to({alpha:0.88},0).wait(1).to({alpha:0.8475},0).wait(1).to({alpha:0.815},0).wait(1).to({alpha:0.7825},0).wait(1).to({alpha:0.75},0).wait(1).to({alpha:0.7175},0).wait(1).to({alpha:0.685},0).wait(1).to({alpha:0.6525},0).wait(1).to({alpha:0.62},0).wait(1).to({alpha:0.5875},0).wait(1).to({alpha:0.555},0).wait(1).to({alpha:0.5225},0).wait(1).to({alpha:0.49},0).wait(1).to({alpha:0.4575},0).wait(1).to({alpha:0.425},0).wait(1).to({alpha:0.3925},0).wait(1).to({alpha:0.36},0).wait(1).to({alpha:0.3275},0).wait(1).to({alpha:0.295},0).wait(1).to({alpha:0.2625},0).wait(1).to({alpha:0.23},0).wait(1).to({alpha:0.263},0).wait(1).to({alpha:0.296},0).wait(1).to({alpha:0.329},0).wait(1).to({alpha:0.362},0).wait(1).to({alpha:0.395},0).wait(1).to({alpha:0.428},0).wait(1).to({alpha:0.461},0).wait(1).to({alpha:0.494},0).wait(1).to({alpha:0.527},0).wait(1).to({alpha:0.56},0).wait(1).to({alpha:0.593},0).wait(1).to({alpha:0.626},0).wait(1).to({alpha:0.659},0).wait(1).to({alpha:0.692},0).wait(1).to({alpha:0.725},0).wait(1).to({alpha:0.758},0).wait(1).to({alpha:0.791},0).wait(1).to({alpha:0.824},0).wait(1).to({alpha:0.857},0).wait(1).to({alpha:0.89},0).wait(1).to({alpha:0.8612},0).wait(1).to({alpha:0.8325},0).wait(1).to({alpha:0.8037},0).wait(1).to({alpha:0.775},0).wait(1).to({alpha:0.7462},0).wait(1).to({alpha:0.7175},0).wait(1).to({alpha:0.6888},0).wait(1).to({alpha:0.66},0).wait(1).to({alpha:0.6313},0).wait(1).to({alpha:0.6025},0).wait(1).to({alpha:0.5738},0).wait(1).to({alpha:0.545},0).wait(1).to({alpha:0.5163},0).wait(1).to({alpha:0.4875},0).wait(1).to({alpha:0.4588},0).wait(1).to({alpha:0.43},0).wait(1).to({alpha:0.4013},0).wait(1).to({alpha:0.3725},0).wait(1).to({alpha:0.3438},0).wait(1).to({alpha:0.315},0).wait(1).to({alpha:0.2863},0).wait(1).to({alpha:0.2575},0).wait(1).to({alpha:0.2288},0).wait(1).to({alpha:0.2},0).wait(1).to({alpha:0.2254},0).wait(1).to({alpha:0.2508},0).wait(1).to({alpha:0.2763},0).wait(1).to({alpha:0.3017},0).wait(1).to({alpha:0.3271},0).wait(1).to({alpha:0.3525},0).wait(1).to({alpha:0.3779},0).wait(1).to({alpha:0.4033},0).wait(1).to({alpha:0.4288},0).wait(1).to({alpha:0.4542},0).wait(1).to({alpha:0.4796},0).wait(1).to({alpha:0.505},0).wait(1).to({alpha:0.5304},0).wait(1).to({alpha:0.5558},0).wait(1).to({alpha:0.5813},0).wait(1).to({alpha:0.6067},0).wait(1).to({alpha:0.6321},0).wait(1).to({alpha:0.6575},0).wait(1).to({alpha:0.6829},0).wait(1).to({alpha:0.7083},0).wait(1).to({alpha:0.7337},0).wait(1).to({alpha:0.7592},0).wait(1).to({alpha:0.7846},0).wait(1).to({alpha:0.81},0).wait(1));

	// espacio
	this.instance_1 = new lib.espacio();
	this.instance_1.parent = this;

	this.timeline.addTween(cjs.Tween.get(this.instance_1).wait(288));

	// nubescompletas
	this.instance_2 = new lib.Symbol2();
	this.instance_2.parent = this;
	this.instance_2.setTransform(2314.5,500,1,1,0,0,0,1594.5,500);

	this.timeline.addTween(cjs.Tween.get(this.instance_2).wait(1).to({x:2292.4},0).wait(1).to({x:2270.3},0).wait(1).to({x:2248.2},0).wait(1).to({x:2226.1},0).wait(1).to({x:2204.05},0).wait(1).to({x:2181.95},0).wait(1).to({x:2159.85},0).wait(1).to({x:2137.75},0).wait(1).to({x:2115.65},0).wait(1).to({x:2093.6},0).wait(1).to({x:2071.5},0).wait(1).to({x:2049.4},0).wait(1).to({x:2027.3},0).wait(1).to({x:2005.25},0).wait(1).to({x:1983.15},0).wait(1).to({x:1961.05},0).wait(1).to({x:1938.95},0).wait(1).to({x:1916.85},0).wait(1).to({x:1894.8},0).wait(1).to({x:1872.7},0).wait(1).to({x:1850.6},0).wait(1).to({x:1828.5},0).wait(1).to({x:1806.45},0).wait(1).to({x:1795.95},0).wait(1).to({x:1785.45},0).wait(1).to({x:1774.95},0).wait(1).to({x:1764.45},0).wait(1).to({x:1753.95},0).wait(1).to({x:1743.45},0).wait(1).to({x:1732.95},0).wait(1).to({x:1722.45},0).wait(1).to({x:1711.95},0).wait(1).to({x:1701.45},0).wait(1).to({x:1690.95},0).wait(1).to({x:1680.45},0).wait(1).to({x:1669.95},0).wait(1).to({x:1659.45},0).wait(1).to({x:1648.95},0).wait(1).to({x:1638.45},0).wait(1).to({x:1627.95},0).wait(1).to({x:1617.45},0).wait(1).to({x:1606.95},0).wait(1).to({x:1596.45},0).wait(1).to({x:1586},0).wait(1).to({x:1575.5},0).wait(1).to({x:1565},0).wait(1).to({x:1554.5},0).wait(1).to({x:1547.45},0).wait(1).to({x:1540.4},0).wait(1).to({x:1533.35},0).wait(1).to({x:1526.3},0).wait(1).to({x:1519.3},0).wait(1).to({x:1512.25},0).wait(1).to({x:1505.2},0).wait(1).to({x:1498.15},0).wait(1).to({x:1491.1},0).wait(1).to({x:1484.05},0).wait(1).to({x:1477.05},0).wait(1).to({x:1470},0).wait(1).to({x:1462.95},0).wait(1).to({x:1455.9},0).wait(1).to({x:1448.85},0).wait(1).to({x:1441.8},0).wait(1).to({x:1434.8},0).wait(1).to({x:1427.75},0).wait(1).to({x:1420.7},0).wait(1).to({x:1413.65},0).wait(1).to({x:1406.6},0).wait(1).to({x:1399.55},0).wait(1).to({x:1392.55},0).wait(1).to({x:1385.5},0).wait(1).to({x:1380.2},0).wait(1).to({x:1374.9},0).wait(1).to({x:1369.6},0).wait(1).to({x:1364.3},0).wait(1).to({x:1359.05},0).wait(1).to({x:1353.75},0).wait(1).to({x:1348.45},0).wait(1).to({x:1343.15},0).wait(1).to({x:1337.85},0).wait(1).to({x:1332.55},0).wait(1).to({x:1327.25},0).wait(1).to({x:1322},0).wait(1).to({x:1316.7},0).wait(1).to({x:1311.4},0).wait(1).to({x:1306.1},0).wait(1).to({x:1300.8},0).wait(1).to({x:1295.5},0).wait(1).to({x:1290.25},0).wait(1).to({x:1284.95},0).wait(1).to({x:1279.65},0).wait(1).to({x:1274.35},0).wait(1).to({x:1269.05},0).wait(1).to({x:1263.75},0).wait(1).to({x:1258.45},0).wait(1).to({x:1254.25},0).wait(1).to({x:1250.05},0).wait(1).to({x:1245.85},0).wait(1).to({x:1241.65},0).wait(1).to({x:1237.45},0).wait(1).to({x:1233.25},0).wait(1).to({x:1229},0).wait(1).to({x:1224.8},0).wait(1).to({x:1220.6},0).wait(1).to({x:1216.4},0).wait(1).to({x:1212.2},0).wait(1).to({x:1208},0).wait(1).to({x:1203.75},0).wait(1).to({x:1199.55},0).wait(1).to({x:1195.35},0).wait(1).to({x:1191.15},0).wait(1).to({x:1186.95},0).wait(1).to({x:1182.75},0).wait(1).to({x:1178.5},0).wait(1).to({x:1174.3},0).wait(1).to({x:1170.1},0).wait(1).to({x:1165.9},0).wait(1).to({x:1161.7},0).wait(1).to({x:1157.5},0).wait(1).to({x:1153.95},0).wait(1).to({x:1150.4},0).wait(1).to({x:1146.85},0).wait(1).to({x:1143.3},0).wait(1).to({x:1139.8},0).wait(1).to({x:1136.25},0).wait(1).to({x:1132.7},0).wait(1).to({x:1129.15},0).wait(1).to({x:1125.6},0).wait(1).to({x:1122.05},0).wait(1).to({x:1118.55},0).wait(1).to({x:1115},0).wait(1).to({x:1111.45},0).wait(1).to({x:1107.9},0).wait(1).to({x:1104.35},0).wait(1).to({x:1100.8},0).wait(1).to({x:1097.3},0).wait(1).to({x:1093.75},0).wait(1).to({x:1090.2},0).wait(1).to({x:1086.65},0).wait(1).to({x:1083.1},0).wait(1).to({x:1079.6},0).wait(1).to({x:1076.05},0).wait(1).to({x:1072.5},0).wait(1).to({x:1069.5},0).wait(1).to({x:1066.5},0).wait(1).to({x:1063.5},0).wait(1).to({x:1060.5},0).wait(1).to({x:1057.5},0).wait(1).to({x:1054.5},0).wait(1).to({x:1051.5},0).wait(1).to({x:1048.5},0).wait(1).to({x:1045.5},0).wait(1).to({x:1042.5},0).wait(1).to({x:1039.5},0).wait(1).to({x:1036.5},0).wait(1).to({x:1033.5},0).wait(1).to({x:1030.5},0).wait(1).to({x:1027.5},0).wait(1).to({x:1024.5},0).wait(1).to({x:1021.5},0).wait(1).to({x:1018.5},0).wait(1).to({x:1015.5},0).wait(1).to({x:1012.5},0).wait(1).to({x:1009.5},0).wait(1).to({x:1006.5},0).wait(1).to({x:1003.5},0).wait(1).to({x:1000.5},0).wait(1).to({x:997.85},0).wait(1).to({x:995.15},0).wait(1).to({x:992.5},0).wait(1).to({x:989.85},0).wait(1).to({x:987.15},0).wait(1).to({x:984.5},0).wait(1).to({x:981.85},0).wait(1).to({x:979.15},0).wait(1).to({x:976.5},0).wait(1).to({x:973.85},0).wait(1).to({x:971.15},0).wait(1).to({x:968.5},0).wait(1).to({x:965.8},0).wait(1).to({x:963.15},0).wait(1).to({x:960.5},0).wait(1).to({x:957.8},0).wait(1).to({x:955.15},0).wait(1).to({x:952.5},0).wait(1).to({x:949.8},0).wait(1).to({x:947.15},0).wait(1).to({x:944.5},0).wait(1).to({x:941.8},0).wait(1).to({x:939.15},0).wait(1).to({x:936.45},0).wait(1).to({x:934.15},0).wait(1).to({x:931.8},0).wait(1).to({x:929.5},0).wait(1).to({x:927.15},0).wait(1).to({x:924.8},0).wait(1).to({x:922.5},0).wait(1).to({x:920.15},0).wait(1).to({x:917.8},0).wait(1).to({x:915.5},0).wait(1).to({x:913.15},0).wait(1).to({x:910.8},0).wait(1).to({x:908.5},0).wait(1).to({x:906.15},0).wait(1).to({x:903.85},0).wait(1).to({x:901.5},0).wait(1).to({x:899.15},0).wait(1).to({x:896.85},0).wait(1).to({x:894.5},0).wait(1).to({x:892.15},0).wait(1).to({x:889.85},0).wait(1).to({x:887.5},0).wait(1).to({x:885.15},0).wait(1).to({x:882.85},0).wait(1).to({x:880.5},0).wait(1).to({x:878.4},0).wait(1).to({x:876.25},0).wait(1).to({x:874.15},0).wait(1).to({x:872},0).wait(1).to({x:869.9},0).wait(1).to({x:867.75},0).wait(1).to({x:865.65},0).wait(1).to({x:863.5},0).wait(1).to({x:861.4},0).wait(1).to({x:859.25},0).wait(1).to({x:857.15},0).wait(1).to({x:855},0).wait(1).to({x:852.9},0).wait(1).to({x:850.75},0).wait(1).to({x:848.65},0).wait(1).to({x:846.5},0).wait(1).to({x:844.4},0).wait(1).to({x:842.25},0).wait(1).to({x:840.15},0).wait(1).to({x:838},0).wait(1).to({x:835.9},0).wait(1).to({x:833.75},0).wait(1).to({x:831.65},0).wait(1).to({x:829.5},0).wait(1).to({x:827.25},0).wait(1).to({x:825},0).wait(1).to({x:822.75},0).wait(1).to({x:820.5},0).wait(1).to({x:818.25},0).wait(1).to({x:816},0).wait(1).to({x:813.75},0).wait(1).to({x:811.5},0).wait(1).to({x:809.25},0).wait(1).to({x:807},0).wait(1).to({x:804.75},0).wait(1).to({x:802.5},0).wait(1).to({x:800.25},0).wait(1).to({x:798},0).wait(1).to({x:795.75},0).wait(1).to({x:793.5},0).wait(1).to({x:791.25},0).wait(1).to({x:789},0).wait(1).to({x:786.75},0).wait(1).to({x:784.5},0).wait(1).to({x:782.25},0).wait(1).to({x:780},0).wait(1).to({x:777.75},0).wait(1).to({x:775.5},0).wait(1).to({x:773.25},0).wait(1).to({x:771},0).wait(1).to({x:768.75},0).wait(1).to({x:766.5},0).wait(1).to({x:764.25},0).wait(1).to({x:762},0).wait(1).to({x:759.75},0).wait(1).to({x:757.5},0).wait(1).to({x:755.25},0).wait(1).to({x:753},0).wait(1).to({x:750.75},0).wait(1).to({x:748.5},0).wait(1).to({x:746.25},0).wait(1).to({x:744},0).wait(1).to({x:741.75},0).wait(1).to({x:739.5},0).wait(1).to({x:737.25},0).wait(1).to({x:735},0).wait(1).to({x:732.75},0).wait(1).to({x:730.5},0).wait(1).to({x:728.25},0).wait(1).to({x:726},0).wait(1).to({x:723.75},0).wait(1).to({x:721.5},0).wait(1));

	// mapa
	this.instance_3 = new lib.Symbol3();
	this.instance_3.parent = this;
	this.instance_3.setTransform(2254.5,500,1,1,0,0,0,1594.5,500);

	this.timeline.addTween(cjs.Tween.get(this.instance_3).wait(1).to({x:2226.6},0).wait(1).to({x:2198.75},0).wait(1).to({x:2170.85},0).wait(1).to({x:2143},0).wait(1).to({x:2115.1},0).wait(1).to({x:2087.25},0).wait(1).to({x:2059.35},0).wait(1).to({x:2031.5},0).wait(1).to({x:2003.65},0).wait(1).to({x:1975.75},0).wait(1).to({x:1947.9},0).wait(1).to({x:1920},0).wait(1).to({x:1892.15},0).wait(1).to({x:1864.25},0).wait(1).to({x:1836.4},0).wait(1).to({x:1808.55},0).wait(1).to({x:1780.65},0).wait(1).to({x:1752.8},0).wait(1).to({x:1724.9},0).wait(1).to({x:1697.05},0).wait(1).to({x:1669.15},0).wait(1).to({x:1641.3},0).wait(1).to({x:1613.45},0).wait(1).to({x:1600.15},0).wait(1).to({x:1586.9},0).wait(1).to({x:1573.6},0).wait(1).to({x:1560.3},0).wait(1).to({x:1547},0).wait(1).to({x:1533.75},0).wait(1).to({x:1520.45},0).wait(1).to({x:1507.15},0).wait(1).to({x:1493.85},0).wait(1).to({x:1480.55},0).wait(1).to({x:1467.25},0).wait(1).to({x:1454},0).wait(1).to({x:1440.7},0).wait(1).to({x:1427.4},0).wait(1).to({x:1414.1},0).wait(1).to({x:1400.8},0).wait(1).to({x:1387.5},0).wait(1).to({x:1374.25},0).wait(1).to({x:1360.95},0).wait(1).to({x:1347.65},0).wait(1).to({x:1334.35},0).wait(1).to({x:1321.05},0).wait(1).to({x:1307.8},0).wait(1).to({x:1294.5},0).wait(1).to({x:1285.55},0).wait(1).to({x:1276.65},0).wait(1).to({x:1267.75},0).wait(1).to({x:1258.8},0).wait(1).to({x:1249.9},0).wait(1).to({x:1241},0).wait(1).to({x:1232.05},0).wait(1).to({x:1223.15},0).wait(1).to({x:1214.25},0).wait(1).to({x:1205.3},0).wait(1).to({x:1196.4},0).wait(1).to({x:1187.5},0).wait(1).to({x:1178.55},0).wait(1).to({x:1169.65},0).wait(1).to({x:1160.75},0).wait(1).to({x:1151.8},0).wait(1).to({x:1142.9},0).wait(1).to({x:1134},0).wait(1).to({x:1125.05},0).wait(1).to({x:1116.15},0).wait(1).to({x:1107.25},0).wait(1).to({x:1098.3},0).wait(1).to({x:1089.4},0).wait(1).to({x:1080.5},0).wait(1).to({x:1073.8},0).wait(1).to({x:1067.15},0).wait(1).to({x:1060.5},0).wait(1).to({x:1053.8},0).wait(1).to({x:1047.15},0).wait(1).to({x:1040.5},0).wait(1).to({x:1033.85},0).wait(1).to({x:1027.15},0).wait(1).to({x:1020.5},0).wait(1).to({x:1013.85},0).wait(1).to({x:1007.15},0).wait(1).to({x:1000.5},0).wait(1).to({x:993.85},0).wait(1).to({x:987.15},0).wait(1).to({x:980.5},0).wait(1).to({x:973.85},0).wait(1).to({x:967.15},0).wait(1).to({x:960.5},0).wait(1).to({x:953.85},0).wait(1).to({x:947.2},0).wait(1).to({x:940.5},0).wait(1).to({x:933.85},0).wait(1).to({x:927.2},0).wait(1).to({x:920.5},0).wait(1).to({x:915.2},0).wait(1).to({x:909.85},0).wait(1).to({x:904.5},0).wait(1).to({x:899.2},0).wait(1).to({x:893.85},0).wait(1).to({x:888.5},0).wait(1).to({x:883.2},0).wait(1).to({x:877.85},0).wait(1).to({x:872.5},0).wait(1).to({x:867.2},0).wait(1).to({x:861.85},0).wait(1).to({x:856.5},0).wait(1).to({x:851.2},0).wait(1).to({x:845.85},0).wait(1).to({x:840.5},0).wait(1).to({x:835.15},0).wait(1).to({x:829.85},0).wait(1).to({x:824.5},0).wait(1).to({x:819.15},0).wait(1).to({x:813.85},0).wait(1).to({x:808.5},0).wait(1).to({x:803.15},0).wait(1).to({x:797.85},0).wait(1).to({x:792.5},0).wait(1).to({x:788.05},0).wait(1).to({x:783.6},0).wait(1).to({x:779.15},0).wait(1).to({x:774.65},0).wait(1).to({x:770.2},0).wait(1).to({x:765.75},0).wait(1).to({x:761.3},0).wait(1).to({x:756.85},0).wait(1).to({x:752.4},0).wait(1).to({x:747.95},0).wait(1).to({x:743.45},0).wait(1).to({x:739},0).wait(1).to({x:734.55},0).wait(1).to({x:730.1},0).wait(1).to({x:725.65},0).wait(1).to({x:721.2},0).wait(1).to({x:716.7},0).wait(1).to({x:712.25},0).wait(1).to({x:707.8},0).wait(1).to({x:703.35},0).wait(1).to({x:698.9},0).wait(1).to({x:694.45},0).wait(1).to({x:689.95},0).wait(1).to({x:685.5},0).wait(1).to({x:681.7},0).wait(1).to({x:677.85},0).wait(1).to({x:674},0).wait(1).to({x:670.2},0).wait(1).to({x:666.35},0).wait(1).to({x:662.5},0).wait(1).to({x:658.65},0).wait(1).to({x:654.85},0).wait(1).to({x:651},0).wait(1).to({x:647.15},0).wait(1).to({x:643.35},0).wait(1).to({x:639.5},0).wait(1).to({x:635.65},0).wait(1).to({x:631.85},0).wait(1).to({x:628},0).wait(1).to({x:624.15},0).wait(1).to({x:620.35},0).wait(1).to({x:616.5},0).wait(1).to({x:612.65},0).wait(1).to({x:608.8},0).wait(1).to({x:605},0).wait(1).to({x:601.15},0).wait(1).to({x:597.3},0).wait(1).to({x:593.5},0).wait(1).to({x:590.15},0).wait(1).to({x:586.8},0).wait(1).to({x:583.5},0).wait(1).to({x:580.15},0).wait(1).to({x:576.8},0).wait(1).to({x:573.5},0).wait(1).to({x:570.15},0).wait(1).to({x:566.8},0).wait(1).to({x:563.5},0).wait(1).to({x:560.15},0).wait(1).to({x:556.8},0).wait(1).to({x:553.5},0).wait(1).to({x:550.15},0).wait(1).to({x:546.8},0).wait(1).to({x:543.5},0).wait(1).to({x:540.15},0).wait(1).to({x:536.8},0).wait(1).to({x:533.5},0).wait(1).to({x:530.15},0).wait(1).to({x:526.8},0).wait(1).to({x:523.5},0).wait(1).to({x:520.15},0).wait(1).to({x:516.8},0).wait(1).to({x:513.5},0).wait(1).to({x:510.55},0).wait(1).to({x:507.55},0).wait(1).to({x:504.6},0).wait(1).to({x:501.65},0).wait(1).to({x:498.7},0).wait(1).to({x:495.75},0).wait(1).to({x:492.8},0).wait(1).to({x:489.8},0).wait(1).to({x:486.85},0).wait(1).to({x:483.9},0).wait(1).to({x:480.95},0).wait(1).to({x:478},0).wait(1).to({x:475.05},0).wait(1).to({x:472.05},0).wait(1).to({x:469.1},0).wait(1).to({x:466.15},0).wait(1).to({x:463.2},0).wait(1).to({x:460.25},0).wait(1).to({x:457.3},0).wait(1).to({x:454.3},0).wait(1).to({x:451.35},0).wait(1).to({x:448.4},0).wait(1).to({x:445.45},0).wait(1).to({x:442.5},0).wait(1).to({x:439.8},0).wait(1).to({x:437.15},0).wait(1).to({x:434.5},0).wait(1).to({x:431.8},0).wait(1).to({x:429.15},0).wait(1).to({x:426.5},0).wait(1).to({x:423.8},0).wait(1).to({x:421.15},0).wait(1).to({x:418.5},0).wait(1).to({x:415.8},0).wait(1).to({x:413.15},0).wait(1).to({x:410.5},0).wait(1).to({x:407.8},0).wait(1).to({x:405.15},0).wait(1).to({x:402.5},0).wait(1).to({x:399.8},0).wait(1).to({x:397.15},0).wait(1).to({x:394.5},0).wait(1).to({x:391.8},0).wait(1).to({x:389.15},0).wait(1).to({x:386.5},0).wait(1).to({x:383.8},0).wait(1).to({x:381.15},0).wait(1).to({x:378.5},0).wait(49));

	// solidoazul
	this.instance_4 = new lib.colorsolidoazul();
	this.instance_4.parent = this;

	this.timeline.addTween(cjs.Tween.get(this.instance_4).wait(288));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(-1216,0,5125,1000);


(lib.Scene_1_giro = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// giro
	this.instance = new lib.AnimacionInicialconMotionFunction("synched",0);
	this.instance.parent = this;
	this.instance.setTransform(639.85,339.9,0.724,0.724,0,0,0,1028,494.7);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1).to({regX:1346.5,regY:500,scaleX:0.7296,scaleY:0.7296,x:872.25,y:344.5,startPosition:1},0).wait(1).to({scaleX:0.7353,scaleY:0.7353,x:874.05,y:345.3,startPosition:2},0).wait(1).to({scaleX:0.7409,scaleY:0.7409,x:875.85,y:346.05,startPosition:3},0).wait(1).to({scaleX:0.7466,scaleY:0.7466,x:877.65,y:346.85,startPosition:4},0).wait(1).to({scaleX:0.7522,scaleY:0.7522,x:879.45,y:347.6,startPosition:5},0).wait(1).to({scaleX:0.7579,scaleY:0.7579,x:881.25,y:348.35,startPosition:6},0).wait(1).to({scaleX:0.7635,scaleY:0.7635,x:883.05,y:349.15,startPosition:7},0).wait(1).to({scaleX:0.7691,scaleY:0.7691,x:884.85,y:349.9,startPosition:8},0).wait(1).to({scaleX:0.7748,scaleY:0.7748,x:886.65,y:350.7,startPosition:9},0).wait(1).to({scaleX:0.7804,scaleY:0.7804,x:888.45,y:351.45,startPosition:10},0).wait(1).to({scaleX:0.7861,scaleY:0.7861,x:890.25,y:352.25,startPosition:11},0).wait(1).to({scaleX:0.7917,scaleY:0.7917,x:892.05,y:353,startPosition:12},0).wait(1).to({scaleX:0.7974,scaleY:0.7974,x:893.85,y:353.8,startPosition:13},0).wait(1).to({scaleX:0.803,scaleY:0.803,x:895.65,y:354.55,startPosition:14},0).wait(1).to({scaleX:0.8087,scaleY:0.8087,x:897.4,y:355.35,startPosition:15},0).wait(1).to({scaleX:0.8143,scaleY:0.8143,x:899.2,y:356.1,startPosition:16},0).wait(1).to({scaleX:0.82,scaleY:0.82,x:901,y:356.85,startPosition:17},0).wait(1).to({scaleX:0.8256,scaleY:0.8256,x:902.8,y:357.65,startPosition:18},0).wait(1).to({scaleX:0.8312,scaleY:0.8312,x:904.6,y:358.4,startPosition:19},0).wait(1).to({scaleX:0.8369,scaleY:0.8369,x:906.4,y:359.15,startPosition:20},0).wait(1).to({scaleX:0.8425,scaleY:0.8425,x:908.2,y:359.9,startPosition:21},0).wait(1).to({scaleX:0.8482,scaleY:0.8482,x:910,y:360.7,startPosition:22},0).wait(1).to({scaleX:0.8538,scaleY:0.8538,x:911.8,y:361.45,startPosition:23},0).wait(1).to({scaleX:0.8595,scaleY:0.8595,x:913.6,y:362.25,startPosition:24},0).wait(1).to({scaleX:0.8651,scaleY:0.8651,x:915.4,y:363,startPosition:25},0).wait(1).to({scaleX:0.8708,scaleY:0.8708,x:917.25,y:363.8,startPosition:26},0).wait(1).to({scaleX:0.8764,scaleY:0.8764,x:919.05,y:364.55,startPosition:27},0).wait(1).to({scaleX:0.8821,scaleY:0.8821,x:920.85,y:365.3,startPosition:28},0).wait(1).to({scaleX:0.8877,scaleY:0.8877,x:922.65,y:366.1,startPosition:29},0).wait(1).to({scaleX:0.8933,scaleY:0.8933,x:924.4,y:366.85,startPosition:30},0).wait(1).to({scaleX:0.899,scaleY:0.899,x:926.2,y:367.65,startPosition:31},0).wait(1).to({scaleX:0.9046,scaleY:0.9046,x:927.95,y:368.4,startPosition:32},0).wait(1).to({scaleX:0.9103,scaleY:0.9103,x:929.75,y:369.2,startPosition:33},0).wait(1).to({scaleX:0.9159,scaleY:0.9159,x:931.55,y:369.95,startPosition:34},0).wait(1).to({scaleX:0.9216,scaleY:0.9216,x:933.35,y:370.75,startPosition:35},0).wait(1).to({scaleX:0.9272,scaleY:0.9272,x:935.2,y:371.5,startPosition:36},0).wait(1).to({scaleX:0.9329,scaleY:0.9329,x:937,y:372.25,startPosition:37},0).wait(1).to({scaleX:0.9385,scaleY:0.9385,x:938.8,y:373.05,startPosition:38},0).wait(1).to({scaleX:0.9441,scaleY:0.9441,x:940.6,y:373.8,startPosition:39},0).wait(1).to({scaleX:0.9498,scaleY:0.9498,x:942.4,y:374.55,startPosition:40},0).wait(1).to({scaleX:0.9554,scaleY:0.9554,x:944.2,y:375.3,startPosition:41},0).wait(1).to({scaleX:0.9611,scaleY:0.9611,x:946,y:376.1,startPosition:42},0).wait(1).to({scaleX:0.9667,scaleY:0.9667,x:947.8,y:376.85,startPosition:43},0).wait(1).to({scaleX:0.9724,scaleY:0.9724,x:949.6,y:377.65,startPosition:44},0).wait(1).to({scaleX:0.978,scaleY:0.978,x:951.35,y:378.4,startPosition:45},0).wait(1).to({scaleX:0.9837,scaleY:0.9837,x:953.15,y:379.2,startPosition:46},0).wait(1).to({scaleX:0.9893,scaleY:0.9893,x:954.95,y:379.95,startPosition:47},0).wait(1).to({scaleX:0.995,scaleY:0.995,x:956.75,y:380.7,startPosition:48},0).wait(1).to({scaleX:1.0006,scaleY:1.0006,x:958.55,y:381.5,startPosition:49},0).wait(1).to({scaleX:1.0062,scaleY:1.0062,x:960.35,y:382.25,startPosition:50},0).wait(1).to({scaleX:1.0119,scaleY:1.0119,x:962.15,y:383.05,startPosition:51},0).wait(1).to({scaleX:1.0175,scaleY:1.0175,x:963.95,y:383.8,startPosition:52},0).wait(1).to({scaleX:1.0232,scaleY:1.0232,x:965.75,y:384.6,startPosition:53},0).wait(1).to({scaleX:1.0288,scaleY:1.0288,x:967.55,y:385.35,startPosition:54},0).wait(1).to({scaleX:1.0345,scaleY:1.0345,x:969.35,y:386.15,startPosition:55},0).wait(1).to({scaleX:1.0401,scaleY:1.0401,x:971.15,y:386.9,startPosition:56},0).wait(1).to({scaleX:1.0458,scaleY:1.0458,x:972.95,y:387.7,startPosition:57},0).wait(1).to({scaleX:1.0514,scaleY:1.0514,x:974.75,y:388.45,startPosition:58},0).wait(1).to({scaleX:1.0571,scaleY:1.0571,x:976.55,y:389.25,startPosition:59},0).wait(1).to({scaleX:1.0627,scaleY:1.0627,x:978.3,y:389.95,startPosition:60},0).wait(1).to({scaleX:1.0683,scaleY:1.0683,x:980.15,y:390.7,startPosition:61},0).wait(1).to({scaleX:1.074,scaleY:1.074,x:981.95,y:391.5,startPosition:62},0).wait(1).to({scaleX:1.0796,scaleY:1.0796,x:983.75,y:392.25,startPosition:63},0).wait(1).to({scaleX:1.0853,scaleY:1.0853,x:985.5,y:393.05,startPosition:64},0).wait(1).to({scaleX:1.0909,scaleY:1.0909,x:987.3,y:393.8,startPosition:65},0).wait(1).to({scaleX:1.0966,scaleY:1.0966,x:989.1,y:394.6,startPosition:66},0).wait(1).to({scaleX:1.1022,scaleY:1.1022,x:990.9,y:395.35,startPosition:67},0).wait(1).to({scaleX:1.1079,scaleY:1.1079,x:992.7,y:396.1,startPosition:68},0).wait(1).to({scaleX:1.1135,scaleY:1.1135,x:994.5,y:396.9,startPosition:69},0).wait(1).to({scaleX:1.1192,scaleY:1.1192,x:996.3,y:397.65,startPosition:70},0).wait(1).to({scaleX:1.1248,scaleY:1.1248,x:998.1,y:398.45,startPosition:71},0).wait(1).to({scaleX:1.1304,scaleY:1.1304,x:999.95,y:399.2,startPosition:72},0).wait(1).to({scaleX:1.1361,scaleY:1.1361,x:1001.75,y:400,startPosition:73},0).wait(1).to({scaleX:1.1417,scaleY:1.1417,x:1003.55,y:400.75,startPosition:74},0).wait(1).to({scaleX:1.1474,scaleY:1.1474,x:1005.3,y:401.55,startPosition:75},0).wait(1).to({scaleX:1.153,scaleY:1.153,x:1007.1,y:402.3,startPosition:76},0).wait(1).to({scaleX:1.1587,scaleY:1.1587,x:1008.9,y:403.1,startPosition:77},0).wait(1).to({scaleX:1.1643,scaleY:1.1643,x:1010.7,y:403.85,startPosition:78},0).wait(1).to({scaleX:1.17,scaleY:1.17,x:1012.5,y:404.65,startPosition:79},0).wait(1).to({scaleX:1.1756,scaleY:1.1756,x:1014.3,y:405.35,startPosition:80},0).wait(1).to({scaleX:1.1813,scaleY:1.1813,x:1016.1,y:406.1,startPosition:81},0).wait(1).to({scaleX:1.1869,scaleY:1.1869,x:1017.9,y:406.9,startPosition:82},0).wait(1).to({scaleX:1.1925,scaleY:1.1925,x:1019.7,y:407.65,startPosition:83},0).wait(1).to({scaleX:1.1982,scaleY:1.1982,x:1021.5,y:408.45,startPosition:84},0).wait(1).to({scaleX:1.2038,scaleY:1.2038,x:1023.3,y:409.2,startPosition:85},0).wait(1).to({scaleX:1.2095,scaleY:1.2095,x:1025.1,y:410,startPosition:86},0).wait(1).to({scaleX:1.2151,scaleY:1.2151,x:1026.9,y:410.75,startPosition:87},0).wait(1).to({scaleX:1.2208,scaleY:1.2208,x:1028.7,y:411.55,startPosition:88},0).wait(1).to({scaleX:1.2264,scaleY:1.2264,x:1030.5,y:412.3,startPosition:89},0).wait(1).to({scaleX:1.2321,scaleY:1.2321,x:1032.25,y:413.1,startPosition:90},0).wait(1).to({scaleX:1.2377,scaleY:1.2377,x:1034.05,y:413.85,startPosition:91},0).wait(1).to({scaleX:1.2433,scaleY:1.2433,x:1035.85,y:414.6,startPosition:92},0).wait(1).to({scaleX:1.249,scaleY:1.249,x:1037.65,y:415.4,startPosition:93},0).wait(1).to({scaleX:1.2546,scaleY:1.2546,x:1039.45,y:416.15,startPosition:94},0).wait(1).to({scaleX:1.2603,scaleY:1.2603,x:1041.25,y:416.95,startPosition:95},0).wait(1).to({scaleX:1.2659,scaleY:1.2659,x:1043.05,y:417.7,startPosition:96},0).wait(1).to({scaleX:1.2716,scaleY:1.2716,x:1044.85,y:418.5,startPosition:97},0).wait(1).to({scaleX:1.2772,scaleY:1.2772,x:1046.65,y:419.25,startPosition:98},0).wait(1).to({scaleX:1.2829,scaleY:1.2829,x:1048.45,y:420.05,startPosition:99},0).wait(1).to({scaleX:1.2885,scaleY:1.2885,x:1050.25,y:420.75,startPosition:100},0).wait(1).to({scaleX:1.2942,scaleY:1.2942,x:1052.05,y:421.5,startPosition:101},0).wait(1).to({scaleX:1.2998,scaleY:1.2998,x:1053.85,y:422.3,startPosition:102},0).wait(1).to({scaleX:1.3054,scaleY:1.3054,x:1055.65,y:423.05,startPosition:103},0).wait(1).to({scaleX:1.3111,scaleY:1.3111,x:1057.45,y:423.85,startPosition:104},0).wait(1).to({scaleX:1.3167,scaleY:1.3167,x:1059.2,y:424.6,startPosition:105},0).wait(1).to({scaleX:1.3224,scaleY:1.3224,x:1061,y:425.4,startPosition:106},0).wait(1).to({scaleX:1.328,scaleY:1.328,x:1062.85,y:426.15,startPosition:107},0).wait(1).to({scaleX:1.3337,scaleY:1.3337,x:1064.65,y:426.95,startPosition:108},0).wait(1).to({scaleX:1.3393,scaleY:1.3393,x:1066.45,y:427.7,startPosition:109},0).wait(1).to({scaleX:1.345,scaleY:1.345,x:1068.25,y:428.5,startPosition:110},0).wait(1).to({scaleX:1.3506,scaleY:1.3506,x:1070.05,y:429.25,startPosition:111},0).wait(1).to({scaleX:1.3563,scaleY:1.3563,x:1071.85,y:430,startPosition:112},0).wait(1).to({scaleX:1.3619,scaleY:1.3619,x:1073.65,y:430.8,startPosition:113},0).wait(1).to({scaleX:1.3675,scaleY:1.3675,x:1075.45,y:431.55,startPosition:114},0).wait(1).to({scaleX:1.3732,scaleY:1.3732,x:1077.25,y:432.35,startPosition:115},0).wait(1).to({scaleX:1.3788,scaleY:1.3788,x:1079.05,y:433.1,startPosition:116},0).wait(1).to({scaleX:1.3845,scaleY:1.3845,x:1080.85,y:433.9,startPosition:117},0).wait(1).to({scaleX:1.3901,scaleY:1.3901,x:1082.65,y:434.65,startPosition:118},0).wait(1).to({scaleX:1.3958,scaleY:1.3958,x:1084.45,y:435.45,startPosition:119},0).wait(1).to({scaleX:1.4014,scaleY:1.4014,x:1086.2,y:436.15,startPosition:120},0).wait(1).to({scaleX:1.4071,scaleY:1.4071,x:1088,y:436.95,startPosition:121},0).wait(1).to({scaleX:1.4127,scaleY:1.4127,x:1089.8,y:437.7,startPosition:122},0).wait(1).to({scaleX:1.4184,scaleY:1.4184,x:1091.6,y:438.5,startPosition:123},0).wait(1).to({scaleX:1.424,scaleY:1.424,x:1093.4,y:439.25,startPosition:124},0).wait(1).to({scaleX:1.4296,scaleY:1.4296,x:1095.2,y:440,startPosition:125},0).wait(1).to({scaleX:1.4353,scaleY:1.4353,x:1097,y:440.8,startPosition:126},0).wait(1).to({scaleX:1.4409,scaleY:1.4409,x:1098.8,y:441.55,startPosition:127},0).wait(1).to({scaleX:1.4466,scaleY:1.4466,x:1100.6,y:442.35,startPosition:128},0).wait(1).to({scaleX:1.4522,scaleY:1.4522,x:1102.4,y:443.1,startPosition:129},0).wait(1).to({scaleX:1.4579,scaleY:1.4579,x:1104.2,y:443.9,startPosition:130},0).wait(1).to({scaleX:1.4635,scaleY:1.4635,x:1106,y:444.65,startPosition:131},0).wait(1).to({scaleX:1.4692,scaleY:1.4692,x:1107.8,y:445.4,startPosition:132},0).wait(1).to({scaleX:1.4748,scaleY:1.4748,x:1109.6,y:446.2,startPosition:133},0).wait(1).to({scaleX:1.4804,scaleY:1.4804,x:1111.4,y:446.95,startPosition:134},0).wait(1).to({scaleX:1.4861,scaleY:1.4861,x:1113.15,y:447.75,startPosition:135},0).wait(1).to({scaleX:1.4917,scaleY:1.4917,x:1114.95,y:448.5,startPosition:136},0).wait(1).to({scaleX:1.4974,scaleY:1.4974,x:1116.75,y:449.3,startPosition:137},0).wait(1).to({scaleX:1.503,scaleY:1.503,x:1118.55,y:450.05,startPosition:138},0).wait(1).to({scaleX:1.5087,scaleY:1.5087,x:1120.35,y:450.85,startPosition:139},0).wait(1).to({scaleX:1.5143,scaleY:1.5143,x:1122.15,y:451.55,startPosition:140},0).wait(1).to({scaleX:1.52,scaleY:1.52,x:1123.95,y:452.35,startPosition:141},0).wait(1).to({scaleX:1.5256,scaleY:1.5256,x:1125.8,y:453.1,startPosition:142},0).wait(1).to({scaleX:1.5313,scaleY:1.5313,x:1127.6,y:453.9,startPosition:143},0).wait(1).to({scaleX:1.5369,scaleY:1.5369,x:1129.4,y:454.65,startPosition:144},0).wait(1).to({scaleX:1.5425,scaleY:1.5425,x:1131.2,y:455.4,startPosition:145},0).wait(1).to({scaleX:1.5482,scaleY:1.5482,x:1133,y:456.2,startPosition:146},0).wait(1).to({scaleX:1.5538,scaleY:1.5538,x:1134.8,y:456.95,startPosition:147},0).wait(1).to({scaleX:1.5595,scaleY:1.5595,x:1136.6,y:457.75,startPosition:148},0).wait(1).to({scaleX:1.5651,scaleY:1.5651,x:1138.4,y:458.5,startPosition:149},0).wait(1).to({scaleX:1.5708,scaleY:1.5708,x:1140.15,y:459.3,startPosition:150},0).wait(1).to({scaleX:1.5764,scaleY:1.5764,x:1141.95,y:460.05,startPosition:151},0).wait(1).to({scaleX:1.5821,scaleY:1.5821,x:1143.75,y:460.85,startPosition:152},0).wait(1).to({scaleX:1.5877,scaleY:1.5877,x:1145.55,y:461.6,startPosition:153},0).wait(1).to({scaleX:1.5934,scaleY:1.5934,x:1147.35,y:462.4,startPosition:154},0).wait(1).to({scaleX:1.599,scaleY:1.599,x:1149.15,y:463.15,startPosition:155},0).wait(1).to({scaleX:1.6046,scaleY:1.6046,x:1150.95,y:463.9,startPosition:156},0).wait(1).to({scaleX:1.6103,scaleY:1.6103,x:1152.75,y:464.7,startPosition:157},0).wait(1).to({scaleX:1.6159,scaleY:1.6159,x:1154.55,y:465.45,startPosition:158},0).wait(1).to({scaleX:1.6216,scaleY:1.6216,x:1156.35,y:466.25,startPosition:159},0).wait(1).to({scaleX:1.6272,scaleY:1.6272,x:1158.15,y:466.95,startPosition:160},0).wait(1).to({scaleX:1.6329,scaleY:1.6329,x:1159.95,y:467.75,startPosition:161},0).wait(1).to({scaleX:1.6385,scaleY:1.6385,x:1161.75,y:468.5,startPosition:162},0).wait(1).to({scaleX:1.6442,scaleY:1.6442,x:1163.55,y:469.25,startPosition:163},0).wait(1).to({scaleX:1.6498,scaleY:1.6498,x:1165.35,y:470.05,startPosition:164},0).wait(1).to({scaleX:1.6555,scaleY:1.6555,x:1167.1,y:470.8,startPosition:165},0).wait(1).to({scaleX:1.6611,scaleY:1.6611,x:1168.9,y:471.6,startPosition:166},0).wait(1).to({scaleX:1.6667,scaleY:1.6667,x:1170.7,y:472.35,startPosition:167},0).wait(1).to({scaleX:1.6724,scaleY:1.6724,x:1172.5,y:473.15,startPosition:168},0).wait(1).to({scaleX:1.678,scaleY:1.678,x:1174.3,y:473.9,startPosition:169},0).wait(1).to({scaleX:1.6837,scaleY:1.6837,x:1176.1,y:474.7,startPosition:170},0).wait(1).to({scaleX:1.6893,scaleY:1.6893,x:1177.9,y:475.45,startPosition:171},0).wait(1).to({scaleX:1.695,scaleY:1.695,x:1179.7,y:476.25,startPosition:172},0).wait(1).to({scaleX:1.7006,scaleY:1.7006,x:1181.5,y:477,startPosition:173},0).wait(1).to({scaleX:1.7063,scaleY:1.7063,x:1183.3,y:477.8,startPosition:174},0).wait(1).to({scaleX:1.7119,scaleY:1.7119,x:1185.1,y:478.55,startPosition:175},0).wait(1).to({scaleX:1.7176,scaleY:1.7176,x:1186.9,y:479.3,startPosition:176},0).wait(1).to({scaleX:1.7232,scaleY:1.7232,x:1188.75,y:480.1,startPosition:177},0).wait(1).to({scaleX:1.7288,scaleY:1.7288,x:1190.55,y:480.85,startPosition:178},0).wait(1).to({scaleX:1.7345,scaleY:1.7345,x:1192.35,y:481.65,startPosition:179},0).wait(1).to({scaleX:1.7401,scaleY:1.7401,x:1194.1,y:482.35,startPosition:180},0).wait(1).to({scaleX:1.7458,scaleY:1.7458,x:1195.9,y:483.15,startPosition:181},0).wait(1).to({scaleX:1.7514,scaleY:1.7514,x:1197.7,y:483.9,startPosition:182},0).wait(1).to({scaleX:1.7571,scaleY:1.7571,x:1199.5,y:484.7,startPosition:183},0).wait(1).to({scaleX:1.7627,scaleY:1.7627,x:1201.3,y:485.45,startPosition:184},0).wait(1).to({scaleX:1.7684,scaleY:1.7684,x:1203.1,y:486.25,startPosition:185},0).wait(1).to({scaleX:1.774,scaleY:1.774,x:1204.9,y:487,startPosition:186},0).wait(1).to({scaleX:1.7796,scaleY:1.7796,x:1206.7,y:487.75,startPosition:187},0).wait(1).to({scaleX:1.7853,scaleY:1.7853,x:1208.5,y:488.55,startPosition:188},0).wait(1).to({scaleX:1.7909,scaleY:1.7909,x:1210.3,y:489.3,startPosition:189},0).wait(1).to({scaleX:1.7966,scaleY:1.7966,x:1212.1,y:490.1,startPosition:190},0).wait(1).to({scaleX:1.8022,scaleY:1.8022,x:1213.9,y:490.85,startPosition:191},0).wait(1).to({scaleX:1.8795,scaleY:1.8795,x:1238.5,y:492,startPosition:192},0).wait(1).to({scaleX:1.9568,scaleY:1.9568,x:1263.1,y:493.15,startPosition:193},0).wait(1).to({scaleX:2.034,scaleY:2.034,x:1287.7,y:494.3,startPosition:194},0).wait(1).to({scaleX:2.1113,scaleY:2.1113,x:1312.3,y:495.45,startPosition:195},0).wait(1).to({scaleX:2.1885,scaleY:2.1885,x:1336.9,y:496.6,startPosition:196},0).wait(1).to({scaleX:2.2658,scaleY:2.2658,x:1361.55,y:497.75,startPosition:197},0).wait(1).to({scaleX:2.3431,scaleY:2.3431,x:1386.1,y:498.9,startPosition:198},0).wait(1).to({scaleX:2.4203,scaleY:2.4203,x:1410.75,y:500.05,startPosition:199},0).wait(1).to({scaleX:2.4976,scaleY:2.4976,x:1435.35,y:501.2,startPosition:200},0).wait(1).to({scaleX:2.5748,scaleY:2.5748,x:1459.95,y:502.35,startPosition:201},0).wait(1).to({scaleX:2.6521,scaleY:2.6521,x:1484.55,y:503.5,startPosition:202},0).wait(1).to({scaleX:2.7294,scaleY:2.7294,x:1509.2,y:504.7,startPosition:203},0).wait(1).to({scaleX:2.8066,scaleY:2.8066,x:1533.75,y:505.8,startPosition:204},0).wait(1).to({scaleX:2.8839,scaleY:2.8839,x:1558.4,y:506.95,startPosition:205},0).wait(1).to({scaleX:2.9612,scaleY:2.9612,x:1582.95,y:508.1,startPosition:206},0).wait(1).to({scaleX:3.0384,scaleY:3.0384,x:1607.6,y:509.25,startPosition:207},0).wait(1).to({scaleX:3.1157,scaleY:3.1157,x:1632.2,y:510.4,startPosition:208},0).wait(1).to({scaleX:3.1929,scaleY:3.1929,x:1656.85,y:511.55,startPosition:209},0).wait(1).to({scaleX:3.2702,scaleY:3.2702,x:1681.4,y:512.7,startPosition:210},0).wait(1).to({scaleX:3.3475,scaleY:3.3475,x:1706.05,y:513.85,startPosition:211},0).wait(1).to({scaleX:3.4247,scaleY:3.4247,x:1730.65,y:515,startPosition:212},0).wait(1).to({scaleX:3.502,scaleY:3.502,x:1755.25,y:516.15,startPosition:213},0).wait(1).to({scaleX:3.5792,scaleY:3.5792,x:1779.85,y:517.3,startPosition:214},0).wait(1).to({scaleX:3.6565,scaleY:3.6565,x:1804.45,y:518.45,startPosition:215},0).wait(1).to({scaleX:3.7338,scaleY:3.7338,x:1829.05,y:519.55,startPosition:216},0).wait(1).to({scaleX:3.811,scaleY:3.811,x:1853.7,y:520.75,startPosition:217},0).wait(1).to({scaleX:3.8883,scaleY:3.8883,x:1878.25,y:521.9,startPosition:218},0).wait(1).to({scaleX:3.9655,scaleY:3.9655,x:1902.9,y:523.05,startPosition:219},0).wait(1).to({scaleX:4.0428,scaleY:4.0428,x:1927.5,y:524.2,startPosition:220},0).wait(1).to({scaleX:4.1201,scaleY:4.1201,x:1952.1,y:525.35,startPosition:221},0).wait(1).to({scaleX:4.1973,scaleY:4.1973,x:1976.7,y:526.5,startPosition:222},0).wait(1).to({scaleX:4.2746,scaleY:4.2746,x:2001.3,y:527.65,startPosition:223},0).wait(1).to({scaleX:4.3519,scaleY:4.3519,x:2025.9,y:528.85,startPosition:224},0).wait(1).to({scaleX:4.4291,scaleY:4.4291,x:2050.55,y:529.95,startPosition:225},0).wait(1).to({scaleX:4.5064,scaleY:4.5064,x:2075.15,y:531.1,startPosition:226},0).wait(1).to({scaleX:4.5836,scaleY:4.5836,x:2099.75,y:532.25,startPosition:227},0).wait(1).to({scaleX:4.6609,scaleY:4.6609,x:2124.4,y:533.4,startPosition:228},0).wait(1).to({scaleX:4.7382,scaleY:4.7382,x:2149,y:534.55,startPosition:229},0).wait(1).to({scaleX:4.8154,scaleY:4.8154,x:2173.6,y:535.7,startPosition:230},0).wait(1).to({scaleX:4.8927,scaleY:4.8927,x:2198.2,y:536.85,startPosition:231},0).wait(1).to({scaleX:4.9699,scaleY:4.9699,x:2222.8,y:538,startPosition:232},0).wait(1).to({scaleX:5.0472,scaleY:5.0472,x:2247.4,y:539.15,startPosition:233},0).wait(1).to({scaleX:5.1245,scaleY:5.1245,x:2272.05,y:540.3,startPosition:234},0).wait(1).to({scaleX:5.2017,scaleY:5.2017,x:2296.6,y:541.45,startPosition:235},0).wait(1).to({scaleX:5.279,scaleY:5.279,x:2321.25,y:542.6,startPosition:236},0).wait(1).to({scaleX:5.3563,scaleY:5.3563,x:2345.85,y:543.7,startPosition:237},0).wait(1).to({scaleX:5.4335,scaleY:5.4335,x:2370.45,y:544.9,startPosition:238},0).wait(1).to({scaleX:5.5108,scaleY:5.5108,x:2395.05,y:546.05,startPosition:239},0).wait(1).to({scaleX:5.588,scaleY:5.588,x:2419.7,y:547.2,startPosition:240},0).wait(1).to({scaleX:5.6653,scaleY:5.6653,x:2444.25,y:548.35,startPosition:241},0).wait(1).to({scaleX:5.7426,scaleY:5.7426,x:2468.9,y:549.5,startPosition:242},0).wait(1).to({scaleX:5.8198,scaleY:5.8198,x:2493.45,y:550.65,startPosition:243},0).wait(1).to({scaleX:5.8971,scaleY:5.8971,x:2518.1,y:551.8,startPosition:244},0).wait(1).to({scaleX:5.9743,scaleY:5.9743,x:2542.7,y:552.95,startPosition:245},0).wait(1).to({scaleX:6.0516,scaleY:6.0516,x:2567.3,y:554.1,startPosition:246},0).wait(1).to({scaleX:6.1289,scaleY:6.1289,x:2591.9,y:555.25,startPosition:247},0).wait(1).to({scaleX:6.2061,scaleY:6.2061,x:2616.55,y:556.4,startPosition:248},0).wait(1).to({scaleX:6.2834,scaleY:6.2834,x:2641.15,y:557.55,startPosition:249},0).wait(1).to({scaleX:6.3606,scaleY:6.3606,x:2665.75,y:558.65,startPosition:250},0).wait(1).to({scaleX:6.4379,scaleY:6.4379,x:2690.35,y:559.85,startPosition:251},0).wait(1).to({scaleX:6.5152,scaleY:6.5152,x:2714.95,y:561,startPosition:252},0).wait(1).to({scaleX:6.5924,scaleY:6.5924,x:2739.55,y:562.15,startPosition:253},0).wait(1).to({scaleX:6.6697,scaleY:6.6697,x:2764.2,y:563.3,startPosition:254},0).wait(1).to({scaleX:6.747,scaleY:6.747,x:2788.75,y:564.4,startPosition:255},0).wait(1).to({scaleX:6.8242,scaleY:6.8242,x:2813.4,y:565.6,startPosition:256},0).wait(1).to({scaleX:6.9015,scaleY:6.9015,x:2838,y:566.75,startPosition:257},0).wait(1).to({scaleX:6.9787,scaleY:6.9787,x:2862.6,y:567.85,startPosition:258},0).wait(1).to({scaleX:7.056,scaleY:7.056,x:2887.2,y:569.05,startPosition:259},0).wait(1).to({scaleX:7.1333,scaleY:7.1333,x:2911.85,y:570.2,startPosition:260},0).wait(1).to({scaleX:7.2105,scaleY:7.2105,x:2936.4,y:571.35,startPosition:261},0).wait(1).to({scaleX:7.2878,scaleY:7.2878,x:2961.05,y:572.5,startPosition:262},0).wait(1).to({scaleX:7.365,scaleY:7.365,x:2985.6,y:573.6,startPosition:263},0).wait(1).to({scaleX:7.4423,scaleY:7.4423,x:3010.25,y:574.8,startPosition:264},0).wait(1).to({scaleX:7.5196,scaleY:7.5196,x:3034.85,y:575.95,startPosition:265},0).wait(1).to({scaleX:7.5968,scaleY:7.5968,x:3059.45,y:577.05,startPosition:266},0).wait(1).to({scaleX:7.6741,scaleY:7.6741,x:3084.05,y:578.25,startPosition:267},0).wait(1).to({scaleX:7.7514,scaleY:7.7514,x:3108.7,y:579.35,startPosition:268},0).wait(1).to({scaleX:7.8286,scaleY:7.8286,x:3133.3,y:580.55,startPosition:269},0).wait(1).to({scaleX:7.9059,scaleY:7.9059,x:3157.9,y:581.7,startPosition:270},0).wait(1).to({scaleX:7.9831,scaleY:7.9831,x:3182.5,y:582.8,startPosition:271},0).wait(1).to({scaleX:8.0604,scaleY:8.0604,x:3207.1,y:584,startPosition:272},0).wait(1).to({scaleX:8.1377,scaleY:8.1377,x:3231.7,y:585.1,startPosition:273},0).wait(1).to({scaleX:8.2149,scaleY:8.2149,x:3256.35,y:586.3,startPosition:274},0).wait(1).to({scaleX:8.2922,scaleY:8.2922,x:3280.9,y:587.45,startPosition:275},0).wait(1).to({scaleX:8.3694,scaleY:8.3694,x:3305.55,y:588.55,startPosition:276},0).wait(1).to({scaleX:8.4467,scaleY:8.4467,x:3330.15,y:589.75,startPosition:277},0).wait(1).to({scaleX:8.524,scaleY:8.524,x:3354.75,y:590.9,startPosition:278},0).wait(1).to({scaleX:8.6012,scaleY:8.6012,x:3379.35,y:592,startPosition:279},0).wait(1).to({scaleX:8.6785,scaleY:8.6785,x:3404,y:593.2,startPosition:280},0).wait(1).to({scaleX:8.7558,scaleY:8.7558,x:3428.55,y:594.3,startPosition:281},0).wait(1).to({startPosition:282},0).wait(1).to({startPosition:283},0).wait(1).to({startPosition:284},0).wait(1).to({startPosition:285},0).wait(1).to({startPosition:286},0).wait(1).to({startPosition:287},0).wait(1).to({startPosition:0},0).wait(1).to({startPosition:1},0).wait(1).to({startPosition:2},0).wait(1).to({startPosition:3},0).wait(1).to({startPosition:4},0).wait(1).to({startPosition:5},0).wait(1).to({startPosition:6},0).wait(1).to({startPosition:7},0).wait(1).to({startPosition:8},0).wait(1).to({startPosition:9},0).wait(1).to({startPosition:10},0).wait(1).to({startPosition:11},0).wait(1).to({startPosition:12},0).wait(1).to({startPosition:13},0).wait(1).to({startPosition:14},0).wait(1).to({startPosition:15},0).wait(1).to({startPosition:16},0).wait(1).to({startPosition:17},0).wait(1).to({startPosition:18},0).wait(1).to({startPosition:19},0).wait(1).to({startPosition:20},0).wait(1).to({startPosition:21},0).wait(1).to({startPosition:22},0).wait(1).to({startPosition:23},0).wait(1).to({startPosition:24},0).wait(1).to({startPosition:25},0).wait(1).to({startPosition:26},0).wait(1).to({startPosition:27},0).wait(1).to({startPosition:28},0).wait(1).to({startPosition:29},0).wait(1).to({startPosition:30},0).wait(1).to({startPosition:31},0).wait(1).to({startPosition:32},0).wait(1).to({startPosition:33},0).wait(1).to({startPosition:34},0).wait(1).to({startPosition:35},0).wait(1).to({startPosition:36},0).wait(1).to({startPosition:37},0).wait(1).to({startPosition:38},0).wait(1).to({startPosition:39},0).wait(1).to({startPosition:40},0).wait(1).to({startPosition:41},0).wait(1).to({startPosition:42},0).wait(1).to({startPosition:43},0).wait(1).to({startPosition:44},0).wait(1).to({startPosition:45},0).wait(1).to({startPosition:46},0).wait(1).to({startPosition:47},0).wait(1).to({startPosition:48},0).wait(1).to({startPosition:49},0).wait(1).to({startPosition:50},0).wait(1).to({startPosition:51},0).wait(1).to({startPosition:52},0).wait(1).to({startPosition:53},0).wait(1).to({startPosition:54},0).wait(1).to({startPosition:55},0).wait(1).to({startPosition:56},0).wait(1).to({startPosition:57},0).wait(1).to({startPosition:58},0).wait(1).to({startPosition:59},0).wait(1));

}).prototype = p = new cjs.MovieClip();


(lib.SymGiroTierraFrame = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// EspacioBrillante
	this.instance = new lib.SymEspacioBrillante();
	this.instance.parent = this;
	this.instance.setTransform(652.75,353,1,1,0,0,0,1000,500);
	this.instance.alpha = 0.3398;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1));

	// EspacioTenue
	this.instance_1 = new lib.espacioTenue();
	this.instance_1.parent = this;
	this.instance_1.setTransform(-347,-147);

	this.timeline.addTween(cjs.Tween.get(this.instance_1).wait(1));

	// Nubes
	this.instance_2 = new lib.SymNubes();
	this.instance_2.parent = this;
	this.instance_2.setTransform(932.1,568.5,1.2491,1.2491,0,0,0,995.6,495.4);

	this.timeline.addTween(cjs.Tween.get(this.instance_2).wait(1));

	// Tierra_correccion
	this.instance_3 = new lib.SymTierra();
	this.instance_3.parent = this;
	this.instance_3.setTransform(-111.5,341.9,1,1,0,0,0,807.9,403.9);

	this.timeline.addTween(cjs.Tween.get(this.instance_3).wait(1));

	// Tierra
	this.instance_4 = new lib.SymTierra();
	this.instance_4.parent = this;
	this.instance_4.setTransform(919.65,341.9,1,1,0,0,0,807.9,403.9);

	this.timeline.addTween(cjs.Tween.get(this.instance_4).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(-919.4,-147,3106.1,1345.8);


(lib.SymGiroTierra = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// EspacioBrillante
	this.instance = new lib.SymEspacioBrillante();
	this.instance.parent = this;
	this.instance.setTransform(652.75,353,1,1,0,0,0,1000,500);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1).to({alpha:0.9609},0).wait(1).to({alpha:0.9217},0).wait(1).to({alpha:0.8826},0).wait(1).to({alpha:0.8435},0).wait(1).to({alpha:0.8043},0).wait(1).to({alpha:0.7652},0).wait(1).to({alpha:0.7261},0).wait(1).to({alpha:0.687},0).wait(1).to({alpha:0.6478},0).wait(1).to({alpha:0.6087},0).wait(1).to({alpha:0.5696},0).wait(1).to({alpha:0.5304},0).wait(1).to({alpha:0.4913},0).wait(1).to({alpha:0.4522},0).wait(1).to({alpha:0.413},0).wait(1).to({alpha:0.3739},0).wait(1).to({alpha:0.3348},0).wait(1).to({alpha:0.2957},0).wait(1).to({alpha:0.2565},0).wait(1).to({alpha:0.2174},0).wait(1).to({alpha:0.1783},0).wait(1).to({alpha:0.1391},0).wait(1).to({alpha:0.1},0).wait(1).to({alpha:0.1354},0).wait(1).to({alpha:0.1708},0).wait(1).to({alpha:0.2063},0).wait(1).to({alpha:0.2417},0).wait(1).to({alpha:0.2771},0).wait(1).to({alpha:0.3125},0).wait(1).to({alpha:0.3479},0).wait(1).to({alpha:0.3833},0).wait(1).to({alpha:0.4187},0).wait(1).to({alpha:0.4542},0).wait(1).to({alpha:0.4896},0).wait(1).to({alpha:0.525},0).wait(1).to({alpha:0.5604},0).wait(1).to({alpha:0.5958},0).wait(1).to({alpha:0.6313},0).wait(1).to({alpha:0.6667},0).wait(1).to({alpha:0.7021},0).wait(1).to({alpha:0.7375},0).wait(1).to({alpha:0.7729},0).wait(1).to({alpha:0.8083},0).wait(1).to({alpha:0.8438},0).wait(1).to({alpha:0.8792},0).wait(1).to({alpha:0.9146},0).wait(1).to({alpha:0.95},0).wait(1).to({alpha:0.9208},0).wait(1).to({alpha:0.8917},0).wait(1).to({alpha:0.8625},0).wait(1).to({alpha:0.8333},0).wait(1).to({alpha:0.8042},0).wait(1).to({alpha:0.775},0).wait(1).to({alpha:0.7458},0).wait(1).to({alpha:0.7167},0).wait(1).to({alpha:0.6875},0).wait(1).to({alpha:0.6583},0).wait(1).to({alpha:0.6292},0).wait(1).to({alpha:0.6},0).wait(1).to({alpha:0.5708},0).wait(1).to({alpha:0.5417},0).wait(1).to({alpha:0.5125},0).wait(1).to({alpha:0.4833},0).wait(1).to({alpha:0.4542},0).wait(1).to({alpha:0.425},0).wait(1).to({alpha:0.3958},0).wait(1).to({alpha:0.3667},0).wait(1).to({alpha:0.3375},0).wait(1).to({alpha:0.3083},0).wait(1).to({alpha:0.2792},0).wait(1).to({alpha:0.25},0).wait(1).to({alpha:0.2813},0).wait(1).to({alpha:0.3125},0).wait(1).to({alpha:0.3438},0).wait(1).to({alpha:0.375},0).wait(1).to({alpha:0.4063},0).wait(1).to({alpha:0.4375},0).wait(1).to({alpha:0.4688},0).wait(1).to({alpha:0.5},0).wait(1).to({alpha:0.5313},0).wait(1).to({alpha:0.5625},0).wait(1).to({alpha:0.5938},0).wait(1).to({alpha:0.625},0).wait(1).to({alpha:0.6563},0).wait(1).to({alpha:0.6875},0).wait(1).to({alpha:0.7188},0).wait(1).to({alpha:0.75},0).wait(1).to({alpha:0.7813},0).wait(1).to({alpha:0.8125},0).wait(1).to({alpha:0.8438},0).wait(1).to({alpha:0.875},0).wait(1).to({alpha:0.9063},0).wait(1).to({alpha:0.9375},0).wait(1).to({alpha:0.9688},0).wait(1).to({alpha:1},0).wait(1).to({alpha:0.9725},0).wait(1).to({alpha:0.945},0).wait(1).to({alpha:0.9175},0).wait(1).to({alpha:0.89},0).wait(1).to({alpha:0.8625},0).wait(1).to({alpha:0.835},0).wait(1).to({alpha:0.8075},0).wait(1).to({alpha:0.78},0).wait(1).to({alpha:0.7525},0).wait(1).to({alpha:0.725},0).wait(1).to({alpha:0.6975},0).wait(1).to({alpha:0.67},0).wait(1).to({alpha:0.6425},0).wait(1).to({alpha:0.615},0).wait(1).to({alpha:0.5875},0).wait(1).to({alpha:0.56},0).wait(1).to({alpha:0.5325},0).wait(1).to({alpha:0.505},0).wait(1).to({alpha:0.4775},0).wait(1).to({alpha:0.45},0).wait(1).to({alpha:0.4225},0).wait(1).to({alpha:0.395},0).wait(1).to({alpha:0.3675},0).wait(1).to({alpha:0.34},0).wait(1));

	// EspacioTenue
	this.instance_1 = new lib.espacioTenue();
	this.instance_1.parent = this;
	this.instance_1.setTransform(-347,-147);

	this.timeline.addTween(cjs.Tween.get(this.instance_1).wait(120));

	// Nubes
	this.instance_2 = new lib.SymNubes();
	this.instance_2.parent = this;
	this.instance_2.setTransform(333.85,387,1.2491,1.2491,0,0,0,995.9,495.6);

	this.timeline.addTween(cjs.Tween.get(this.instance_2).wait(1).to({regX:1000,regY:500,x:344,y:394},0).wait(1).to({x:349.05,y:395.55},0).wait(1).to({x:354.05,y:397.05},0).wait(1).to({x:359.1,y:398.6},0).wait(1).to({x:364.1,y:400.1},0).wait(1).to({x:369.15,y:401.65},0).wait(1).to({x:374.2,y:403.15},0).wait(1).to({x:379.2,y:404.7},0).wait(1).to({x:384.25,y:406.2},0).wait(1).to({x:389.25,y:407.75},0).wait(1).to({x:394.3,y:409.25},0).wait(1).to({x:399.35,y:410.8},0).wait(1).to({x:404.35,y:412.3},0).wait(1).to({x:409.4,y:413.85},0).wait(1).to({x:414.4,y:415.35},0).wait(1).to({x:419.45,y:416.9},0).wait(1).to({x:424.5,y:418.45},0).wait(1).to({x:429.5,y:419.95},0).wait(1).to({x:434.55,y:421.5},0).wait(1).to({x:439.55,y:423},0).wait(1).to({x:444.6,y:424.55},0).wait(1).to({x:449.6,y:426.05},0).wait(1).to({x:454.65,y:427.6},0).wait(1).to({x:459.7,y:429.1},0).wait(1).to({x:464.7,y:430.65},0).wait(1).to({x:469.75,y:432.15},0).wait(1).to({x:474.75,y:433.7},0).wait(1).to({x:479.8,y:435.2},0).wait(1).to({x:484.85,y:436.75},0).wait(1).to({x:489.85,y:438.25},0).wait(1).to({x:494.9,y:439.8},0).wait(1).to({x:499.9,y:441.35},0).wait(1).to({x:504.95,y:442.85},0).wait(1).to({x:509.95,y:444.4},0).wait(1).to({x:515,y:445.9},0).wait(1).to({x:520,y:447.45},0).wait(1).to({x:525.05,y:448.95},0).wait(1).to({x:530.1,y:450.5},0).wait(1).to({x:535.1,y:452},0).wait(1).to({x:540.15,y:453.55},0).wait(1).to({x:545.2,y:455.05},0).wait(1).to({x:550.2,y:456.6},0).wait(1).to({x:555.25,y:458.1},0).wait(1).to({x:560.25,y:459.65},0).wait(1).to({x:565.3,y:461.15},0).wait(1).to({x:570.3,y:462.7},0).wait(1).to({x:575.35,y:464.2},0).wait(1).to({x:580.4,y:465.75},0).wait(1).to({x:585.4,y:467.3},0).wait(1).to({x:590.45,y:468.8},0).wait(1).to({x:595.45,y:470.35},0).wait(1).to({x:600.5,y:471.85},0).wait(1).to({x:605.55,y:473.4},0).wait(1).to({x:610.55,y:474.9},0).wait(1).to({x:615.6,y:476.45},0).wait(1).to({x:620.6,y:477.95},0).wait(1).to({x:625.65,y:479.5},0).wait(1).to({x:630.65,y:481},0).wait(1).to({x:635.7,y:482.55},0).wait(1).to({x:640.75,y:484.05},0).wait(1).to({x:645.75,y:485.6},0).wait(1).to({x:650.8,y:487.1},0).wait(1).to({x:655.8,y:488.65},0).wait(1).to({x:660.85,y:490.2},0).wait(1).to({x:665.85,y:491.7},0).wait(1).to({x:670.9,y:493.25},0).wait(1).to({x:675.95,y:494.75},0).wait(1).to({x:680.95,y:496.3},0).wait(1).to({x:686,y:497.8},0).wait(1).to({x:691,y:499.35},0).wait(1).to({x:696.05,y:500.85},0).wait(1).to({x:701.1,y:502.4},0).wait(1).to({x:706.1,y:503.9},0).wait(1).to({x:711.15,y:505.45},0).wait(1).to({x:716.15,y:506.95},0).wait(1).to({x:721.2,y:508.5},0).wait(1).to({x:726.25,y:510},0).wait(1).to({x:731.25,y:511.55},0).wait(1).to({x:736.3,y:513.05},0).wait(1).to({x:741.3,y:514.6},0).wait(1).to({x:746.35,y:516.15},0).wait(1).to({x:751.35,y:517.65},0).wait(1).to({x:756.4,y:519.2},0).wait(1).to({x:761.45,y:520.7},0).wait(1).to({x:766.45,y:522.25},0).wait(1).to({x:771.5,y:523.75},0).wait(1).to({x:776.5,y:525.3},0).wait(1).to({x:781.55,y:526.8},0).wait(1).to({x:786.6,y:528.35},0).wait(1).to({x:791.6,y:529.85},0).wait(1).to({x:796.65,y:531.4},0).wait(1).to({x:801.65,y:532.9},0).wait(1).to({x:806.7,y:534.45},0).wait(1).to({x:811.7,y:535.95},0).wait(1).to({x:816.75,y:537.5},0).wait(1).to({x:821.8,y:539.05},0).wait(1).to({x:826.8,y:540.55},0).wait(1).to({x:831.85,y:542.1},0).wait(1).to({x:836.85,y:543.6},0).wait(1).to({x:841.9,y:545.15},0).wait(1).to({x:846.95,y:546.65},0).wait(1).to({x:851.95,y:548.2},0).wait(1).to({x:857,y:549.7},0).wait(1).to({x:862,y:551.25},0).wait(1).to({x:867.05,y:552.75},0).wait(1).to({x:872.05,y:554.3},0).wait(1).to({x:877.1,y:555.8},0).wait(1).to({x:882.15,y:557.35},0).wait(1).to({x:887.15,y:558.85},0).wait(1).to({x:892.2,y:560.4},0).wait(1).to({x:897.2,y:561.9},0).wait(1).to({x:902.25,y:563.45},0).wait(1).to({x:907.3,y:565},0).wait(1).to({x:912.3,y:566.5},0).wait(1).to({x:917.35,y:568.05},0).wait(1).to({x:922.35,y:569.55},0).wait(1).to({x:927.4,y:571.1},0).wait(1).to({x:932.4,y:572.6},0).wait(1).to({x:937.45,y:574.15},0).wait(1));

	// Tierra_correccion
	this.instance_3 = new lib.SymTierra();
	this.instance_3.parent = this;
	this.instance_3.setTransform(-315.6,341.9,1,1,0,0,0,807.9,403.9);
	this.instance_3._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance_3).wait(81).to({_off:false},0).wait(1).to({regY:404,x:-310.2,y:342},0).wait(1).to({x:-304.85},0).wait(1).to({x:-299.45},0).wait(1).to({x:-294.1},0).wait(1).to({x:-288.7},0).wait(1).to({x:-283.35},0).wait(1).to({x:-278},0).wait(1).to({x:-272.6},0).wait(1).to({x:-267.25},0).wait(1).to({x:-261.85},0).wait(1).to({x:-256.5},0).wait(1).to({x:-251.1},0).wait(1).to({x:-245.75},0).wait(1).to({x:-240.35},0).wait(1).to({x:-235},0).wait(1).to({x:-229.6},0).wait(1).to({x:-224.25},0).wait(1).to({x:-218.9},0).wait(1).to({x:-213.5},0).wait(1).to({x:-208.15},0).wait(1).to({x:-202.75},0).wait(1).to({x:-197.4},0).wait(1).to({x:-192},0).wait(1).to({x:-186.65},0).wait(1).to({x:-181.3},0).wait(1).to({x:-175.9},0).wait(1).to({x:-170.55},0).wait(1).to({x:-165.15},0).wait(1).to({x:-159.8},0).wait(1).to({x:-154.4},0).wait(1).to({x:-149.05},0).wait(1).to({x:-143.65},0).wait(1).to({x:-138.3},0).wait(1).to({x:-132.95},0).wait(1).to({x:-127.55},0).wait(1).to({x:-122.2},0).wait(1).to({x:-116.8},0).wait(1).to({x:-111.45},0).wait(1));

	// Tierra
	this.instance_4 = new lib.SymTierra();
	this.instance_4.parent = this;
	this.instance_4.setTransform(280.65,341.9,1,1,0,0,0,807.9,403.9);

	this.timeline.addTween(cjs.Tween.get(this.instance_4).wait(1).to({regY:404,x:286.05,y:342},0).wait(1).to({x:291.4},0).wait(1).to({x:296.8},0).wait(1).to({x:302.15},0).wait(1).to({x:307.5},0).wait(1).to({x:312.9},0).wait(1).to({x:318.25},0).wait(1).to({x:323.65},0).wait(1).to({x:329},0).wait(1).to({x:334.35},0).wait(1).to({x:339.75},0).wait(1).to({x:345.1},0).wait(1).to({x:350.5},0).wait(1).to({x:355.85},0).wait(1).to({x:361.2},0).wait(1).to({x:366.6},0).wait(1).to({x:371.95},0).wait(1).to({x:377.35},0).wait(1).to({x:382.7},0).wait(1).to({x:388.05},0).wait(1).to({x:393.45},0).wait(1).to({x:398.8},0).wait(1).to({x:404.2},0).wait(1).to({x:409.55},0).wait(1).to({x:414.9},0).wait(1).to({x:420.3},0).wait(1).to({x:425.65},0).wait(1).to({x:431},0).wait(1).to({x:436.4},0).wait(1).to({x:441.75},0).wait(1).to({x:447.15},0).wait(1).to({x:452.5},0).wait(1).to({x:457.9},0).wait(1).to({x:463.25},0).wait(1).to({x:468.6},0).wait(1).to({x:474},0).wait(1).to({x:479.35},0).wait(1).to({x:484.7},0).wait(1).to({x:490.1},0).wait(1).to({x:495.45},0).wait(1).to({x:500.85},0).wait(1).to({x:506.2},0).wait(1).to({x:511.6},0).wait(1).to({x:516.95},0).wait(1).to({x:522.3},0).wait(1).to({x:527.7},0).wait(1).to({x:533.05},0).wait(1).to({x:538.4},0).wait(1).to({x:543.8},0).wait(1).to({x:549.15},0).wait(1).to({x:554.55},0).wait(1).to({x:559.9},0).wait(1).to({x:565.25},0).wait(1).to({x:570.65},0).wait(1).to({x:576},0).wait(1).to({x:581.4},0).wait(1).to({x:586.75},0).wait(1).to({x:592.1},0).wait(1).to({x:597.5},0).wait(1).to({x:602.85},0).wait(1).to({x:608.25},0).wait(1).to({x:613.6},0).wait(1).to({x:618.95},0).wait(1).to({x:624.35},0).wait(1).to({x:629.7},0).wait(1).to({x:635.1},0).wait(1).to({x:640.45},0).wait(1).to({x:645.8},0).wait(1).to({x:651.2},0).wait(1).to({x:656.55},0).wait(1).to({x:661.95},0).wait(1).to({x:667.3},0).wait(1).to({x:672.65},0).wait(1).to({x:678.05},0).wait(1).to({x:683.4},0).wait(1).to({x:688.75},0).wait(1).to({x:694.15},0).wait(1).to({x:699.5},0).wait(1).to({x:704.9},0).wait(1).to({x:710.25},0).wait(1).to({x:715.65},0).wait(1).to({x:721},0).wait(1).to({x:726.35},0).wait(1).to({x:731.75},0).wait(1).to({x:737.1},0).wait(1).to({x:742.5},0).wait(1).to({x:747.85},0).wait(1).to({x:753.2},0).wait(1).to({x:758.6},0).wait(1).to({x:763.95},0).wait(1).to({x:769.3},0).wait(1).to({x:774.7},0).wait(1).to({x:780.05},0).wait(1).to({x:785.45},0).wait(1).to({x:790.8},0).wait(1).to({x:796.15},0).wait(1).to({x:801.55},0).wait(1).to({x:806.9},0).wait(1).to({x:812.25},0).wait(1).to({x:817.6},0).wait(1).to({x:822.95},0).wait(1).to({x:828.35},0).wait(1).to({x:833.7},0).wait(1).to({x:839.1},0).wait(1).to({x:844.45},0).wait(1).to({x:849.8},0).wait(1).to({x:855.2},0).wait(1).to({x:860.55},0).wait(1).to({x:865.95},0).wait(1).to({x:871.3},0).wait(1).to({x:876.65},0).wait(1).to({x:882.05},0).wait(1).to({x:887.4},0).wait(1).to({x:892.8},0).wait(1).to({x:898.15},0).wait(1).to({x:903.5},0).wait(1).to({x:908.9},0).wait(1).to({x:914.25},0).wait(1).to({x:919.65},0).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(-1123.5,-232,3310,1430.7);


(lib.SymElSimbolo_zoomTierraMv = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// zoomTierraMv
	this.instance = new lib.SymGiroTierra("synched",0);
	this.instance.parent = this;
	this.instance.setTransform(587.75,304.3,0.8201,0.8202,0,0,0,670.4,312.5);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(1).to({regX:531.5,regY:483.3,scaleX:0.8228,scaleY:0.8229,x:473.45,y:444.85,startPosition:1},0).wait(1).to({scaleX:0.8254,scaleY:0.8255,x:473.05,y:445.25,startPosition:2},0).wait(1).to({scaleX:0.8281,scaleY:0.8282,x:472.7,y:445.7,startPosition:3},0).wait(1).to({scaleX:0.8308,scaleY:0.8309,x:472.3,y:446.2,startPosition:4},0).wait(1).to({scaleX:0.8334,scaleY:0.8335,x:471.95,y:446.65,startPosition:5},0).wait(1).to({scaleX:0.8361,scaleY:0.8362,x:471.6,y:447.1,startPosition:6},0).wait(1).to({scaleX:0.8388,scaleY:0.8389,x:471.2,y:447.55,startPosition:7},0).wait(1).to({scaleX:0.8414,scaleY:0.8415,x:470.8,y:448,startPosition:8},0).wait(1).to({scaleX:0.8441,scaleY:0.8442,x:470.5,y:448.45,startPosition:9},0).wait(1).to({scaleX:0.8468,scaleY:0.8469,x:470.1,y:448.95,startPosition:10},0).wait(1).to({scaleX:0.8494,scaleY:0.8495,x:469.7,y:449.35,startPosition:11},0).wait(1).to({scaleX:0.8521,scaleY:0.8522,x:469.35,y:449.8,startPosition:12},0).wait(1).to({scaleX:0.8548,scaleY:0.8548,x:469,y:450.3,startPosition:13},0).wait(1).to({scaleX:0.8574,scaleY:0.8575,x:468.6,y:450.75,startPosition:14},0).wait(1).to({scaleX:0.8601,scaleY:0.8602,x:468.25,y:451.15,startPosition:15},0).wait(1).to({scaleX:0.8628,scaleY:0.8628,x:467.85,y:451.65,startPosition:16},0).wait(1).to({scaleX:0.8654,scaleY:0.8655,x:467.5,y:452.1,startPosition:17},0).wait(1).to({scaleX:0.8681,scaleY:0.8682,x:467.15,y:452.55,startPosition:18},0).wait(1).to({scaleX:0.8708,scaleY:0.8708,x:466.75,y:453,startPosition:19},0).wait(1).to({scaleX:0.8734,scaleY:0.8735,x:466.4,y:453.45,startPosition:20},0).wait(1).to({scaleX:0.8761,scaleY:0.8762,x:466.05,y:453.9,startPosition:21},0).wait(1).to({scaleX:0.8788,scaleY:0.8788,x:465.7,y:454.4,startPosition:22},0).wait(1).to({scaleX:0.8814,scaleY:0.8815,x:465.35,y:454.85,startPosition:23},0).wait(1).to({scaleX:0.8841,scaleY:0.8842,x:465,y:455.25,startPosition:24},0).wait(1).to({scaleX:0.8868,scaleY:0.8868,x:464.6,y:455.75,startPosition:25},0).wait(1).to({scaleX:0.8894,scaleY:0.8895,x:464.25,y:456.2,startPosition:26},0).wait(1).to({scaleX:0.8921,scaleY:0.8922,x:463.85,y:456.7,startPosition:27},0).wait(1).to({scaleX:0.8948,scaleY:0.8948,x:463.5,y:457.1,startPosition:28},0).wait(1).to({scaleX:0.8974,scaleY:0.8975,x:463.15,y:457.55,startPosition:29},0).wait(1).to({scaleX:0.9001,scaleY:0.9002,x:462.75,y:458.05,startPosition:30},0).wait(1).to({scaleX:0.9028,scaleY:0.9028,x:462.35,y:458.5,startPosition:31},0).wait(1).to({scaleX:0.9054,scaleY:0.9055,x:462.05,y:458.95,startPosition:32},0).wait(1).to({scaleX:0.9081,scaleY:0.9082,x:461.65,y:459.4,startPosition:33},0).wait(1).to({scaleX:0.9107,scaleY:0.9108,x:461.25,y:459.85,startPosition:34},0).wait(1).to({scaleX:0.9134,scaleY:0.9135,x:460.9,y:460.3,startPosition:35},0).wait(1).to({scaleX:0.9161,scaleY:0.9162,x:460.55,y:460.8,startPosition:36},0).wait(1).to({scaleX:0.9187,scaleY:0.9188,x:460.15,y:461.2,startPosition:37},0).wait(1).to({scaleX:0.9214,scaleY:0.9215,x:459.8,y:461.65,startPosition:38},0).wait(1).to({scaleX:0.9241,scaleY:0.9242,x:459.4,y:462.15,startPosition:39},0).wait(1).to({scaleX:0.9267,scaleY:0.9268,x:459.05,y:462.6,startPosition:40},0).wait(1).to({scaleX:0.9294,scaleY:0.9295,x:458.65,y:463,startPosition:41},0).wait(1).to({scaleX:0.9321,scaleY:0.9322,x:458.3,y:463.5,startPosition:42},0).wait(1).to({scaleX:0.9347,scaleY:0.9348,x:457.95,y:463.95,startPosition:43},0).wait(1).to({scaleX:0.9374,scaleY:0.9375,x:457.55,y:464.4,startPosition:44},0).wait(1).to({scaleX:0.9401,scaleY:0.9402,x:457.2,y:464.9,startPosition:45},0).wait(1).to({scaleX:0.9427,scaleY:0.9428,x:456.8,y:465.3,startPosition:46},0).wait(1).to({scaleX:0.9454,scaleY:0.9455,x:456.45,y:465.75,startPosition:47},0).wait(1).to({scaleX:0.9481,scaleY:0.9482,x:456.1,y:466.25,startPosition:48},0).wait(1).to({scaleX:0.9507,scaleY:0.9508,x:455.7,y:466.7,startPosition:49},0).wait(1).to({scaleX:0.9534,scaleY:0.9535,x:455.3,y:467.1,startPosition:50},0).wait(1).to({scaleX:0.9561,scaleY:0.9562,x:455,y:467.6,startPosition:51},0).wait(1).to({scaleX:0.9587,scaleY:0.9588,x:454.6,y:468.05,startPosition:52},0).wait(1).to({scaleX:0.9614,scaleY:0.9615,x:454.2,y:468.5,startPosition:53},0).wait(1).to({scaleX:0.9641,scaleY:0.9642,x:453.85,y:468.95,startPosition:54},0).wait(1).to({scaleX:0.9667,scaleY:0.9668,x:453.5,y:469.4,startPosition:55},0).wait(1).to({scaleX:0.9694,scaleY:0.9695,x:453.15,y:469.85,startPosition:56},0).wait(1).to({scaleX:0.9721,scaleY:0.9722,x:452.75,y:470.35,startPosition:57},0).wait(1).to({scaleX:0.9747,scaleY:0.9748,x:452.35,y:470.8,startPosition:58},0).wait(1).to({scaleX:0.9774,scaleY:0.9775,x:452.05,y:471.25,startPosition:59},0).wait(1).to({scaleX:0.9801,scaleY:0.9802,x:451.65,y:471.75,startPosition:60},0).wait(1).to({scaleX:0.9827,scaleY:0.9828,x:451.25,y:472.2,startPosition:61},0).wait(1).to({scaleX:0.9854,scaleY:0.9855,x:450.9,y:472.65,startPosition:62},0).wait(1).to({scaleX:0.9881,scaleY:0.9882,x:450.55,y:473.1,startPosition:63},0).wait(1).to({scaleX:0.9907,scaleY:0.9908,x:450.15,y:473.55,startPosition:64},0).wait(1).to({scaleX:0.9934,scaleY:0.9935,x:449.8,y:474,startPosition:65},0).wait(1).to({scaleX:0.996,scaleY:0.9961,x:449.45,y:474.5,startPosition:66},0).wait(1).to({scaleX:0.9987,scaleY:0.9988,x:449.05,y:474.9,startPosition:67},0).wait(1).to({scaleX:1.0014,scaleY:1.0015,x:448.7,y:475.35,startPosition:68},0).wait(1).to({scaleX:1.004,scaleY:1.0041,x:448.3,y:475.85,startPosition:69},0).wait(1).to({scaleX:1.0067,scaleY:1.0068,x:447.95,y:476.3,startPosition:70},0).wait(1).to({scaleX:1.0094,scaleY:1.0095,x:447.6,y:476.75,startPosition:71},0).wait(1).to({scaleX:1.012,scaleY:1.0121,x:447.2,y:477.2,startPosition:72},0).wait(1).to({scaleX:1.0147,scaleY:1.0148,x:446.8,y:477.65,startPosition:73},0).wait(1).to({scaleX:1.0174,scaleY:1.0175,x:446.5,y:478.1,startPosition:74},0).wait(1).to({scaleX:1.02,scaleY:1.0201,x:446.1,y:478.6,startPosition:75},0).wait(1).to({scaleX:1.0227,scaleY:1.0228,x:445.7,y:479,startPosition:76},0).wait(1).to({scaleX:1.0254,scaleY:1.0255,x:445.35,y:479.45,startPosition:77},0).wait(1).to({scaleX:1.028,scaleY:1.0281,x:445,y:479.95,startPosition:78},0).wait(1).to({scaleX:1.0307,scaleY:1.0308,x:444.6,y:480.4,startPosition:79},0).wait(1).to({scaleX:1.0334,scaleY:1.0335,x:444.25,y:480.8,startPosition:80},0).wait(1).to({scaleX:1.036,scaleY:1.0361,x:443.85,y:481.3,startPosition:81},0).wait(1).to({scaleX:1.0387,scaleY:1.0388,x:443.5,y:481.75,startPosition:82},0).wait(1).to({scaleX:1.0414,scaleY:1.0415,x:443.15,y:482.2,startPosition:83},0).wait(1).to({scaleX:1.044,scaleY:1.0441,x:442.75,y:482.7,startPosition:84},0).wait(1).to({scaleX:1.0467,scaleY:1.0468,x:442.4,y:483.1,startPosition:85},0).wait(1).to({scaleX:1.0494,scaleY:1.0495,x:442.05,y:483.55,startPosition:86},0).wait(1).to({scaleX:1.052,scaleY:1.0521,x:441.65,y:484.05,startPosition:87},0).wait(1).to({scaleX:1.0547,scaleY:1.0548,x:441.25,y:484.5,startPosition:88},0).wait(1).to({scaleX:1.0574,scaleY:1.0575,x:440.95,y:484.9,startPosition:89},0).wait(1).to({scaleX:1.06,scaleY:1.0601,x:440.55,y:485.4,startPosition:90},0).wait(1).to({scaleX:1.0627,scaleY:1.0628,x:440.15,y:485.85,startPosition:91},0).wait(1).to({scaleX:1.0654,scaleY:1.0655,x:439.8,y:486.3,startPosition:92},0).wait(1).to({scaleX:1.068,scaleY:1.0681,x:439.45,y:486.8,startPosition:93},0).wait(1).to({scaleX:1.0707,scaleY:1.0708,x:439.05,y:487.2,startPosition:94},0).wait(1).to({scaleX:1.0734,scaleY:1.0735,x:438.7,y:487.65,startPosition:95},0).wait(1).to({scaleX:1.076,scaleY:1.0761,x:438.3,y:488.15,startPosition:96},0).wait(1).to({scaleX:1.0787,scaleY:1.0788,x:437.95,y:488.6,startPosition:97},0).wait(1).to({scaleX:1.0814,scaleY:1.0815,x:437.6,y:489,startPosition:98},0).wait(1).to({scaleX:1.084,scaleY:1.0841,x:437.2,y:489.5,startPosition:99},0).wait(1).to({scaleX:1.0867,scaleY:1.0868,x:436.8,y:489.95,startPosition:100},0).wait(1).to({scaleX:1.0893,scaleY:1.0895,x:436.5,y:490.4,startPosition:101},0).wait(1).to({scaleX:1.092,scaleY:1.0921,x:436.1,y:490.85,startPosition:102},0).wait(1).to({scaleX:1.0947,scaleY:1.0948,x:435.7,y:491.3,startPosition:103},0).wait(1).to({scaleX:1.0973,scaleY:1.0975,x:435.35,y:491.75,startPosition:104},0).wait(1).to({scaleX:1.1,scaleY:1.1001,x:435,y:492.25,startPosition:105},0).wait(1).to({scaleX:1.1027,scaleY:1.1028,x:434.6,y:492.7,startPosition:106},0).wait(1).to({scaleX:1.1053,scaleY:1.1055,x:434.25,y:493.1,startPosition:107},0).wait(1).to({scaleX:1.108,scaleY:1.1081,x:433.9,y:493.6,startPosition:108},0).wait(1).to({scaleX:1.1107,scaleY:1.1108,x:433.5,y:494.05,startPosition:109},0).wait(1).to({scaleX:1.1133,scaleY:1.1135,x:433.15,y:494.5,startPosition:110},0).wait(1).to({scaleX:1.116,scaleY:1.1161,x:432.75,y:494.95,startPosition:111},0).wait(1).to({scaleX:1.1187,scaleY:1.1188,x:432.4,y:495.4,startPosition:112},0).wait(1).to({scaleX:1.1213,scaleY:1.1215,x:432.05,y:495.9,startPosition:113},0).wait(1).to({scaleX:1.124,scaleY:1.1241,x:431.65,y:496.35,startPosition:114},0).wait(1).to({scaleX:1.1267,scaleY:1.1268,x:431.25,y:496.8,startPosition:115},0).wait(1).to({scaleX:1.1293,scaleY:1.1295,x:430.95,y:497.25,startPosition:116},0).wait(1).to({scaleX:1.132,scaleY:1.1321,x:430.55,y:497.7,startPosition:117},0).wait(1).to({scaleX:1.1347,scaleY:1.1348,x:430.15,y:498.15,startPosition:118},0).wait(1).to({scaleX:1.1373,scaleY:1.1375,x:429.8,y:498.6,startPosition:119},0).wait(1));

}).prototype = p = new cjs.MovieClip();


(lib.SymElSimbolo_Nubes_copy_copy_copy_copy = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Nubes_copy_copy_copy_copy
	this.instance = new lib.Symbol1_1();
	this.instance.parent = this;
	this.instance.setTransform(-873.5,-281.6,1,1,0,0,0,2448.4,1224.2);
	this.instance.alpha = 0.1797;
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(138).to({_off:false},0).wait(1).to({x:-874.55,y:-281.3,alpha:0.1961},0).wait(1).to({x:-875.6,y:-281.05,alpha:0.2122},0).wait(1).to({x:-876.65,y:-280.8,alpha:0.2282},0).wait(1).to({x:-877.7,y:-280.55,alpha:0.2443},0).wait(1).to({x:-878.75,y:-280.3,alpha:0.2604},0).wait(1).to({x:-879.8,y:-280.05,alpha:0.2765},0).wait(1).to({x:-880.85,y:-279.8,alpha:0.2925},0).wait(1).to({x:-881.9,y:-279.5,alpha:0.3086},0).wait(1).to({x:-882.95,y:-279.25,alpha:0.3247},0).wait(1).to({x:-884,y:-279,alpha:0.3408},0).wait(1).to({x:-885.05,y:-278.75,alpha:0.3569},0).wait(1).to({x:-886.1,y:-278.5,alpha:0.3729},0).wait(1).to({x:-887.15,y:-278.25,alpha:0.389},0).wait(1).to({x:-888.2,y:-278,alpha:0.4051},0).wait(1).to({x:-889.25,y:-277.7,alpha:0.4212},0).wait(1).to({x:-890.3,y:-277.45,alpha:0.4373},0).wait(1).to({x:-891.35,y:-277.2,alpha:0.4533},0).wait(1).to({x:-892.4,y:-276.95,alpha:0.4694},0).wait(1).to({x:-893.45,y:-276.7,alpha:0.4855},0).wait(1).to({x:-894.5,y:-276.45,alpha:0.5016},0).wait(1).to({x:-895.55,y:-276.2,alpha:0.5176},0).wait(1).to({x:-896.6,y:-275.9,alpha:0.5337},0).wait(1).to({x:-897.65,y:-275.65,alpha:0.5498},0).wait(1).to({x:-898.7,y:-275.4,alpha:0.5659},0).wait(1).to({x:-899.75,y:-275.15,alpha:0.582},0).wait(1).to({x:-900.8,y:-274.9,alpha:0.598},0).wait(1).to({x:-901.85,y:-274.65,alpha:0.6141},0).wait(1).to({x:-902.9,y:-274.4,alpha:0.6302},0).wait(1).to({x:-904,y:-274.15,alpha:0.6463},0).wait(1).to({x:-905.05,y:-273.85,alpha:0.6624},0).wait(1).to({x:-906.1,y:-273.6,alpha:0.6784},0).wait(1).to({x:-907.15,y:-273.35,alpha:0.6945},0).wait(1).to({x:-908.2,y:-273.1,alpha:0.7106},0).wait(1).to({x:-909.25,y:-272.85,alpha:0.7267},0).wait(1).to({x:-910.3,y:-272.6,alpha:0.7427},0).wait(1).to({x:-911.35,y:-272.35,alpha:0.7588},0).wait(1).to({x:-912.4,y:-272.05,alpha:0.7749},0).wait(1).to({x:-913.45,y:-271.8,alpha:0.791},0).wait(1).to({x:-914.5,y:-271.55,alpha:0.8071},0).wait(1).to({x:-915.55,y:-271.3,alpha:0.8231},0).wait(1).to({x:-916.6,y:-271.05,alpha:0.8392},0).wait(1).to({x:-917.65,y:-270.8,alpha:0.8553},0).wait(1).to({x:-918.7,y:-270.55,alpha:0.8714},0).wait(1).to({x:-919.75,y:-270.25,alpha:0.8875},0).wait(1).to({x:-920.8,y:-270,alpha:0.9035},0).wait(1).to({x:-921.85,y:-269.75,alpha:0.9196},0).wait(1).to({x:-922.9,y:-269.5,alpha:0.9357},0).wait(1).to({x:-923.95,y:-269.25,alpha:0.9518},0).wait(1).to({x:-925,y:-269,alpha:0.9678},0).wait(1).to({x:-926.05,y:-268.75,alpha:0.9839},0).wait(1).to({x:-914.9,y:-268.5,alpha:1},0).wait(3).to({alpha:0.9583},0).wait(1).to({alpha:0.9167},0).wait(1).to({alpha:0.875},0).wait(1).to({alpha:0.8333},0).wait(1).to({alpha:0.7917},0).wait(1).to({alpha:0.75},0).wait(1).to({alpha:0.7083},0).wait(1).to({alpha:0.6667},0).wait(1).to({alpha:0.625},0).wait(1).to({alpha:0.5833},0).wait(1).to({alpha:0.5417},0).wait(1).to({alpha:0.5},0).wait(1).to({alpha:0.4583},0).wait(1).to({alpha:0.4167},0).wait(1).to({alpha:0.375},0).wait(1).to({alpha:0.3333},0).wait(1).to({alpha:0.2917},0).wait(1).to({alpha:0.25},0).wait(1).to({alpha:0.2083},0).wait(1).to({alpha:0.1667},0).wait(1).to({alpha:0.125},0).wait(1).to({alpha:0.0833},0).wait(1).to({alpha:0.0417},0).wait(1).to({alpha:0},0).wait(1));

}).prototype = p = new cjs.MovieClip();


(lib.SymElSimbolo_Nubes_copy_copy_copy = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Nubes_copy_copy_copy
	this.instance = new lib.Symbol1_1();
	this.instance.parent = this;
	this.instance.setTransform(-105.05,182.35,1,1,0,0,0,2448.4,1224.2);
	this.instance.alpha = 0.1211;
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(133).to({_off:false},0).wait(1).to({scaleX:1.007,scaleY:1.007,x:-120.55,y:181.6,alpha:0.1352},0).wait(1).to({scaleX:1.014,scaleY:1.014,x:-136.05,y:180.9,alpha:0.1503},0).wait(1).to({scaleX:1.0211,scaleY:1.0211,x:-151.6,y:180.2,alpha:0.1655},0).wait(1).to({scaleX:1.0281,scaleY:1.0281,x:-167.1,y:179.5,alpha:0.1807},0).wait(1).to({scaleX:1.0351,scaleY:1.0351,x:-182.55,y:178.8,alpha:0.1959},0).wait(1).to({scaleX:1.0421,scaleY:1.0421,x:-198.05,y:178.1,alpha:0.211},0).wait(1).to({scaleX:1.0491,scaleY:1.0491,x:-213.6,y:177.4,alpha:0.2262},0).wait(1).to({scaleX:1.0561,scaleY:1.0561,x:-229.1,y:176.65,alpha:0.2414},0).wait(1).to({scaleX:1.0632,scaleY:1.0632,x:-244.65,y:175.95,alpha:0.2566},0).wait(1).to({scaleX:1.0702,scaleY:1.0702,x:-260.1,y:175.25,alpha:0.2717},0).wait(1).to({scaleX:1.0772,scaleY:1.0772,x:-275.65,y:174.55,alpha:0.2869},0).wait(1).to({scaleX:1.0842,scaleY:1.0842,x:-291.15,y:173.85,alpha:0.3021},0).wait(1).to({scaleX:1.0912,scaleY:1.0912,x:-306.65,y:173.1,alpha:0.3172},0).wait(1).to({scaleX:1.0982,scaleY:1.0982,x:-322.15,y:172.4,alpha:0.3324},0).wait(1).to({scaleX:1.1053,scaleY:1.1053,x:-337.65,y:171.7,alpha:0.3476},0).wait(1).to({scaleX:1.1123,scaleY:1.1123,x:-353.15,y:171,alpha:0.3628},0).wait(1).to({scaleX:1.1193,scaleY:1.1193,x:-368.65,y:170.3,alpha:0.3779},0).wait(1).to({scaleX:1.1263,scaleY:1.1263,x:-384.2,y:169.55,alpha:0.3931},0).wait(1).to({scaleX:1.1333,scaleY:1.1333,x:-399.7,y:168.85,alpha:0.4083},0).wait(1).to({scaleX:1.1403,scaleY:1.1403,x:-415.2,y:168.15,alpha:0.4234},0).wait(1).to({scaleX:1.1474,scaleY:1.1474,x:-430.7,y:167.45,alpha:0.4386},0).wait(1).to({scaleX:1.1544,scaleY:1.1544,x:-446.25,y:166.75,alpha:0.4538},0).wait(1).to({scaleX:1.1614,scaleY:1.1614,x:-461.7,y:166.05,alpha:0.469},0).wait(1).to({scaleX:1.1684,scaleY:1.1684,x:-477.2,y:165.3,alpha:0.4841},0).wait(1).to({scaleX:1.1754,scaleY:1.1754,x:-492.75,y:164.6,alpha:0.4993},0).wait(1).to({scaleX:1.1824,scaleY:1.1824,x:-508.3,y:163.9,alpha:0.5145},0).wait(1).to({scaleX:1.1895,scaleY:1.1895,x:-523.8,y:163.2,alpha:0.5297},0).wait(1).to({scaleX:1.1965,scaleY:1.1965,x:-539.25,y:162.45,alpha:0.5448},0).wait(1).to({scaleX:1.2035,scaleY:1.2035,x:-554.75,y:161.75,alpha:0.56},0).wait(1).to({scaleX:1.2105,scaleY:1.2105,x:-570.3,y:161.05,alpha:0.5752},0).wait(1).to({scaleX:1.2175,scaleY:1.2175,x:-585.75,y:160.35,alpha:0.5903},0).wait(1).to({scaleX:1.2246,scaleY:1.2246,x:-601.25,y:159.65,alpha:0.6055},0).wait(1).to({scaleX:1.2316,scaleY:1.2316,x:-616.8,y:158.95,alpha:0.6207},0).wait(1).to({scaleX:1.2386,scaleY:1.2386,x:-632.3,y:158.25,alpha:0.6359},0).wait(1).to({scaleX:1.2456,scaleY:1.2456,x:-647.85,y:157.5,alpha:0.651},0).wait(1).to({scaleX:1.2526,scaleY:1.2526,x:-663.35,y:156.8,alpha:0.6662},0).wait(1).to({scaleX:1.2596,scaleY:1.2596,x:-678.85,y:156.1,alpha:0.6814},0).wait(1).to({scaleX:1.2667,scaleY:1.2667,x:-694.35,y:155.4,alpha:0.6966},0).wait(1).to({scaleX:1.2737,scaleY:1.2737,x:-709.85,y:154.65,alpha:0.7117},0).wait(1).to({scaleX:1.2807,scaleY:1.2807,x:-725.35,y:153.95,alpha:0.7269},0).wait(1).to({scaleX:1.2877,scaleY:1.2877,x:-740.85,y:153.25,alpha:0.7421},0).wait(1).to({scaleX:1.2947,scaleY:1.2947,x:-756.35,y:152.55,alpha:0.7572},0).wait(1).to({scaleX:1.3017,scaleY:1.3017,x:-771.9,y:151.8,alpha:0.7724},0).wait(1).to({scaleX:1.3088,scaleY:1.3088,x:-787.4,y:151.1,alpha:0.7876},0).wait(1).to({scaleX:1.3158,scaleY:1.3158,x:-802.95,y:150.4,alpha:0.8028},0).wait(1).to({scaleX:1.3228,scaleY:1.3228,x:-818.4,y:149.7,alpha:0.8179},0).wait(1).to({scaleX:1.3298,scaleY:1.3298,x:-833.9,y:149,alpha:0.8331},0).wait(1).to({scaleX:1.3368,scaleY:1.3368,x:-849.4,y:148.3,alpha:0.8483},0).wait(1).to({scaleX:1.3438,scaleY:1.3438,x:-864.95,y:147.6,alpha:0.8634},0).wait(1).to({scaleX:1.3509,scaleY:1.3509,x:-880.4,y:146.85,alpha:0.8786},0).wait(1).to({scaleX:1.3579,scaleY:1.3579,x:-895.9,y:146.15,alpha:0.8938},0).wait(1).to({x:-897.6,alpha:0.909},0).wait(1).to({x:-899.35,alpha:0.9241},0).wait(1).to({x:-901.05,alpha:0.9393},0).wait(1).to({x:-902.75,alpha:0.9545},0).wait(1).to({x:-904.5,alpha:0.9697},0).wait(1).to({x:-906.2,alpha:0.9848},0).wait(1).to({x:-907.9,alpha:1},0).wait(1).to({alpha:0.9444},0).wait(1).to({alpha:0.8889},0).wait(1).to({alpha:0.8333},0).wait(1).to({alpha:0.7778},0).wait(1).to({alpha:0.7222},0).wait(1).to({alpha:0.6667},0).wait(1).to({alpha:0.6111},0).wait(1).to({alpha:0.5556},0).wait(1).to({alpha:0.5},0).wait(1).to({alpha:0.4444},0).wait(1).to({alpha:0.3889},0).wait(1).to({alpha:0.3333},0).wait(1).to({alpha:0.2778},0).wait(1).to({alpha:0.2222},0).wait(1).to({alpha:0.1667},0).wait(1).to({alpha:0.1111},0).wait(1).to({alpha:0.0556},0).wait(1).to({alpha:0},0).wait(1));

}).prototype = p = new cjs.MovieClip();


(lib.SymElSimbolo_Nubes_copy_copy = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Nubes_copy_copy
	this.instance = new lib.Symbol1_1();
	this.instance.parent = this;
	this.instance.setTransform(577.4,306.2,1,1,0,0,0,2448.4,1224.2);
	this.instance.alpha = 0;
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(125).to({_off:false},0).wait(1).to({scaleX:1.0067,scaleY:1.0067,alpha:0.0217},0).wait(1).to({scaleX:1.0133,scaleY:1.0133,alpha:0.0435},0).wait(1).to({scaleX:1.02,scaleY:1.02,alpha:0.0652},0).wait(1).to({scaleX:1.0267,scaleY:1.0267,alpha:0.087},0).wait(1).to({scaleX:1.0333,scaleY:1.0333,y:306.25,alpha:0.1087},0).wait(1).to({scaleX:1.04,scaleY:1.04,y:306.2,alpha:0.1304},0).wait(1).to({scaleX:1.0466,scaleY:1.0466,y:306.25,alpha:0.1522},0).wait(1).to({scaleX:1.0533,scaleY:1.0533,y:306.2,alpha:0.1739},0).wait(1).to({scaleX:1.06,scaleY:1.06,alpha:0.1957},0).wait(1).to({scaleX:1.0666,scaleY:1.0666,alpha:0.2174},0).wait(1).to({scaleX:1.0733,scaleY:1.0733,x:577.45,alpha:0.2391},0).wait(1).to({scaleX:1.08,scaleY:1.08,x:577.4,alpha:0.2609},0).wait(1).to({scaleX:1.0866,scaleY:1.0866,y:306.25,alpha:0.2826},0).wait(1).to({scaleX:1.0933,scaleY:1.0933,x:577.45,alpha:0.3043},0).wait(1).to({scaleX:1.0999,scaleY:1.0999,x:577.4,alpha:0.3261},0).wait(1).to({scaleX:1.1066,scaleY:1.1066,y:306.2,alpha:0.3478},0).wait(1).to({scaleX:1.1133,scaleY:1.1133,alpha:0.3696},0).wait(1).to({scaleX:1.1199,scaleY:1.1199,alpha:0.3913},0).wait(1).to({scaleX:1.1266,scaleY:1.1266,alpha:0.413},0).wait(1).to({scaleX:1.1333,scaleY:1.1333,y:306.25,alpha:0.4348},0).wait(1).to({scaleX:1.1399,scaleY:1.1399,alpha:0.4565},0).wait(1).to({scaleX:1.1466,scaleY:1.1466,x:577.45,alpha:0.4783},0).wait(1).to({scaleX:1.1532,scaleY:1.1532,x:577.4,y:306.2,alpha:0.5},0).wait(1).to({scaleX:1.1599,scaleY:1.1599,alpha:0.5217},0).wait(1).to({scaleX:1.1666,scaleY:1.1666,alpha:0.5435},0).wait(1).to({scaleX:1.1732,scaleY:1.1732,x:577.45,alpha:0.5652},0).wait(1).to({scaleX:1.1799,scaleY:1.1799,x:577.4,alpha:0.587},0).wait(1).to({scaleX:1.1866,scaleY:1.1866,y:306.25,alpha:0.6087},0).wait(1).to({scaleX:1.1932,scaleY:1.1932,y:306.2,alpha:0.6304},0).wait(1).to({scaleX:1.1999,scaleY:1.1999,y:306.25,alpha:0.6522},0).wait(1).to({scaleX:1.2065,scaleY:1.2065,y:306.2,alpha:0.6739},0).wait(1).to({scaleX:1.2132,scaleY:1.2132,alpha:0.6957},0).wait(1).to({scaleX:1.2199,scaleY:1.2199,alpha:0.7174},0).wait(1).to({scaleX:1.2265,scaleY:1.2265,alpha:0.7391},0).wait(1).to({scaleX:1.2332,scaleY:1.2332,alpha:0.7609},0).wait(1).to({scaleX:1.2399,scaleY:1.2399,y:306.25,alpha:0.7826},0).wait(1).to({scaleX:1.2465,scaleY:1.2465,x:577.45,alpha:0.8043},0).wait(1).to({scaleX:1.2532,scaleY:1.2532,x:577.35,y:306.2,alpha:0.8261},0).wait(1).to({scaleX:1.2599,scaleY:1.2599,x:577.4,alpha:0.8478},0).wait(1).to({scaleX:1.2665,scaleY:1.2665,alpha:0.8696},0).wait(1).to({scaleX:1.2732,scaleY:1.2732,alpha:0.8913},0).wait(1).to({scaleX:1.2798,scaleY:1.2798,alpha:0.913},0).wait(1).to({scaleX:1.2865,scaleY:1.2865,y:306.25,alpha:0.9348},0).wait(1).to({scaleX:1.2932,scaleY:1.2932,alpha:0.9565},0).wait(1).to({scaleX:1.2998,scaleY:1.2998,x:577.45,alpha:0.9783},0).wait(1).to({scaleX:1.3065,scaleY:1.3065,x:577.4,y:306.2,alpha:1},0).wait(21).to({alpha:0.95},0).wait(1).to({alpha:0.9},0).wait(1).to({alpha:0.85},0).wait(1).to({alpha:0.8},0).wait(1).to({alpha:0.75},0).wait(1).to({alpha:0.7},0).wait(1).to({alpha:0.65},0).wait(1).to({alpha:0.6},0).wait(1).to({alpha:0.55},0).wait(1).to({alpha:0.5},0).wait(1).to({alpha:0.45},0).wait(1).to({alpha:0.4},0).wait(1).to({alpha:0.35},0).wait(1).to({alpha:0.3},0).wait(1).to({alpha:0.25},0).wait(1).to({alpha:0.2},0).wait(1).to({alpha:0.15},0).wait(1).to({alpha:0.1},0).wait(1).to({alpha:0.05},0).wait(1).to({alpha:0},0).wait(1));

}).prototype = p = new cjs.MovieClip();


(lib.SymElSimbolo_Nubes_copy = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Nubes_copy
	this.instance = new lib.Symbol2_1();
	this.instance.parent = this;
	this.instance.setTransform(1005.4,1098.2,1,1,0,0,0,2448.4,1224.2);
	this.instance.alpha = 0;
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(125).to({_off:false},0).wait(1).to({scaleX:1.015,scaleY:1.015,x:1002.25,y:1110.35,alpha:0.0244},0).wait(1).to({scaleX:1.0299,scaleY:1.0299,x:999.05,y:1122.5,alpha:0.0488},0).wait(1).to({scaleX:1.0449,scaleY:1.0449,x:995.9,y:1134.65,alpha:0.0732},0).wait(1).to({scaleX:1.0598,scaleY:1.0598,x:992.7,y:1146.8,alpha:0.0976},0).wait(1).to({scaleX:1.0748,scaleY:1.0748,x:989.55,y:1158.9,alpha:0.122},0).wait(1).to({scaleX:1.0897,scaleY:1.0897,x:986.45,y:1171.05,alpha:0.1463},0).wait(1).to({scaleX:1.1047,scaleY:1.1047,x:983.25,y:1183.2,alpha:0.1707},0).wait(1).to({scaleX:1.1196,scaleY:1.1196,x:980,y:1195.35,alpha:0.1951},0).wait(1).to({scaleX:1.1346,scaleY:1.1346,x:976.9,y:1207.5,alpha:0.2195},0).wait(1).to({scaleX:1.1495,scaleY:1.1495,x:973.7,y:1219.6,alpha:0.2439},0).wait(1).to({scaleX:1.1645,scaleY:1.1645,x:970.55,y:1231.8,alpha:0.2683},0).wait(1).to({scaleX:1.1794,scaleY:1.1794,x:967.35,y:1243.95,alpha:0.2927},0).wait(1).to({scaleX:1.1944,scaleY:1.1944,x:964.25,y:1256.1,alpha:0.3171},0).wait(1).to({scaleX:1.2093,scaleY:1.2093,x:961.05,y:1268.2,alpha:0.3415},0).wait(1).to({scaleX:1.2243,scaleY:1.2243,x:957.85,y:1280.35,alpha:0.3659},0).wait(1).to({scaleX:1.2392,scaleY:1.2392,x:954.7,y:1292.5,alpha:0.3902},0).wait(1).to({scaleX:1.2542,scaleY:1.2542,x:951.55,y:1304.65,alpha:0.4146},0).wait(1).to({scaleX:1.2691,scaleY:1.2691,x:948.35,y:1316.8,alpha:0.439},0).wait(1).to({scaleX:1.2841,scaleY:1.2841,x:945.2,y:1328.9,alpha:0.4634},0).wait(1).to({scaleX:1.299,scaleY:1.299,x:942.05,y:1341.05,alpha:0.4878},0).wait(1).to({scaleX:1.314,scaleY:1.314,x:938.9,y:1353.2,alpha:0.5122},0).wait(1).to({scaleX:1.3289,scaleY:1.3289,x:935.65,y:1365.35,alpha:0.5366},0).wait(1).to({scaleX:1.3439,scaleY:1.3439,x:932.55,y:1377.45,alpha:0.561},0).wait(1).to({scaleX:1.3588,scaleY:1.3588,x:929.35,y:1389.6,alpha:0.5854},0).wait(1).to({scaleX:1.3738,scaleY:1.3738,x:926.2,y:1401.8,alpha:0.6098},0).wait(1).to({scaleX:1.3887,scaleY:1.3887,x:923,y:1413.95,alpha:0.6341},0).wait(1).to({scaleX:1.4037,scaleY:1.4037,x:919.9,y:1426.1,alpha:0.6585},0).wait(1).to({scaleX:1.4186,scaleY:1.4186,x:916.7,y:1438.2,alpha:0.6829},0).wait(1).to({scaleX:1.4336,scaleY:1.4336,x:913.5,y:1450.35,alpha:0.7073},0).wait(1).to({scaleX:1.4485,scaleY:1.4485,x:910.35,y:1462.5,alpha:0.7317},0).wait(1).to({scaleX:1.4635,scaleY:1.4635,x:907.2,y:1474.65,alpha:0.7561},0).wait(1).to({scaleX:1.4784,scaleY:1.4784,x:904,y:1486.8,alpha:0.7805},0).wait(1).to({scaleX:1.4934,scaleY:1.4934,x:900.85,y:1498.9,alpha:0.8049},0).wait(1).to({scaleX:1.5083,scaleY:1.5083,x:897.7,y:1511.05,alpha:0.8293},0).wait(1).to({scaleX:1.5233,scaleY:1.5233,x:894.55,y:1523.2,alpha:0.8537},0).wait(1).to({scaleX:1.5383,scaleY:1.5383,x:891.3,y:1535.35,alpha:0.878},0).wait(1).to({scaleX:1.5532,scaleY:1.5532,x:888.2,y:1547.45,alpha:0.9024},0).wait(1).to({scaleX:1.5682,scaleY:1.5682,x:885,y:1559.6,alpha:0.9268},0).wait(1).to({scaleX:1.5831,scaleY:1.5831,x:881.85,y:1571.8,alpha:0.9512},0).wait(1).to({scaleX:1.5981,scaleY:1.5981,x:878.65,y:1583.95,alpha:0.9756},0).wait(1).to({scaleX:1.613,scaleY:1.613,x:875.55,y:1596.1,alpha:1},0).wait(1).to({scaleX:1.6197,scaleY:1.6197,x:882.95,y:1600.95},0).wait(1).to({scaleX:1.6263,scaleY:1.6263,x:890.45,y:1605.85},0).wait(1).to({scaleX:1.633,scaleY:1.633,x:897.95,y:1610.75},0).wait(1).to({scaleX:1.6397,scaleY:1.6397,x:905.4,y:1615.7},0).wait(1).to({scaleX:1.6463,scaleY:1.6463,x:912.85,y:1620.55},0).wait(1).to({scaleX:1.653,scaleY:1.653,x:920.3,y:1625.5},0).wait(1).to({scaleX:1.6597,scaleY:1.6597,x:927.8,y:1630.4},0).wait(1).to({scaleX:1.6663,scaleY:1.6663,x:935.25,y:1635.3},0).wait(1).to({scaleX:1.673,scaleY:1.673,x:942.65,y:1640.2},0).wait(1).to({scaleX:1.6796,scaleY:1.6796,x:950.15,y:1645.1},0).wait(1).to({scaleX:1.6863,scaleY:1.6863,x:957.6,y:1650.05},0).wait(1).to({scaleX:1.693,scaleY:1.693,x:965.05,y:1654.9},0).wait(1).to({scaleX:1.6996,scaleY:1.6996,x:972.55,y:1659.85},0).wait(1).to({scaleX:1.7063,scaleY:1.7063,x:980,y:1664.75},0).wait(1).to({scaleX:1.713,scaleY:1.713,x:987.5,y:1669.6},0).wait(1).to({scaleX:1.7196,scaleY:1.7196,x:994.9,y:1674.5},0).wait(1).to({scaleX:1.7263,scaleY:1.7263,x:1002.4,y:1679.4},0).wait(1).to({scaleX:1.733,scaleY:1.733,x:1009.85,y:1684.35},0).wait(1).to({scaleX:1.7396,scaleY:1.7396,x:1017.35,y:1689.25},0).wait(1).to({scaleX:1.7463,scaleY:1.7463,x:1024.8,y:1694.15},0).wait(1).to({scaleX:1.753,scaleY:1.753,x:1032.25,y:1699.05},0).wait(1).to({scaleX:1.7596,scaleY:1.7596,x:1039.75,y:1703.95},0).wait(1).to({scaleX:1.7663,scaleY:1.7663,x:1047.2,y:1708.85},0).wait(3).to({alpha:0.9545},0).wait(1).to({alpha:0.9091},0).wait(1).to({alpha:0.8636},0).wait(1).to({alpha:0.8182},0).wait(1).to({alpha:0.7727},0).wait(1).to({alpha:0.7273},0).wait(1).to({alpha:0.6818},0).wait(1).to({alpha:0.6364},0).wait(1).to({alpha:0.5909},0).wait(1).to({alpha:0.5455},0).wait(1).to({alpha:0.5},0).wait(1).to({alpha:0.4545},0).wait(1).to({alpha:0.4091},0).wait(1).to({alpha:0.3636},0).wait(1).to({alpha:0.3182},0).wait(1).to({alpha:0.2727},0).wait(1).to({alpha:0.2273},0).wait(1).to({alpha:0.1818},0).wait(1).to({alpha:0.1364},0).wait(1).to({alpha:0.0909},0).wait(1).to({alpha:0.0455},0).wait(1).to({alpha:0},0).wait(1));

}).prototype = p = new cjs.MovieClip();


(lib.SymElSimbolo_Nubes = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Nubes
	this.instance = new lib.Symbol3_1();
	this.instance.parent = this;
	this.instance.setTransform(809.2,594.1,1,1,0,0,0,1952.2,976.1);
	this.instance.alpha = 0;
	this.instance._off = true;

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(125).to({_off:false},0).wait(1).to({regX:1952.3,scaleX:1.0153,scaleY:1.0153,y:594.8,alpha:0.0213},0).wait(1).to({scaleX:1.0307,scaleY:1.0307,x:809.15,y:595.45,alpha:0.0426},0).wait(1).to({scaleX:1.046,scaleY:1.046,x:809.05,y:596.2,alpha:0.0638},0).wait(1).to({scaleX:1.0613,scaleY:1.0613,x:809,y:596.85,alpha:0.0851},0).wait(1).to({scaleX:1.0766,scaleY:1.0766,x:808.9,y:597.5,alpha:0.1064},0).wait(1).to({scaleX:1.092,scaleY:1.092,x:808.8,y:598.2,alpha:0.1277},0).wait(1).to({scaleX:1.1073,scaleY:1.1073,x:808.7,y:598.85,alpha:0.1489},0).wait(1).to({scaleX:1.1226,scaleY:1.1226,x:808.65,y:599.6,alpha:0.1702},0).wait(1).to({scaleX:1.1379,scaleY:1.1379,x:808.55,y:600.25,alpha:0.1915},0).wait(1).to({scaleX:1.1533,scaleY:1.1533,x:808.5,y:600.9,alpha:0.2128},0).wait(1).to({scaleX:1.1686,scaleY:1.1686,x:808.4,y:601.6,alpha:0.234},0).wait(1).to({scaleX:1.1839,scaleY:1.1839,x:808.3,y:602.3,alpha:0.2553},0).wait(1).to({scaleX:1.1993,scaleY:1.1993,x:808.2,y:603,alpha:0.2766},0).wait(1).to({scaleX:1.2146,scaleY:1.2146,x:808.15,y:603.65,alpha:0.2979},0).wait(1).to({scaleX:1.2299,scaleY:1.2299,x:808.05,y:604.3,alpha:0.3191},0).wait(1).to({scaleX:1.2452,scaleY:1.2452,x:808,y:605.05,alpha:0.3404},0).wait(1).to({scaleX:1.2606,scaleY:1.2606,x:807.9,y:605.7,alpha:0.3617},0).wait(1).to({scaleX:1.2759,scaleY:1.2759,x:807.8,y:606.4,alpha:0.383},0).wait(1).to({scaleX:1.2912,scaleY:1.2912,x:807.7,y:607.05,alpha:0.4043},0).wait(1).to({scaleX:1.3066,scaleY:1.3066,x:807.65,y:607.7,alpha:0.4255},0).wait(1).to({scaleX:1.3219,scaleY:1.3219,x:807.55,y:608.45,alpha:0.4468},0).wait(1).to({scaleX:1.3372,scaleY:1.3372,x:807.45,y:609.1,alpha:0.4681},0).wait(1).to({scaleX:1.3525,scaleY:1.3525,x:807.4,y:609.75,alpha:0.4894},0).wait(1).to({scaleX:1.3679,scaleY:1.3679,x:807.25,y:610.45,alpha:0.5106},0).wait(1).to({scaleX:1.3832,scaleY:1.3832,x:807.2,y:611.1,alpha:0.5319},0).wait(1).to({scaleX:1.3985,scaleY:1.3985,x:807.1,y:611.85,alpha:0.5532},0).wait(1).to({scaleX:1.4138,scaleY:1.4138,x:807.05,y:612.5,alpha:0.5745},0).wait(1).to({scaleX:1.4292,scaleY:1.4292,x:806.95,y:613.15,alpha:0.5957},0).wait(1).to({scaleX:1.4445,scaleY:1.4445,x:806.85,y:613.85,alpha:0.617},0).wait(1).to({scaleX:1.4598,scaleY:1.4598,x:806.75,y:614.55,alpha:0.6383},0).wait(1).to({scaleX:1.4752,scaleY:1.4752,x:806.65,y:615.25,alpha:0.6596},0).wait(1).to({scaleX:1.4905,scaleY:1.4905,x:806.6,y:615.9,alpha:0.6809},0).wait(1).to({scaleX:1.5058,scaleY:1.5058,x:806.5,y:616.55,alpha:0.7021},0).wait(1).to({scaleX:1.5211,scaleY:1.5211,x:806.45,y:617.3,alpha:0.7234},0).wait(1).to({scaleX:1.5365,scaleY:1.5365,x:806.35,y:617.95,alpha:0.7447},0).wait(1).to({scaleX:1.5518,scaleY:1.5518,x:806.25,y:618.65,alpha:0.766},0).wait(1).to({scaleX:1.5671,scaleY:1.5671,x:806.15,y:619.3,alpha:0.7872},0).wait(1).to({scaleX:1.5825,scaleY:1.5825,x:806.1,y:619.95,alpha:0.8085},0).wait(1).to({scaleX:1.5978,scaleY:1.5978,x:806.05,y:620.7,alpha:0.8298},0).wait(1).to({scaleX:1.6131,scaleY:1.6131,x:805.95,y:621.35,alpha:0.8511},0).wait(1).to({scaleX:1.6284,scaleY:1.6284,x:805.9,y:622.05,alpha:0.8723},0).wait(1).to({scaleX:1.6438,scaleY:1.6438,x:805.75,y:622.7,alpha:0.8936},0).wait(1).to({scaleX:1.6591,scaleY:1.6591,x:805.7,y:623.4,alpha:0.9149},0).wait(1).to({scaleX:1.6744,scaleY:1.6744,x:805.6,y:624.1,alpha:0.9362},0).wait(1).to({scaleX:1.6897,scaleY:1.6897,x:805.55,y:624.75,alpha:0.9574},0).wait(1).to({scaleX:1.7051,scaleY:1.7051,x:805.45,y:625.4,alpha:0.9787},0).wait(1).to({scaleX:1.7204,scaleY:1.7204,x:805.35,y:626.15,alpha:1},0).wait(1).to({x:804.3,y:626.45},0).wait(1).to({x:803.25,y:626.75},0).wait(1).to({x:802.2,y:627.05},0).wait(1).to({x:801.15,y:627.3},0).wait(1).to({x:800.1,y:627.6},0).wait(1).to({x:799.05,y:627.9},0).wait(1).to({x:798,y:628.2},0).wait(1).to({x:796.95,y:628.5},0).wait(1).to({x:795.9,y:628.8},0).wait(1).to({x:794.85,y:629.1},0).wait(1).to({x:793.8,y:629.4},0).wait(1).to({x:792.75,y:629.7},0).wait(1).to({x:791.7,y:629.95},0).wait(1).to({x:790.65,y:630.25},0).wait(1).to({x:789.6,y:630.55},0).wait(1).to({x:788.55,y:630.85},0).wait(1).to({x:787.5,y:631.15},0).wait(1).to({x:786.45,y:631.45},0).wait(1).to({x:785.35,y:631.75},0).wait(1).to({alpha:0.9583},0).wait(1).to({alpha:0.9167},0).wait(1).to({alpha:0.875},0).wait(1).to({alpha:0.8333},0).wait(1).to({alpha:0.7917},0).wait(1).to({alpha:0.75},0).wait(1).to({alpha:0.7083},0).wait(1).to({alpha:0.6667},0).wait(1).to({alpha:0.625},0).wait(1).to({alpha:0.5833},0).wait(1).to({alpha:0.5417},0).wait(1).to({alpha:0.5},0).wait(1).to({alpha:0.4583},0).wait(1).to({alpha:0.4167},0).wait(1).to({alpha:0.375},0).wait(1).to({alpha:0.3333},0).wait(1).to({alpha:0.2917},0).wait(1).to({alpha:0.25},0).wait(1).to({alpha:0.2083},0).wait(1).to({alpha:0.1667},0).wait(1).to({alpha:0.125},0).wait(1).to({alpha:0.0833},0).wait(1).to({alpha:0.0417},0).wait(1).to({alpha:0},0).wait(1));

}).prototype = p = new cjs.MovieClip();


(lib.SymElSimbolo_FrameCentroAmerica = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// FrameCentroAmerica
	this.instance = new lib.SymGiroTierraFrame("synched",0);
	this.instance.parent = this;
	this.instance.setTransform(-720.2,-74,0.8228,0.8228,0,0,0,-919.1,-146.5);

	this.timeline.addTween(cjs.Tween.get(this.instance).wait(120).to({regX:673.2,regY:314.2,scaleX:1.1402,scaleY:1.1402,x:590.6,y:305.05},0).wait(1).to({regX:633.6,regY:525.9,scaleX:1.3769,scaleY:1.3769,x:530.8,y:593.05},0).wait(1).to({scaleX:1.6136,scaleY:1.6136,x:516.15,y:639.6},0).wait(1).to({scaleX:1.8502,scaleY:1.8502,x:501.5,y:686.25},0).wait(1).to({scaleX:2.0869,scaleY:2.0869,x:486.85,y:732.8},0).wait(1).to({scaleX:2.3236,scaleY:2.3236,x:472.2,y:779.35},0).wait(1).to({scaleX:2.5602,scaleY:2.5602,x:457.55,y:825.95},0).wait(1).to({scaleX:2.7969,scaleY:2.7969,x:442.9,y:872.55},0).wait(1).to({scaleX:3.0336,scaleY:3.0336,x:428.25,y:919.1},0).wait(1).to({scaleX:3.2702,scaleY:3.2702,x:413.6,y:965.7},0).wait(1).to({scaleX:3.5069,scaleY:3.5069,x:398.95,y:1012.25},0).wait(1).to({scaleX:3.7436,scaleY:3.7436,x:384.3,y:1058.85},0).wait(1).to({scaleX:3.9802,scaleY:3.9802,x:369.65,y:1105.45},0).wait(1).to({scaleX:4.2169,scaleY:4.2169,x:355,y:1152},0).wait(1).to({scaleX:4.4536,scaleY:4.4536,x:340.35,y:1198.55},0).wait(1).to({scaleX:4.6902,scaleY:4.6902,x:325.7,y:1245.2},0).wait(1).to({scaleX:4.9269,scaleY:4.9269,x:311.05,y:1291.75},0).wait(1).to({scaleX:5.1635,scaleY:5.1635,x:296.4,y:1338.3},0).wait(1).to({scaleX:5.4002,scaleY:5.4002,x:281.75,y:1384.9},0).wait(1).to({scaleX:5.6369,scaleY:5.6369,x:267.1,y:1431.5},0).wait(1).to({scaleX:5.8735,scaleY:5.8735,x:252.45,y:1478.05},0).wait(1).to({scaleX:6.1102,scaleY:6.1102,x:237.8,y:1524.65},0).wait(1).to({scaleX:6.3469,scaleY:6.3469,x:223.15,y:1571.2},0).wait(1).to({scaleX:6.5835,scaleY:6.5835,x:208.5,y:1617.8},0).wait(1).to({scaleX:6.8202,scaleY:6.8202,x:193.85,y:1664.4},0).wait(1).to({scaleX:7.0569,scaleY:7.0569,x:179.2,y:1710.95},0).wait(1).to({scaleX:7.2935,scaleY:7.2935,x:164.55,y:1757.5},0).wait(1).to({scaleX:7.5302,scaleY:7.5302,x:149.9,y:1804.15},0).wait(1).to({scaleX:7.7669,scaleY:7.7669,x:135.25,y:1850.7},0).wait(1).to({scaleX:8.0035,scaleY:8.0035,x:120.6,y:1897.25},0).wait(1).to({scaleX:8.2402,scaleY:8.2402,x:105.95,y:1943.85},0).wait(1).to({scaleX:8.4769,scaleY:8.4769,x:91.3,y:1990.45},0).wait(1).to({scaleX:8.7135,scaleY:8.7135,x:76.65,y:2037},0).wait(1).to({scaleX:8.9502,scaleY:8.9502,x:62,y:2083.6},0).wait(1).to({scaleX:9.1869,scaleY:9.1869,x:47.35,y:2130.15},0).wait(1).to({scaleX:9.4235,scaleY:9.4235,x:32.7,y:2176.75},0).wait(1).to({scaleX:9.6602,scaleY:9.6602,x:18.05,y:2223.35},0).wait(1).to({scaleX:9.8969,scaleY:9.8969,x:3.4,y:2269.9},0).wait(1).to({scaleX:10.1335,scaleY:10.1335,x:-11.25,y:2316.45},0).wait(1).to({scaleX:10.3702,scaleY:10.3702,x:-25.9,y:2363.1},0).wait(1).to({scaleX:10.6069,scaleY:10.6069,x:-40.55,y:2409.65},0).wait(1).to({scaleX:10.8435,scaleY:10.8435,x:-55.2,y:2456.2},0).wait(1).to({scaleX:11.0802,scaleY:11.0802,x:-69.85,y:2502.8},0).wait(1).to({scaleX:11.3169,scaleY:11.3169,x:-84.5,y:2549.4},0).wait(1).to({scaleX:11.5535,scaleY:11.5535,x:-99.15,y:2596},0).wait(1).to({scaleX:11.7902,scaleY:11.7902,x:-113.8,y:2642.55},0).wait(1).to({scaleX:12.0269,scaleY:12.0269,x:-128.45,y:2689.1},0).wait(1).to({scaleX:12.2635,scaleY:12.2635,x:-143.15,y:2735.75},0).wait(1).to({scaleX:12.5002,scaleY:12.5002,x:-157.8,y:2782.3},0).wait(1).to({scaleX:12.7369,scaleY:12.7369,x:-172.45,y:2828.85},0).wait(1).to({scaleX:12.9735,scaleY:12.9735,x:-187.1,y:2875.45},0).wait(1).to({scaleX:13.2102,scaleY:13.2102,x:-201.75,y:2922.05},0).wait(1).to({scaleX:13.4469,scaleY:13.4469,x:-216.4,y:2968.6},0).wait(1).to({scaleX:13.6835,scaleY:13.6835,x:-231.05,y:3015.2},0).wait(1).to({scaleX:13.9202,scaleY:13.9202,x:-245.65,y:3061.75},0).wait(1).to({scaleX:14.1568,scaleY:14.1568,x:-260.3,y:3108.35},0).wait(1).to({scaleX:14.3935,scaleY:14.3935,x:-274.95,y:3154.95},0).wait(1).to({scaleX:14.6302,scaleY:14.6302,x:-289.6,y:3201.5},0).wait(1).to({scaleX:14.8668,scaleY:14.8668,x:-304.25,y:3248.05},0).wait(1).to({scaleX:15.1035,scaleY:15.1035,x:-318.9,y:3294.7},0).wait(1).to({scaleX:15.3402,scaleY:15.3402,x:-333.55,y:3341.25},0).wait(1).to({scaleX:15.5768,scaleY:15.5768,x:-348.2,y:3387.8},0).wait(1).to({scaleX:15.8135,scaleY:15.8135,x:-362.85,y:3434.4},0).wait(1).to({scaleX:16.0502,scaleY:16.0502,x:-377.5,y:3481},0).wait(1).to({scaleX:16.2868,scaleY:16.2868,x:-392.15,y:3527.55},0).wait(1).to({scaleX:16.5235,scaleY:16.5235,x:-406.8,y:3574.15},0).wait(1).to({scaleX:16.7602,scaleY:16.7602,x:-421.45,y:3620.7},0).wait(1).to({scaleX:16.9968,scaleY:16.9968,x:-436.1,y:3667.3},0).wait(1).to({scaleX:17.2335,scaleY:17.2335,x:-450.75,y:3713.9},0).wait(1).to({scaleX:17.4702,scaleY:17.4702,x:-465.4,y:3760.45},0).wait(1).to({scaleX:17.7068,scaleY:17.7068,x:-480.1,y:3807},0).wait(1).to({scaleX:17.9435,scaleY:17.9435,x:-494.75,y:3853.65},0).wait(1));

}).prototype = p = new cjs.MovieClip();


(lib.SymElSimbolo = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// timeline functions:
	this.frame_215 = function() {
		this.___loopingOver___ = true;
	}

	// actions tween:
	this.timeline.addTween(cjs.Tween.get(this).wait(215).call(this.frame_215).wait(1));

	// Nubes_copy_copy_copy_copy_obj_
	this.Nubes_copy_copy_copy_copy = new lib.SymElSimbolo_Nubes_copy_copy_copy_copy();
	this.Nubes_copy_copy_copy_copy.name = "Nubes_copy_copy_copy_copy";
	this.Nubes_copy_copy_copy_copy.parent = this;
	this.Nubes_copy_copy_copy_copy.depth = 0;
	this.Nubes_copy_copy_copy_copy.isAttachedToCamera = 0
	this.Nubes_copy_copy_copy_copy.isAttachedToMask = 0
	this.Nubes_copy_copy_copy_copy.layerDepth = 0
	this.Nubes_copy_copy_copy_copy.layerIndex = 0
	this.Nubes_copy_copy_copy_copy.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Nubes_copy_copy_copy_copy).wait(139).to({regX:-899.8,regY:-275,x:-899.8,y:-275},0).wait(77));

	// Nubes_copy_copy_copy_obj_
	this.Nubes_copy_copy_copy = new lib.SymElSimbolo_Nubes_copy_copy_copy();
	this.Nubes_copy_copy_copy.name = "Nubes_copy_copy_copy";
	this.Nubes_copy_copy_copy.parent = this;
	this.Nubes_copy_copy_copy.depth = 0;
	this.Nubes_copy_copy_copy.isAttachedToCamera = 0
	this.Nubes_copy_copy_copy.isAttachedToMask = 0
	this.Nubes_copy_copy_copy.layerDepth = 0
	this.Nubes_copy_copy_copy.layerIndex = 1
	this.Nubes_copy_copy_copy.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Nubes_copy_copy_copy).wait(134).to({regX:-901.9,regY:146.2,x:-901.9,y:146.2},0).wait(75).to({_off:true},1).wait(6));

	// Nubes_copy_copy_obj_
	this.Nubes_copy_copy = new lib.SymElSimbolo_Nubes_copy_copy();
	this.Nubes_copy_copy.name = "Nubes_copy_copy";
	this.Nubes_copy_copy.parent = this;
	this.Nubes_copy_copy.depth = 0;
	this.Nubes_copy_copy.isAttachedToCamera = 0
	this.Nubes_copy_copy.isAttachedToMask = 0
	this.Nubes_copy_copy.layerDepth = 0
	this.Nubes_copy_copy.layerIndex = 2
	this.Nubes_copy_copy.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Nubes_copy_copy).wait(126).to({regX:577.4,regY:306.2,x:577.4,y:306.2},0).wait(85).to({_off:true},1).wait(4));

	// Nubes_copy_obj_
	this.Nubes_copy = new lib.SymElSimbolo_Nubes_copy();
	this.Nubes_copy.name = "Nubes_copy";
	this.Nubes_copy.parent = this;
	this.Nubes_copy.depth = 0;
	this.Nubes_copy.isAttachedToCamera = 0
	this.Nubes_copy.isAttachedToMask = 0
	this.Nubes_copy.layerDepth = 0
	this.Nubes_copy.layerIndex = 3
	this.Nubes_copy.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Nubes_copy).wait(126).to({regX:1047.2,regY:1708.9,x:1047.2,y:1708.9},0).wait(87).to({_off:true},1).wait(2));

	// Nubes_obj_
	this.Nubes = new lib.SymElSimbolo_Nubes();
	this.Nubes.name = "Nubes";
	this.Nubes.parent = this;
	this.Nubes.depth = 0;
	this.Nubes.isAttachedToCamera = 0
	this.Nubes.isAttachedToMask = 0
	this.Nubes.layerDepth = 0
	this.Nubes.layerIndex = 4
	this.Nubes.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Nubes).wait(126).to({regX:795.3,regY:628.9,x:795.3,y:628.9},0).wait(90));

	// zoomTierraMv_obj_
	this.zoomTierraMv = new lib.SymElSimbolo_zoomTierraMv();
	this.zoomTierraMv.name = "zoomTierraMv";
	this.zoomTierraMv.parent = this;
	this.zoomTierraMv.setTransform(342.6,369.9,1,1,0,0,0,342.6,369.9);
	this.zoomTierraMv.depth = 0;
	this.zoomTierraMv.isAttachedToCamera = 0
	this.zoomTierraMv.isAttachedToMask = 0
	this.zoomTierraMv.layerDepth = 0
	this.zoomTierraMv.layerIndex = 5
	this.zoomTierraMv.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.zoomTierraMv).wait(1).to({regX:429.8,regY:498.6,x:429.8,y:498.6},0).wait(118).to({_off:true},1).wait(96));

	// FrameCentroAmerica_obj_
	this.FrameCentroAmerica = new lib.SymElSimbolo_FrameCentroAmerica();
	this.FrameCentroAmerica.name = "FrameCentroAmerica";
	this.FrameCentroAmerica.parent = this;
	this.FrameCentroAmerica.setTransform(557.3,479.2,1,1,0,0,0,557.3,479.2);
	this.FrameCentroAmerica.depth = 0;
	this.FrameCentroAmerica.isAttachedToCamera = 0
	this.FrameCentroAmerica.isAttachedToMask = 0
	this.FrameCentroAmerica.layerDepth = 0
	this.FrameCentroAmerica.layerIndex = 6
	this.FrameCentroAmerica.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.FrameCentroAmerica).wait(121).to({regX:-494.2,regY:3853.2,x:-494.2,y:3853.2},0).wait(70).to({_off:true},1).wait(24));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(-28360.5,-8220.6,55732.8,24147.1);


(lib.SymLoginPage_Layer_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Layer_1
	this.TextInput = new lib.an_TextInput({'id': 'TextInput', 'value':'', 'disabled':false, 'visible':true, 'class':'ui-textinput'});

	this.TextInput.setTransform(708.4,249.85,3,4.5455,0,0,0,50,11);

	this.instance = new lib.CachedTexturedBitmap_1();
	this.instance.parent = this;
	this.instance.setTransform(377.2,165.85,0.5,0.5);

	this.SymIngresar = new lib.SymIngresar();
	this.SymIngresar.name = "SymIngresar";
	this.SymIngresar.parent = this;
	this.SymIngresar.setTransform(602.1,446.75,1,1,0,0,0,130.9,130.9);
	new cjs.ButtonHelper(this.SymIngresar, 0, 1, 1);

	this.instance_1 = new lib.textura();
	this.instance_1.parent = this;
	this.instance_1.setTransform(-10,-65);

	this.instance_2 = new lib.SymGiroTierra("synched",0);
	this.instance_2.parent = this;
	this.instance_2.setTransform(65.7,118.95,0.8201,0.8201,0,0,0,33,87);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.instance_2},{t:this.instance_1},{t:this.SymIngresar},{t:this.instance},{t:this.TextInput}]}).wait(1));

}).prototype = getMCSymbolPrototype(lib.SymLoginPage_Layer_1, null, null);


(lib.SymLoginPage = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// timeline functions:
	this.frame_0 = function() {
		this.SymIngresar = this.Layer_1.SymIngresar;
		this.TextInput = this.Layer_1.TextInput;
		this.stop();
		
		/*var txtpin = document.getElementById("txtPin");
		txtpin.setAttribute("type" , "password");*/
		
		this.SymIngresar.on("click" , onLogin.bind(this));
		this.TextInput.addEventListener("keyup", onLogin.bind(this));
		
		function onLogin(e) {
			var pin = document.getElementById("TextInput").value;
			console.log(pin);
			
			if (pin == "141115"){
				this.parent.addChild(new lib.SymElSimbolo());
				this.parent.removeChild(this);
		
			}
		}
	}

	// actions tween:
	this.timeline.addTween(cjs.Tween.get(this).call(this.frame_0).wait(1));

	// Layer_1_obj_
	this.Layer_1 = new lib.SymLoginPage_Layer_1();
	this.Layer_1.name = "Layer_1";
	this.Layer_1.parent = this;
	this.Layer_1.setTransform(343.2,369.4,1,1,0,0,0,343.2,369.4);
	this.Layer_1.depth = 0;
	this.Layer_1.isAttachedToCamera = 0
	this.Layer_1.isAttachedToMask = 0
	this.Layer_1.layerDepth = 0
	this.Layer_1.layerIndex = 0
	this.Layer_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Layer_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.SymLoginPage, new cjs.Rectangle(-707.7,-142.7,2102.1000000000004,1024.4), null);


// stage content:
(lib.MapAnimate = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	this.___GetDepth___ = function(obj) {
		var depth = obj.depth;
		var cameraObj = this.___camera___instance;
		if(cameraObj && cameraObj.depth && obj.isAttachedToCamera)
		{
			depth += depth + cameraObj.depth;
		}
		return depth;
		}
	this.___needSorting___ = function() {
		for (var i = 0; i < this.getNumChildren() - 1; i++)
		{
			var prevDepth = this.___GetDepth___(this.getChildAt(i));
			var nextDepth = this.___GetDepth___(this.getChildAt(i + 1));
			if (prevDepth < nextDepth)
				return true;
		}
		return false;
	}
	this.___sortFunction___ = function(obj1, obj2) {
		return (this.exportRoot.___GetDepth___(obj2) - this.exportRoot.___GetDepth___(obj1));
	}
	this.on('tick', function (event){
		var curTimeline = event.currentTarget;
		if (curTimeline.___needSorting___()){
			this.sortChildren(curTimeline.___sortFunction___);
		}
	});

	// timeline functions:
	this.frame_280 = function() {
		this.button_1 = this.boton.button_1;
		/* Click to Go to Web Page
		Clicking on the specified symbol instance loads the URL in a new browser window.
		
		Instructions:
		1. Replace http://www.adobe.com with the desired URL address.
		   Keep the quotation marks ("").
		*/
		
		this.button_1.addEventListener("click", fl_ClickToGoToWebPage);
		
		function fl_ClickToGoToWebPage() {
			window.open("https://drive.google.com/file/d/16BkYRthXIia2ivC1ZZHcz6DtYgWTnJyc/view?usp=sharing", "_blank");
		}
	}
	this.frame_347 = function() {
		this.___loopingOver___ = true;
		this.stop();
		this.boton1.play();
	}

	// actions tween:
	this.timeline.addTween(cjs.Tween.get(this).wait(280).call(this.frame_280).wait(67).call(this.frame_347).wait(1));

	// nubes4_obj_
	this.nubes4 = new lib.Scene_1_nubes4();
	this.nubes4.name = "nubes4";
	this.nubes4.parent = this;
	this.nubes4.depth = 0;
	this.nubes4.isAttachedToCamera = 0
	this.nubes4.isAttachedToMask = 0
	this.nubes4.layerDepth = 0
	this.nubes4.layerIndex = 0
	this.nubes4.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.nubes4).wait(215).to({regX:192.5,regY:75.8,x:192.5,y:75.8},0).wait(133));

	// nubes3_obj_
	this.nubes3 = new lib.Scene_1_nubes3();
	this.nubes3.name = "nubes3";
	this.nubes3.parent = this;
	this.nubes3.depth = 0;
	this.nubes3.isAttachedToCamera = 0
	this.nubes3.isAttachedToMask = 0
	this.nubes3.layerDepth = 0
	this.nubes3.layerIndex = 1
	this.nubes3.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.nubes3).wait(215).to({regX:-10.2,regY:630.3,x:-10.2,y:630.3},0).wait(133));

	// nubes2_obj_
	this.nubes2 = new lib.Scene_1_nubes2();
	this.nubes2.name = "nubes2";
	this.nubes2.parent = this;
	this.nubes2.depth = 0;
	this.nubes2.isAttachedToCamera = 0
	this.nubes2.isAttachedToMask = 0
	this.nubes2.layerDepth = 0
	this.nubes2.layerIndex = 2
	this.nubes2.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.nubes2).wait(215).to({regX:1131,regY:21.8,x:1131,y:21.8},0).wait(133));

	// nubes1_obj_
	this.nubes1 = new lib.Scene_1_nubes1();
	this.nubes1.name = "nubes1";
	this.nubes1.parent = this;
	this.nubes1.depth = 0;
	this.nubes1.isAttachedToCamera = 0
	this.nubes1.isAttachedToMask = 0
	this.nubes1.layerDepth = 0
	this.nubes1.layerIndex = 3
	this.nubes1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.nubes1).wait(215).to({regX:1040.4,regY:593.2,x:1040.4,y:593.2},0).wait(133));

	// boton_obj_
	this.boton = new lib.Scene_1_boton();
	this.boton.name = "boton";
	this.boton.parent = this;
	this.boton.depth = 0;
	this.boton.isAttachedToCamera = 0
	this.boton.isAttachedToMask = 0
	this.boton.layerDepth = 0
	this.boton.layerIndex = 4
	this.boton.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.boton).wait(348));

	// solido_obj_
	this.solido = new lib.Scene_1_solido();
	this.solido.name = "solido";
	this.solido.parent = this;
	this.solido.depth = 0;
	this.solido.isAttachedToCamera = 0
	this.solido.isAttachedToMask = 0
	this.solido.layerDepth = 0
	this.solido.layerIndex = 5
	this.solido.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.solido).wait(348));

	// giro_obj_
	this.giro = new lib.Scene_1_giro();
	this.giro.name = "giro";
	this.giro.parent = this;
	this.giro.setTransform(1310.6,343.8,1,1,0,0,0,1310.6,343.8);
	this.giro.depth = 0;
	this.giro.isAttachedToCamera = 0
	this.giro.isAttachedToMask = 0
	this.giro.layerDepth = 0
	this.giro.layerIndex = 6
	this.giro.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.giro).wait(1).to({regX:3428.4,regY:594.3,x:3428.4,y:594.3},0).wait(347));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(-18367.9,-3443.6,44232.9,8415.7);
// library properties:
lib.properties = {
	id: '98D2A9B3C990B2408B054C59D0616F0E',
	width: 1280,
	height: 680,
	fps: 24,
	color: "#FFFFFF",
	opacity: 1.00,
	manifest: [
		{src:"images/mapamundi.png", id:"mapamundi"},
		{src:"images/nubescompletas.png", id:"nubescompletas"},
		{src:"images/MapAnimate_atlas_.png", id:"MapAnimate_atlas_"},
		{src:"images/MapAnimate_atlas_2.png", id:"MapAnimate_atlas_2"},
		{src:"images/MapAnimate_atlas_3.png", id:"MapAnimate_atlas_3"},
		{src:"images/MapAnimate_atlas_4.png", id:"MapAnimate_atlas_4"},
		{src:"images/MapAnimate_atlas_5.png", id:"MapAnimate_atlas_5"},
		{src:"images/MapAnimate_atlas_6.png", id:"MapAnimate_atlas_6"},
		{src:"https://code.jquery.com/jquery-2.2.4.min.js", id:"lib/jquery-2.2.4.min.js"},
		{src:"components/sdk/anwidget.js", id:"sdk/anwidget.js"},
		{src:"components/ui/src/textinput.js", id:"an.TextInput"}
	],
	preloads: []
};



// bootstrap callback support:

(lib.Stage = function(canvas) {
	createjs.Stage.call(this, canvas);
}).prototype = p = new createjs.Stage();

p.setAutoPlay = function(autoPlay) {
	this.tickEnabled = autoPlay;
}
p.play = function() { this.tickEnabled = true; this.getChildAt(0).gotoAndPlay(this.getTimelinePosition()) }
p.stop = function(ms) { if(ms) this.seek(ms); this.tickEnabled = false; }
p.seek = function(ms) { this.tickEnabled = true; this.getChildAt(0).gotoAndStop(lib.properties.fps * ms / 1000); }
p.getDuration = function() { return this.getChildAt(0).totalFrames / lib.properties.fps * 1000; }

p.getTimelinePosition = function() { return this.getChildAt(0).currentFrame / lib.properties.fps * 1000; }

an.bootcompsLoaded = an.bootcompsLoaded || [];
if(!an.bootstrapListeners) {
	an.bootstrapListeners=[];
}

an.bootstrapCallback=function(fnCallback) {
	an.bootstrapListeners.push(fnCallback);
	if(an.bootcompsLoaded.length > 0) {
		for(var i=0; i<an.bootcompsLoaded.length; ++i) {
			fnCallback(an.bootcompsLoaded[i]);
		}
	}
};

an.compositions = an.compositions || {};
an.compositions['98D2A9B3C990B2408B054C59D0616F0E'] = {
	getStage: function() { return exportRoot.getStage(); },
	getLibrary: function() { return lib; },
	getSpriteSheet: function() { return ss; },
	getImages: function() { return img; }
};

an.compositionLoaded = function(id) {
	an.bootcompsLoaded.push(id);
	for(var j=0; j<an.bootstrapListeners.length; j++) {
		an.bootstrapListeners[j](id);
	}
}

an.getComposition = function(id) {
	return an.compositions[id];
}


// Layer depth API : 

AdobeAn.Layer = new function() {
	this.getLayerZDepth = function(timeline, layerName)
	{
		if(layerName === "Camera")
		layerName = "___camera___instance";
		var script = "if(timeline." + layerName + ") timeline." + layerName + ".depth; else 0;";
		return eval(script);
	}
	this.setLayerZDepth = function(timeline, layerName, zDepth)
	{
		const MAX_zDepth = 10000;
		const MIN_zDepth = -5000;
		if(zDepth > MAX_zDepth)
			zDepth = MAX_zDepth;
		else if(zDepth < MIN_zDepth)
			zDepth = MIN_zDepth;
		if(layerName === "Camera")
		layerName = "___camera___instance";
		var script = "if(timeline." + layerName + ") timeline." + layerName + ".depth = " + zDepth + ";";
		eval(script);
	}
	this.removeLayer = function(timeline, layerName)
	{
		if(layerName === "Camera")
		layerName = "___camera___instance";
		var script = "if(timeline." + layerName + ") timeline.removeChild(timeline." + layerName + ");";
		eval(script);
	}
	this.addNewLayer = function(timeline, layerName, zDepth)
	{
		if(layerName === "Camera")
		layerName = "___camera___instance";
		zDepth = typeof zDepth !== 'undefined' ? zDepth : 0;
		var layer = new createjs.MovieClip();
		layer.name = layerName;
		layer.depth = zDepth;
		layer.layerIndex = 0;
		timeline.addChild(layer);
	}
}
function _updateVisibility(evt) {
	if((this.getStage() == null || this._off || this._lastAddedFrame != this.parent.currentFrame) && this._element) {
		this._element.detach();
		stage.removeEventListener('drawstart', this._updateVisibilityCbk);
		this._updateVisibilityCbk = false;
	}
}
function _handleDrawEnd(evt) {
	var props = this.getConcatenatedDisplayProps(this._props), mat = props.matrix;
	var tx1 = mat.decompose(); var sx = tx1.scaleX; var sy = tx1.scaleY;
	var dp = window.devicePixelRatio || 1; var w = this.nominalBounds.width * sx; var h = this.nominalBounds.height * sy;
	mat.tx/=dp;mat.ty/=dp; mat.a/=(dp*sx);mat.b/=(dp*sx);mat.c/=(dp*sy);mat.d/=(dp*sy);
	this._element.setProperty('transform-origin', this.regX + 'px ' + this.regY + 'px');
	var x = (mat.tx + this.regX*mat.a + this.regY*mat.c - this.regX);
	var y = (mat.ty + this.regX*mat.b + this.regY*mat.d - this.regY);
	var tx = 'matrix(' + mat.a + ',' + mat.b + ',' + mat.c + ',' + mat.d + ',' + x + ',' + y + ')';
	this._element.setProperty('transform', tx);
	this._element.setProperty('width', w);
	this._element.setProperty('height', h);
	this._element.update();
}

function _tick(evt) {
	var stage = this.getStage();
	stage&&stage.on('drawend', this._handleDrawEnd, this, true);
	if(!this._updateVisibilityCbk) {
		this._updateVisibilityCbk = stage.on('drawstart', this._updateVisibility, this, false);
	}
}


})(createjs = createjs||{}, AdobeAn = AdobeAn||{});
var createjs, AdobeAn;