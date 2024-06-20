#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <random>
#include <string>
#include <bitset>
#include <windows.h>

struct YUUMICUBE
{
	int cube[6][3][3];

public:
	constexpr YUUMICUBE(const int init_cube[6][3][3]) noexcept
	{
		// Copy the values from init_cube to cube
		for (int i = 0; i < 6; ++i) {
			for (int j = 0; j < 3; ++j) {
				for (int k = 0; k < 3; ++k) {
					cube[i][j][k] = init_cube[i][j][k];
				}
			}
		}
	}
	/*
	
	YUUMICUBE()
	{
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				for (int k = 0; k < 3; ++k)
				{
					
					std::random_device rd;
					std::mt19937 gen(rd());
					std::uniform_int_distribution<int> dist(0, 255);
					cube[i][j][k] = dist(gen);
					
				}
			}
		}

		for (int i = 0; i < 6; ++i)
		{
			std::cout << "{";
			for (int j = 0; j < 3; ++j)
			{
				std::cout << "{";
				for (int k = 0; k < 3; ++k)
				{
					if (k == 2)
					{
						std::cout << cube[i][j][k];
					}
					else {
						std::cout << cube[i][j][k] << ",";
					}
				}
				if (j == 2)
				{
					std::cout << "}";
				}
				else {
					std::cout << "}" << ",";
				}
			}

			if (i == 5)
			{
				std::cout << "}";
			}
			else {
				std::cout << "}" << ",";
			}
			std::cout << std::endl;;
		}
	}
	*/
};


std::map<int, YUUMICUBE> cubesConstant()
{
	std::map<int, YUUMICUBE> map;

	const int init_cube_1[6][3][3] = {
	{{213,46,82},{219,66,19},{33,159,125}},
	{{17,164,173},{21,17,144},{30,105,212}},
	{{67,155,221},{120,54,56},{198,118,112}},
	{{8,71,213},{18,211,4},{24,128,135}},
	{{164,82,157},{131,64,101},{226,57,71}},
	{{145,28,200},{120,18,215},{149,214,134}}
	};
	YUUMICUBE yuumicube_1(init_cube_1);
	map.insert({ 1, yuumicube_1 });

	const int init_cube_2[6][3][3] = {
	{{21,241,168},{239,126,44},{72,27,85}},
	{{20,192,36},{181,16,194},{125,150,138}},
	{{181,88,177},{80,28,63},{39,95,84}},
	{{188,194,236},{90,254,212},{195,174,64}},
	{{125,222,165},{24,109,252},{48,236,14}},
	{{75,20,220},{89,1,114},{185,46,194}}
	};
	YUUMICUBE yuumicube_2(init_cube_2);
	map.insert({ 2, yuumicube_2 });

	const int init_cube_3[6][3][3] = {
	{{122,227,180},{248,129,69},{237,152,202}},
	{{238,65,182},{176,183,121},{46,14,175}},
	{{42,155,3},{71,70,35},{111,54,215}},
	{{239,166,65},{230,85,18},{208,10,207}},
	{{107,247,10},{33,111,75},{116,135,188}},
	{{148,52,9},{155,51,220},{160,216,173}}
	};
	YUUMICUBE yuumicube_3(init_cube_3);
	map.insert({ 3, yuumicube_3 });

	const int init_cube_4[6][3][3] = {
	{{24,52,192},{87,219,83},{188,73,122}},
	{{144,157,239},{62,79,123},{175,189,169}},
	{{69,21,221},{156,202,26},{247,166,4}},
	{{52,26,101},{31,180,139},{77,149,157}},
	{{83,123,238},{103,12,29},{108,220,17}},
	{{12,200,47},{87,179,231},{175,17,222}}
	};
	YUUMICUBE yuumicube_4(init_cube_4);
	map.insert({ 4, yuumicube_4 });

	const int init_cube_5[6][3][3] = {
	{{10,147,61},{8,238,152},{95,234,136}},
	{{109,31,236},{68,87,169},{161,240,76}},
	{{35,52,30},{198,238,0},{92,216,2}},
	{{122,216,28},{113,167,97},{76,139,178}},
	{{191,86,129},{17,106,103},{2,224,20}},
	{{36,115,28},{29,7,126},{20,241,179}}
	};
	YUUMICUBE yuumicube_5(init_cube_5);
	map.insert({ 5, yuumicube_5 });

	const int init_cube_6[6][3][3] = {
	{{154,62,37},{146,60,86},{187,190,74}},
	{{247,105,176},{132,107,136},{29,136,186}},
	{{170,173,86},{183,125,127},{32,138,18}},
	{{53,75,144},{73,8,162},{196,4,11}},
	{{149,83,247},{133,154,201},{189,227,65}},
	{{154,225,8},{89,144,106},{233,219,26}}
	};
	YUUMICUBE yuumicube_6(init_cube_6);
	map.insert({ 6, yuumicube_6 });

	const int init_cube_7[6][3][3] = {
	{{50,214,127},{114,6,41},{72,15,48}},
	{{192,116,219},{95,188,122},{86,94,211}},
	{{87,190,249},{233,110,189},{29,94,72}},
	{{34,184,243},{133,93,239},{72,155,241}},
	{{75,174,36},{169,105,238},{21,209,222}},
	{{50,47,248},{248,171,231},{235,199,47}}
	};
	YUUMICUBE yuumicube_7(init_cube_7);
	map.insert({ 7, yuumicube_7 });

	const int init_cube_8[6][3][3] = {
	{{67,47,150},{254,231,106},{107,140,214}},
	{{241,20,218},{144,154,37},{148,1,65}},
	{{233,252,61},{49,255,57},{161,144,114}},
	{{49,68,173},{78,120,238},{56,88,191}},
	{{156,110,220},{80,239,247},{243,97,139}},
	{{252,251,40},{219,204,135},{99,53,159}}
	};
	YUUMICUBE yuumicube_8(init_cube_8);
	map.insert({ 8, yuumicube_8 });

	const int init_cube_9[6][3][3] = {
	{{236,73,51},{118,41,51},{180,129,164}},
	{{252,102,83},{239,193,248},{62,24,97}},
	{{175,126,125},{19,200,96},{183,55,82}},
	{{224,12,49},{39,126,52},{202,250,181}},
	{{93,172,121},{149,181,98},{45,65,239}},
	{{197,65,233},{180,207,245},{85,80,114}}
	};
	YUUMICUBE yuumicube_9(init_cube_9);
	map.insert({ 9, yuumicube_9 });

	const int init_cube_10[6][3][3] = {
	{{125,141,240},{64,126,68},{129,233,181}},
	{{255,253,237},{219,4,96},{160,99,165}},
	{{71,151,155},{5,161,176},{173,95,31}},
	{{244,35,185},{35,155,127},{79,187,43}},
	{{127,11,29},{236,11,43},{71,205,117}},
	{{61,38,185},{148,20,219},{158,118,38}}
	};
	YUUMICUBE yuumicube_10(init_cube_10);
	map.insert({ 10, yuumicube_10 });

	const int init_cube_11[6][3][3] = {
	{{203,82,55},{232,104,23},{190,86,222}},
	{{248,62,109},{236,143,83},{106,143,152}},
	{{186,8,20},{113,114,95},{195,101,88}},
	{{111,254,138},{103,81,199},{189,237,150}},
	{{253,89,199},{25,38,71},{101,193,62}},
	{{182,213,78},{217,99,223},{164,76,202}}
	};
	YUUMICUBE yuumicube_11(init_cube_11);
	map.insert({ 11, yuumicube_11 });

	const int init_cube_12[6][3][3] = {
	{{39,153,24},{233,21,123},{127,233,32}},
	{{103,53,27},{47,48,176},{89,214,97}},
	{{244,221,247},{199,224,130},{67,230,19}},
	{{87,28,58},{153,79,217},{177,110,255}},
	{{245,82,48},{98,254,181},{203,108,82}},
	{{140,33,228},{105,93,3},{7,253,42}}
	};
	YUUMICUBE yuumicube_12(init_cube_12);
	map.insert({ 12, yuumicube_12 });

	const int init_cube_13[6][3][3] = {
	{{168,46,55},{240,91,179},{105,125,204}},
	{{91,185,128},{14,22,93},{68,236,73}},
	{{124,226,23},{202,21,113},{37,58,224}},
	{{148,250,29},{244,68,95},{142,81,246}},
	{{37,235,132},{92,83,63},{162,54,61}},
	{{26,94,163},{178,51,92},{153,71,7}}
	};
	YUUMICUBE yuumicube_13(init_cube_13);
	map.insert({ 13, yuumicube_13 });

	const int init_cube_14[6][3][3] = {
	{{91,69,187},{88,64,170},{77,224,201}},
	{{26,76,206},{181,55,181},{172,71,244}},
	{{58,67,71},{254,3,111},{35,113,37}},
	{{149,203,115},{251,187,33},{93,206,196}},
	{{73,34,211},{149,57,46},{101,27,111}},
	{{181,102,12},{76,248,175},{128,167,22}}
	};
	YUUMICUBE yuumicube_14(init_cube_14);
	map.insert({ 14, yuumicube_14 });

	const int init_cube_15[6][3][3] = {
	{{172,71,60},{93,50,28},{183,224,144}},
	{{247,128,209},{83,104,92},{140,227,205}},
	{{107,15,83},{143,207,13},{130,63,139}},
	{{181,134,137},{95,123,46},{21,149,2}},
	{{234,55,106},{193,112,244},{242,12,96}},
	{{83,155,135},{162,9,99},{150,60,118}}
	};
	YUUMICUBE yuumicube_15(init_cube_15);
	map.insert({ 15, yuumicube_15 });

	const int init_cube_16[6][3][3] = {
	{{194,225,251},{116,179,118},{218,212,214}},
	{{86,173,50},{200,75,205},{180,154,26}},
	{{7,191,254},{81,80,110},{96,180,220}},
	{{214,223,144},{53,3,216},{23,43,171}},
	{{85,90,71},{235,166,205},{153,55,183}},
	{{121,172,86},{82,200,156},{86,200,138}}
	};
	YUUMICUBE yuumicube_16(init_cube_16);
	map.insert({ 16, yuumicube_16 });

	const int init_cube_17[6][3][3] = {
	{{28,136,140},{169,232,170},{180,160,96}},
	{{197,241,99},{13,193,14},{135,160,199}},
	{{79,1,124},{242,198,200},{99,236,52}},
	{{101,85,153},{225,21,196},{30,92,241}},
	{{84,29,20},{38,200,42},{183,94,167}},
	{{85,211,243},{153,238,149},{173,216,184}}
	};
	YUUMICUBE yuumicube_17(init_cube_17);
	map.insert({ 17, yuumicube_17 });

	const int init_cube_18[6][3][3] = {
	{{193,68,234},{160,125,126},{154,158,223}},
	{{240,106,219},{3,86,108},{57,106,234}},
	{{200,135,107},{30,50,127},{212,204,186}},
	{{42,133,180},{148,188,140},{210,57,182}},
	{{176,164,72},{30,148,138},{104,29,29}},
	{{168,113,255},{46,180,251},{86,254,171}}
	};
	YUUMICUBE yuumicube_18(init_cube_18);
	map.insert({ 18, yuumicube_18 });

	const int init_cube_19[6][3][3] = {
	{{1,14,248},{232,139,1},{107,167,2}},
	{{97,101,241},{144,62,70},{23,218,237}},
	{{192,103,186},{158,28,153},{213,110,179}},
	{{217,71,144},{4,221,109},{163,174,96}},
	{{108,216,199},{224,128,20},{120,33,36}},
	{{201,36,188},{84,9,171},{112,220,34}}
	};
	YUUMICUBE yuumicube_19(init_cube_19);
	map.insert({ 19, yuumicube_19 });

	const int init_cube_20[6][3][3] = {
	{{95,173,238},{159,72,255},{172,249,70}},
	{{101,25,47},{10,109,219},{228,233,164}},
	{{175,39,214},{225,148,90},{130,218,97}},
	{{146,58,26},{211,54,136},{255,182,58}},
	{{164,179,188},{252,181,132},{185,221,51}},
	{{161,179,120},{70,22,55},{124,20,122}}
	};
	YUUMICUBE yuumicube_20(init_cube_20);
	map.insert({ 20, yuumicube_20 });

	const int init_cube_21[6][3][3] = {
	{{12,161,171},{189,247,90},{96,116,204}},
	{{155,28,93},{159,193,47},{163,167,66}},
	{{146,18,93},{255,8,98},{44,41,197}},
	{{78,130,230},{41,228,95},{73,151,197}},
	{{218,173,197},{94,127,196},{34,233,100}},
	{{106,93,115},{62,118,46},{254,169,175}}
	};
	YUUMICUBE yuumicube_21(init_cube_21);
	map.insert({ 21, yuumicube_21 });

	const int init_cube_22[6][3][3] = {
	{{22,43,127},{50,161,149},{143,103,96}},
	{{99,31,117},{142,1,220},{215,188,248}},
	{{196,252,78},{79,205,18},{27,136,227}},
	{{109,85,144},{192,84,33},{193,135,107}},
	{{180,243,3},{171,79,98},{47,227,214}},
	{{121,44,134},{82,154,108},{31,102,240}}
	};
	YUUMICUBE yuumicube_22(init_cube_22);
	map.insert({ 22, yuumicube_22 });

	const int init_cube_23[6][3][3] = {
	{{20,194,29},{201,57,226},{127,107,92}},
	{{25,196,254},{229,76,160},{147,10,53}},
	{{5,229,187},{229,6,140},{143,104,157}},
	{{179,128,18},{132,172,17},{244,170,38}},
	{{126,131,116},{91,242,234},{27,253,122}},
	{{121,109,155},{208,43,180},{16,87,32}}
	};
	YUUMICUBE yuumicube_23(init_cube_23);
	map.insert({ 23, yuumicube_23 });

	const int init_cube_24[6][3][3] = {
	{{171,95,19},{87,44,222},{175,177,16}},
	{{50,193,250},{227,114,138},{150,30,54}},
	{{154,129,69},{156,212,214},{208,148,212}},
	{{115,126,252},{239,99,108},{221,12,64}},
	{{2,115,138},{8,84,101},{152,141,209}},
	{{80,144,204},{124,76,235},{150,228,76}}
	};
	YUUMICUBE yuumicube_24(init_cube_24);
	map.insert({ 24, yuumicube_24 });

	const int init_cube_25[6][3][3] = {
	{{169,240,197},{69,200,103},{106,233,242}},
	{{117,104,235},{194,35,158},{105,199,46}},
	{{128,140,96},{32,139,179},{35,168,121}},
	{{144,18,78},{116,27,148},{39,117,184}},
	{{125,91,115},{94,219,65},{218,95,202}},
	{{84,245,242},{75,254,10},{204,55,208}}
	};
	YUUMICUBE yuumicube_25(init_cube_25);
	map.insert({ 25, yuumicube_25 });

	const int init_cube_26[6][3][3] = {
	{{135,54,194},{106,92,189},{233,107,155}},
	{{231,5,18},{41,104,55},{75,242,135}},
	{{210,66,122},{142,53,213},{155,189,5}},
	{{156,226,154},{8,16,121},{110,218,106}},
	{{71,142,225},{207,159,192},{87,86,56}},
	{{175,109,58},{232,72,60},{108,40,86}}
	};
	YUUMICUBE yuumicube_26(init_cube_26);
	map.insert({ 26, yuumicube_26 });

	const int init_cube_27[6][3][3] = {
	{{180,223,103},{197,226,213},{210,1,21}},
	{{226,98,146},{220,180,91},{217,111,228}},
	{{37,247,243},{16,135,164},{163,83,27}},
	{{94,106,195},{23,95,49},{189,76,203}},
	{{56,222,93},{107,117,20},{54,235,41}},
	{{135,182,151},{13,197,7},{144,209,231}}
	};
	YUUMICUBE yuumicube_27(init_cube_27);
	map.insert({ 27, yuumicube_27 });

	const int init_cube_28[6][3][3] = {
	{{213,73,105},{157,5,144},{19,234,149}},
	{{43,47,197},{207,87,20},{229,197,175}},
	{{181,53,101},{179,171,232},{11,98,16}},
	{{47,231,253},{144,154,160},{12,252,134}},
	{{234,134,121},{43,208,216},{1,47,253}},
	{{240,210,186},{141,219,145},{10,4,226}}
	};
	YUUMICUBE yuumicube_28(init_cube_28);
	map.insert({ 28, yuumicube_28 });

	const int init_cube_29[6][3][3] = {
	{{100,162,6},{17,167,216},{24,159,70}},
	{{116,116,111},{167,109,16},{92,42,119}},
	{{61,54,142},{77,9,164},{243,237,198}},
	{{26,67,114},{149,141,244},{94,49,122}},
	{{52,184,255},{70,104,151},{131,231,127}},
	{{137,142,183},{169,117,52},{137,41,35}}
	};
	YUUMICUBE yuumicube_29(init_cube_29);
	map.insert({ 29, yuumicube_29 });

	const int init_cube_30[6][3][3] = {
	{{187,250,82},{171,127,241},{215,30,78}},
	{{100,126,114},{219,164,20},{130,249,215}},
	{{221,208,236},{102,169,51},{16,26,219}},
	{{91,109,138},{46,221,2},{111,120,197}},
	{{174,196,23},{148,130,35},{137,143,99}},
	{{138,239,56},{175,234,126},{168,220,128}}
	};
	YUUMICUBE yuumicube_30(init_cube_30);
	map.insert({ 30, yuumicube_30 });

	const int init_cube_31[6][3][3] = {
	{{214,148,153},{138,179,97},{183,139,197}},
	{{44,166,41},{121,53,104},{171,169,232}},
	{{114,158,21},{77,86,96},{56,141,190}},
	{{223,51,201},{215,74,82},{32,125,114}},
	{{171,193,178},{104,209,208},{18,17,76}},
	{{141,3,116},{79,243,150},{129,247,67}}
	};
	YUUMICUBE yuumicube_31(init_cube_31);
	map.insert({ 31, yuumicube_31 });

	const int init_cube_32[6][3][3] = {
	{{13,88,248},{117,89,9},{80,81,149}},
	{{248,37,194},{165,204,15},{70,32,25}},
	{{74,199,211},{14,95,106},{255,42,20}},
	{{182,101,18},{67,186,80},{236,119,246}},
	{{93,12,180},{47,54,116},{188,40,55}},
	{{80,19,71},{126,112,147},{242,93,190}}
	};
	YUUMICUBE yuumicube_32(init_cube_32);
	map.insert({ 32, yuumicube_32 });

	const int init_cube_33[6][3][3] = {
	{{129,245,162},{218,245,63},{179,192,71}},
	{{177,31,152},{29,19,220},{185,240,55}},
	{{64,183,6},{151,104,157},{189,119,146}},
	{{96,92,194},{184,38,191},{231,255,219}},
	{{62,27,254},{107,90,69},{179,220,196}},
	{{156,154,222},{20,110,120},{114,157,106}}
	};
	YUUMICUBE yuumicube_33(init_cube_33);
	map.insert({ 33, yuumicube_33 });

	return map;
}


struct COEFFICIENTS {
	std::map<int, int> cf_map;
	COEFFICIENTS(std::vector<int> vec) noexcept
	{
		for (int i = 0; i < vec.size(); ++i)
		{
			cf_map.insert({ i, vec.at(i) });
		}
	}
};

COEFFICIENTS generatePolyNomial4D(int N)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::vector<int> coeffs_conv;
	std::uniform_int_distribution<int> dist(-N, N - 1);
	for (int i = 0; i < 15; ++i)
	{
		coeffs_conv.push_back(dist(gen));
	}
	COEFFICIENTS coeffs = coeffs_conv;
	return coeffs;
}

struct Point {
	double w, x, y, z;
};


Point computeGradient(const COEFFICIENTS& coeffs, const Point& point)
{
	double df_dw = 2 * coeffs.cf_map.at(0) * point.w + coeffs.cf_map.at(4) * point.x + coeffs.cf_map.at(5) * point.y + coeffs.cf_map.at(6) * point.z + coeffs.cf_map.at(10);
	double df_dx = 2 * coeffs.cf_map.at(1) * point.x + coeffs.cf_map.at(4) * point.w + coeffs.cf_map.at(7) * point.y + coeffs.cf_map.at(8) * point.z + coeffs.cf_map.at(11);
	double df_dy = 2 * coeffs.cf_map.at(2) * point.y + coeffs.cf_map.at(5) * point.w + coeffs.cf_map.at(7) * point.x + coeffs.cf_map.at(9) * point.z + coeffs.cf_map.at(12);
	double df_dz = 2 * coeffs.cf_map.at(3) * point.z + coeffs.cf_map.at(6) * point.w + coeffs.cf_map.at(8) * point.x + coeffs.cf_map.at(9) * point.y + coeffs.cf_map.at(13);



	return { df_dw, df_dx, df_dy, df_dz };
}

std::vector<bool> detectDirection(const Point& gradient)
{
	//true = up && false = down
	std::vector<bool> result;
	bool direction_w = (gradient.w > 0) ? true : false;
	bool direction_x = (gradient.x > 0) ? true : false;
	bool direction_y = (gradient.y > 0) ? true : false;
	bool direction_z = (gradient.z > 0) ? true : false;


	result.push_back(direction_w);
	result.push_back(direction_x);
	result.push_back(direction_y);
	result.push_back(direction_z);
	return result;
}

YUUMICUBE generateYuumiCube()
{
	int cube[6][3][3];
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				std::random_device rd;
				std::mt19937 gen(rd());
				std::uniform_int_distribution<int> dist(0, 255);
				cube[i][j][k] = dist(gen);
			}
		}
	}
	YUUMICUBE YC(cube);
	return YC;
}

YUUMICUBE generateYuumiCubeCustom(int a)
{
	int cube[6][3][3];
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				std::random_device rd;
				std::mt19937 gen(rd());
				std::uniform_int_distribution<int> dist(0, 255);
				cube[i][j][k] = dist(gen);
			}
		}
	}
	YUUMICUBE YC(cube);
	YC.cube[1][1][1] = a;
	return YC;
}

YUUMICUBE multiplyYuumiCube(YUUMICUBE A, YUUMICUBE B)
{
	YUUMICUBE result = generateYuumiCube();
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				result.cube[i][j][k] = A.cube[i][j][k] * B.cube[i][j][k];
			}
		}
	}
	return result;
}

YUUMICUBE divideYuumiCube(YUUMICUBE A, YUUMICUBE B)
{
	YUUMICUBE result = generateYuumiCube();
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				result.cube[i][j][k] = A.cube[i][j][k] / B.cube[i][j][k];
			}
		}
	}
	return result;
}

YUUMICUBE subtractyYuumiCube(YUUMICUBE A, YUUMICUBE B)
{
	YUUMICUBE result = generateYuumiCube();
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				result.cube[i][j][k] = A.cube[i][j][k] - B.cube[i][j][k];
			}
		}
	}
	return result;
}

YUUMICUBE additonYuumiCube(YUUMICUBE A, YUUMICUBE B)
{
	YUUMICUBE result = generateYuumiCube();
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				result.cube[i][j][k] = A.cube[i][j][k] + B.cube[i][j][k];
			}
		}
	}
	return result;
}

YUUMICUBE logYuumiCube(YUUMICUBE A, YUUMICUBE B)
{
	YUUMICUBE result = generateYuumiCube();
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				result.cube[i][j][k] = std::log2(A.cube[i][j][k]) / std::log2(B.cube[i][j][k]);
			}
		}
	}
	return result;
}

YUUMICUBE logInverseYuumiCube(YUUMICUBE A, YUUMICUBE B)
{
	YUUMICUBE result = generateYuumiCube();
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				result.cube[i][j][k] = std::pow(B.cube[i][j][k], A.cube[i][j][k]);
			}
		}
	}
	return result;
}

constexpr YUUMICUBE mirrorYuumiCube(YUUMICUBE A)
{
	YUUMICUBE A_tmp = A;
	int i_tmp = 3;
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				A.cube[i][j][k] = A_tmp.cube[i_tmp][j][k];
			}
		}
		if (i_tmp < 5)
		{
			++i_tmp;
		}
		else {
			i_tmp = 0;
		}
	}
	return A;
}



constexpr YUUMICUBE moveYuumiCube(YUUMICUBE A, int ROW_START, int COLLUM_START, char DIRECTION)
{
	YUUMICUBE A_tmp = A;
	int j_tmp{ 0 };
	int i_tmp{ 0 };
	switch (DIRECTION)
	{
	case 'R':
		for (int i = 0; i < 6; ++i) {
			for (int j = 0; j < 3; ++j) {
				for (int k = 0; k < 3; ++k) {
					i_tmp = i;
					switch (i_tmp)
					{
					case(0):
						i_tmp = 1;
						break;
					case(1):
						i_tmp = 2;
						break;
					case(2):
						i_tmp = 3;
						break;
					case(3):
						i_tmp = 4;
						break;
					case(4):
						i_tmp = 5;
						break;
					case(5):
						i_tmp = 0;
						break;
					}
					A.cube[i][j][k] = A_tmp.cube[i_tmp][j][k];
					
				}
			}
		}
		break;

	case 'L':
		for (int i = 0; i < 6; ++i) {
			for (int j = 0; j < 3; ++j) {
				for (int k = 0; k < 3; ++k) {
					i_tmp = i;
					switch (i_tmp)
					{
					case(0):
						i_tmp = 5;
						break;
					case(1):
						i_tmp = 0;
						break;
					case(2):
						i_tmp = 1;
						break;
					case(3):
						i_tmp = 2;
						break;
					case(4):
						i_tmp = 3;
						break;
					case(5):
						i_tmp = 4;
						break;
					}
					A.cube[i][j][k] = A_tmp.cube[i_tmp][j][k];
				}
			}
		}
		break;

	case 'U':
		for (int i = 0; i < 6; ++i) {
			for (int j = 0; j < 3; ++j) {
				for (int k = 0; k < 3; ++k) {
					j_tmp = j;
					i_tmp = i;
					switch (j_tmp)
					{
					case(0):

						j_tmp = 1;
						break;
					case(1):
						j_tmp = 2;
						break;
					case(2):
						if (i_tmp == 5)
						{
							i_tmp = 0;
						}
						else
						{
							++i_tmp;
						}
						j_tmp = 0;
						break;
					}
					A.cube[i][j][k] = A_tmp.cube[i_tmp][j_tmp][k];
				}
			}
		}
		break;
	case 'D':
		for (int i = 0; i < 6; ++i) {
			for (int j = 0; j < 3; ++j) {
				for (int k = 0; k < 3; ++k) {
					j_tmp = j;
					i_tmp = i;
					switch (j_tmp)
					{
					case(0):
						if (i_tmp == 0)
						{
							i_tmp = 5;
						}
						else
						{
							--i_tmp;
						}
						j_tmp = 2;
						break;
					case(1):
						j_tmp = 0;
						break;
					case(2):
						j_tmp = 1;
						break;
					}
					A.cube[i][j][k] = A_tmp.cube[i_tmp][j_tmp][k];
				}
			}
		}
		break;
	}
	return A;
}

constexpr YUUMICUBE moveNumbersInYuumiCube(YUUMICUBE A, char DIRECTION)
{
	int k_tmp { 0 };
	YUUMICUBE A_tmp = A;

	switch (DIRECTION)
	{
	case 'R':
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				for (int k = 0; k < 3; ++k)
				{
					k_tmp = k;
					if (k_tmp == 0)
					{
						k_tmp = 2;
					}
					else
					{
						--k_tmp;
					}
					A.cube[i][j][k] = A_tmp.cube[i][j][k_tmp];
				}
			}
		}
		break;

	case 'L':
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				for (int k = 0; k < 3; ++k)
				{
					k_tmp = k;
					if (k_tmp == 2)
					{
						k_tmp = 0;
					}
					else
					{
						++k_tmp;
					}
					A.cube[i][j][k] = A_tmp.cube[i][j][k_tmp];
				}
			}
		}
		break;

	}

	return A;
}

constexpr void printYuumiCube(YUUMICUBE A)
{
	for (int i = 0; i < 6; ++i)
	{
		std::cout << "{";
		for (int j = 0; j < 3; ++j)
		{
			std::cout << "{";
			for (int k = 0; k < 3; ++k)
			{
				if (k == 2)
				{
					std::cout << A.cube[i][j][k];
				}
				else {
					std::cout << A.cube[i][j][k] << ",";
				}
			}
			if (j == 2)
			{
				std::cout << "}";
			}
			else {
				std::cout << "}" << ",";
			}
		}

		if (i == 5)
		{
			std::cout << "}";
		}
		else {
			std::cout << "}" << ",";
		}
		std::cout << std::endl;
	}
}

std::string parseYuumiCubetoString(YUUMICUBE A)
{
	std::string result;

	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				result += std::to_string(A.cube[i][j][k]);
				result += ':';
			}
		}
	}
	result += '<';
	return result;
}

std::map<int, YUUMICUBE> parseStringtoYuumiCube(std::string input_str)
{
	int cube_tmp[6][3][3];
	YUUMICUBE yuumicube_tmp = generateYuumiCube();
	std::string tmp;
	std::vector<int> tmp_vec;
	int tmp_vec_at{ 0 };
	std::map<int, YUUMICUBE> yuumicube_map;
	int count_map{ 0 };

	for (int i = 0; i < input_str.size(); ++i)
	{
		if (input_str[i] == ':')
		{
			if (tmp.size() != 0)
			{
				tmp_vec.push_back(std::stoi(tmp));
				tmp.clear();
			}
			if (input_str[i + 1] == '<')
			{
				tmp_vec_at = 0;

				for (int m = 0; m < 6; ++m)
				{
					for (int n = 0; n < 3; ++n)
					{
						for (int o = 0; o < 3; ++o)
						{
							cube_tmp[m][n][o] = tmp_vec.at(tmp_vec_at);
							++tmp_vec_at;
						}
					}
				}
				yuumicube_tmp = cube_tmp;
				yuumicube_map.insert({ count_map, yuumicube_tmp });
				tmp.clear();
				tmp_vec.clear();
				++count_map;
				++i;
			}
		}
		else
		{
			tmp += input_str[i];
		}
	}
	return yuumicube_map;
}


std::string generateKey()
{
	COEFFICIENTS coeffs = generatePolyNomial4D(255);
	std::string key;
	for (std::map<int, int>::iterator it = coeffs.cf_map.begin(); it != coeffs.cf_map.end(); ++it)
	{
		key += std::to_string(it->second);
		key += ":";
	}
	key += ":";
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(2, 34);
	key += std::to_string(dist(gen));
	key += "::";
	std::uniform_int_distribution<int> dist2(-100000, 100000);
	for (int i = 0; i < 4; ++i)
	{
		key += std::to_string(dist2(gen));
		key += ":";
	}
	key += ":";
	return key;
}


std::map<int, std::vector<int>> parseKey(std::string input_str)
{
	std::map<int, std::vector<int>> map;
	std::vector<int> coeffs_vec;
	std::vector<int> random_numb;
	std::vector<int> point_vec;
	std::string tmp;
	int count{};
	for (int i = 0; i < input_str.length(); ++i)
	{
		if (input_str[i] == ':')
		{
			if (tmp.size() != 0)
			{
				coeffs_vec.push_back(std::stoi(tmp));
			}
			if (input_str[i + 1] == ':')
			{
				count = i + 2;
				tmp.clear();
				break;
			}
			if (tmp.size() != 0)
			{
				tmp.clear();
			}
		}
		else
		{
			tmp += input_str[i];

		}
	}
	
	for (int i = count; i < input_str.length(); ++i)
	{
		if (input_str[i] == ':')
		{
			if (input_str[i + 1] == ':')
			{
				random_numb.push_back(std::stoi(tmp));
				tmp.clear();
				count = i + 2;
				break;
			}
		}
		else
		{
			tmp += input_str[i];
		}
	}
	
	for (int i = count; i < input_str.length(); ++i)
	{
		if (input_str[i] == ':')
		{
			if (tmp.size() != 0)
			{
				point_vec.push_back(std::stoi(tmp));

			}
			if (input_str[i + 1] == ':')
			{
				count = i;
				tmp.clear();
				break;
			}
			if (tmp.size() != 0)
			{
				tmp.clear();
			}
		}
		else
		{
			tmp += input_str[i];
		}
	}
	
	map.insert({ 1, coeffs_vec });
	map.insert({ 2, random_numb });
	map.insert({ 3, point_vec });
	return map;
}

std::string encrypt(std::map<int, std::vector<int>> key_map, std::string msg)
{
	//we have to interpret the key_map
	//then encrypt the msg accordingly
	std::string msg_encrypted;
	YUUMICUBE msg_char_cube = generateYuumiCube();
	Point point_key;
	std::vector<int> coeffs_key_conv;
	int random_numb_key;
	int i {0};
	for (std::vector<int>::iterator it = key_map.at(3).begin(); it != key_map.at(3).end(); ++it)
	{
		switch (i)
		{
		case 0:
			point_key.w = *it;
			break;
		case 1:
			point_key.x = *it;
			break;
		case 2:
			point_key.y = *it;
			break;
		case 3:
			point_key.z = *it;
			break;
		}
		++i;
	}

	for (std::vector<int>::iterator it = key_map.at(2).begin(); it != key_map.at(2).end(); ++it)
	{
		random_numb_key = *it;
	}

	i = 0;
	for (std::vector<int>::iterator it = key_map.at(1).begin(); it != key_map.at(1).end(); ++it)
	{
		coeffs_key_conv.push_back(*it);
	}
	COEFFICIENTS coeffs_key = coeffs_key_conv;
	Point gradient = computeGradient(coeffs_key, point_key);

	std::vector<bool> directional_gradients = detectDirection(gradient);
	std::bitset<4> encryption_order{ 0b0000 };

	i = 0;
	for (std::vector<bool>::iterator it = directional_gradients.begin(); it != directional_gradients.end(); ++it)
	{
		*it ? encryption_order.set(i, 1) : encryption_order.set(i, 0);
		++i;
	}

	std::map<int, YUUMICUBE> cubes_constant = cubesConstant();

	YUUMICUBE cube_chosen = cubes_constant.at(random_numb_key);
	YUUMICUBE cube_tmp = cubes_constant.at(static_cast<int>(random_numb_key / 2));
	int encryption_order_int = static_cast<int>(encryption_order.to_ulong());

	YUUMICUBE msg_char_cube_encrypted = generateYuumiCube();


	for (int i = 0; i < msg.size(); ++i)
	{
		msg_char_cube = generateYuumiCubeCustom(int(msg[i]));

		if (encryption_order_int >= 0 && encryption_order_int < 4)
		{
			msg_char_cube_encrypted = multiplyYuumiCube(msg_char_cube, cube_tmp);
		}
		if (encryption_order_int >= 4 && encryption_order_int < 8)
		{
			msg_char_cube_encrypted = subtractyYuumiCube(msg_char_cube, cube_tmp);
		}
		if (encryption_order_int >= 8 && encryption_order_int < 12)
		{
			msg_char_cube_encrypted = subtractyYuumiCube(msg_char_cube, cube_tmp);
		}
		if (encryption_order_int >= 12 && encryption_order_int <= 16)
		{
			msg_char_cube_encrypted = additonYuumiCube(msg_char_cube, cube_tmp);
		}

		
		for (int k = 0; k < encryption_order.size(); ++k)
		{
			switch (k)
			{
			case(0):
				if (encryption_order[k] == 0)
				{
					msg_char_cube_encrypted = moveNumbersInYuumiCube(msg_char_cube_encrypted, 'L');
				}
				if (encryption_order[k] == 1)
				{
					msg_char_cube_encrypted = moveNumbersInYuumiCube(msg_char_cube_encrypted, 'R');
				}
				break;

			case(1):
				if (encryption_order[k] == 0)
				{
					msg_char_cube_encrypted = moveYuumiCube(msg_char_cube_encrypted, 1, 1, 'L');
				}
				if (encryption_order[k] == 1)
				{
					msg_char_cube_encrypted = moveYuumiCube(msg_char_cube_encrypted, 1, 1, 'R');
				}
				break;

			case(2):
				if (encryption_order[k] == 0)
				{
					msg_char_cube_encrypted = moveYuumiCube(msg_char_cube_encrypted, 1, 1, 'L');
				}
				if (encryption_order[k] == 1)
				{
					msg_char_cube_encrypted = moveYuumiCube(msg_char_cube_encrypted, 1, 1, 'R');
				}
				break;
			
			case(3):
				if (encryption_order[k] == 0)
				{
					msg_char_cube_encrypted = moveNumbersInYuumiCube(msg_char_cube_encrypted, 'L');
				}
				if (encryption_order[k] == 1)
				{
					msg_char_cube_encrypted = moveNumbersInYuumiCube(msg_char_cube_encrypted, 'R');
				}
				break;
			}

		}
		
		msg_encrypted += parseYuumiCubetoString(msg_char_cube_encrypted);
		if (i == msg.size() - 1)
		{
			msg_encrypted += "<";
		}
	}
	return msg_encrypted;
}

std::string convertASCII(std::string str, int len)
{
	std::string string;
	int num = 0;
	for (int i = 0; i < len; i++)
	{
		num = num * 10 + (str[i] - '0');
		if (num >= 32 && num <= 122)
		{
			char ch = (char)num;
			string = string + (ch);
			num = 0;
		}
	}
	return string;
}


std::string decrypt(std::map<int, std::vector<int>> key_map, std::string msg_encrypted)
{
	Point point_key;
	std::vector<int> coeffs_key_conv;
	int random_numb_key;
	int i{ 0 };
	std::string msg_decrypted;

	for (std::vector<int>::iterator it = key_map.at(3).begin(); it != key_map.at(3).end(); ++it)
	{
		switch (i)
		{
		case 0:
			point_key.w = *it;
			break;
		case 1:
			point_key.x = *it;
			break;
		case 2:
			point_key.y = *it;
			break;
		case 3:
			point_key.z = *it;
			break;
		}
		++i;
	}

	for (std::vector<int>::iterator it = key_map.at(2).begin(); it != key_map.at(2).end(); ++it)
	{
		random_numb_key = *it;
	}

	i = 0;
	for (std::vector<int>::iterator it = key_map.at(1).begin(); it != key_map.at(1).end(); ++it)
	{
		coeffs_key_conv.push_back(*it);
	}
	COEFFICIENTS coeffs_key = coeffs_key_conv;
	Point gradient = computeGradient(coeffs_key, point_key);

	std::vector<bool> directional_gradients = detectDirection(gradient);
	std::bitset<4> encryption_order{ 0b0000 };

	i = 0;
	for (std::vector<bool>::iterator it = directional_gradients.begin(); it != directional_gradients.end(); ++it)
	{
		*it ? encryption_order.set(i, 1) : encryption_order.set(i, 0);
		++i;
	}

	std::map<int, YUUMICUBE> cubes_constant = cubesConstant();

	YUUMICUBE cube_chosen = cubes_constant.at(random_numb_key);
	YUUMICUBE cube_tmp = cubes_constant.at(static_cast<int>(random_numb_key / 2));
	int encryption_order_int = static_cast<int>(encryption_order.to_ulong());


	//iterate through encrypted msg
	//PARSE THE ENCRYPTED char TO YUUMICUBE

	std::map<int, YUUMICUBE> msg_encrypted_yuumicube_map = parseStringtoYuumiCube(msg_encrypted);

	for (std::map<int, YUUMICUBE>::iterator it = msg_encrypted_yuumicube_map.begin(); it != msg_encrypted_yuumicube_map.end(); ++it)
	{

		YUUMICUBE msg_char_cube_encrypted = it->second;
		
		for (int k = encryption_order.size() - 1; k >= 0; --k)
		{
			
			switch (k)
			{
			case(0):
				if (encryption_order[k] == 1)
				{
					msg_char_cube_encrypted = moveNumbersInYuumiCube(msg_char_cube_encrypted, 'L');
				}
				if (encryption_order[k] == 0)
				{
					msg_char_cube_encrypted = moveNumbersInYuumiCube(msg_char_cube_encrypted, 'R');
				}
				break;

			case(1):
				if (encryption_order[k] == 1)
				{
					msg_char_cube_encrypted = moveYuumiCube(msg_char_cube_encrypted, 1, 1, 'L');
				}
				if (encryption_order[k] == 0)
				{
					msg_char_cube_encrypted = moveYuumiCube(msg_char_cube_encrypted, 1, 1, 'R');
				}
				break;

			case(2):
				if (encryption_order[k] == 1)
				{
					msg_char_cube_encrypted = moveYuumiCube(msg_char_cube_encrypted, 1, 1, 'L');
				}
				if (encryption_order[k] == 0)
				{
					msg_char_cube_encrypted = moveYuumiCube(msg_char_cube_encrypted, 1, 1, 'R');
				}
				break;

			case(3):
				if (encryption_order[k] == 1)
				{
					msg_char_cube_encrypted = moveNumbersInYuumiCube(msg_char_cube_encrypted, 'L');
				}
				if (encryption_order[k] == 0)
				{
					msg_char_cube_encrypted = moveNumbersInYuumiCube(msg_char_cube_encrypted, 'R');
				}
				break;
			}
			
		}

		if (encryption_order_int >= 0 && encryption_order_int < 4)
		{
			//msg_char_cube_encrypted = multiplyYuumiCube(*it, cube_tmp);
			msg_char_cube_encrypted = divideYuumiCube(msg_char_cube_encrypted, cube_tmp);

		}
		if (encryption_order_int >= 4 && encryption_order_int < 8)
		{
			//msg_char_cube_encrypted = subtractyYuumiCube(*it, cube_tmp);
			msg_char_cube_encrypted = additonYuumiCube(msg_char_cube_encrypted, cube_tmp);
		}
		if (encryption_order_int >= 8 && encryption_order_int < 12)
		{
			//msg_char_cube_encrypted = subtractyYuumiCube(*it, cube_tmp);
			msg_char_cube_encrypted = additonYuumiCube(msg_char_cube_encrypted, cube_tmp);
		}
		if (encryption_order_int >= 12 && encryption_order_int <= 16)
		{
			//msg_char_cube_encrypted = additonYuumiCube(*it, cube_tmp);
			msg_char_cube_encrypted = subtractyYuumiCube(msg_char_cube_encrypted, cube_tmp);
		}
		msg_decrypted += msg_char_cube_encrypted.cube[1][1][1];
	}

	return msg_decrypted;
}


int main()
{
	std::string x;
	std::string key_tmp;
	std::string msg;
	std::string msg_return;
	size_t len;
	HGLOBAL hMem;

	std::cout << "Generate Key	(1)" << std::endl;
	std::cout << "Encrypt		(2)" << std::endl;
	std::cout << "Decrypt		(3)" << std::endl;
	std::cout << std::endl << "Enter what u wanna do: ";
	std::getline(std::cin, x);
	switch (std::stoi(x))
	{
	case (1):
		std::cout << "generating key" << std::endl;
		key_tmp = generateKey();
		len = strlen(key_tmp.c_str() - 1);
		hMem = GlobalAlloc(GMEM_FIXED, len);
		memcpy(GlobalLock(hMem), key_tmp.c_str(), len);
		OpenClipboard(0);
		EmptyClipboard();
		SetClipboardData(CF_TEXT, hMem);
		CloseClipboard();
		std::cout << key_tmp << std::endl;
		std::cout << "safed key to clipboard";
		std::cin.get();
		break;
	case(2):
		std::cout << "Enter Msg you want to encrypt: " << std::endl;
		std::getline(std::cin, msg);
		std::cout << std::endl;
		std::cout << "Enter key: ";
		std::getline(std::cin, key_tmp);
		msg_return = encrypt(parseKey(key_tmp), msg);
		len = strlen(msg_return.c_str() - 1);
		hMem = GlobalAlloc(GMEM_FIXED, len);
		memcpy(GlobalLock(hMem), msg_return.c_str(), len);
		OpenClipboard(0);
		EmptyClipboard();
		SetClipboardData(CF_TEXT, hMem);
		CloseClipboard();
		std::cout << "Encrypted msg safed to clipboard" << std::endl << msg_return << std::endl << std::endl;
		std::cout << "Meow~ <3";
		std::cin.get();
		break;

	case(3):
		std::cout << "Enter Msg you want to decrypt: " << std::endl;
		std::getline(std::cin, msg);
		std::cout << std::endl;
		std::cout << "Enter key: ";
		std::getline(std::cin, key_tmp);
		msg_return = decrypt(parseKey(key_tmp), msg);
		len = strlen(msg_return.c_str() - 1);
		hMem = GlobalAlloc(GMEM_FIXED, len);
		memcpy(GlobalLock(hMem), msg_return.c_str(), len);
		OpenClipboard(0);
		EmptyClipboard();
		SetClipboardData(CF_TEXT, hMem);
		CloseClipboard();
		std::cout << "Decrypted msg safed to clipboard" << std::endl << msg_return << std::endl << std::endl;
		std::cout << "Meow~ <3";
		std::cin.get();
		break;
	}
	
	std::cin.get();
	return 0;
}