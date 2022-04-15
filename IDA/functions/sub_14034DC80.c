//----- (000000014034DC80) ----------------------------------------------------
__int64 __fastcall sub_14034DC80(__int64 a1, __int64 a2)
{
	__int64 v3; // r8
	int v4; // ecx
	unsigned int v5; // edi
	unsigned int v6; // ebx
	unsigned int v7; // r11d
	unsigned int v8; // r10d
	int v9; // r9d
	float v10; // xmm13_4
	float v11; // xmm12_4
	int v12; // edx
	float v13; // xmm10_4
	float v14; // xmm11_4
	int v15; // eax
	int v16; // xmm0_4
	int v17; // xmm1_4
	int v18; // xmm0_4
	int v19; // xmm0_4
	int v20; // xmm1_4
	int v21; // xmm0_4
	int v22; // xmm0_4
	__int64 v23; // rax
	unsigned int v24; // edx
	unsigned int v25; // ecx
	unsigned int v26; // edx
	unsigned int v27; // eax
	__int64 result; // rax
	unsigned int v29; // ebx
	int* v30; // rax
	__int64 v31; // rax
	__int64 v32; // rax
	__int64* v33; // rcx
	__int64 v34; // rax
	__int64* v35; // rcx
	__int64 v36; // rax
	unsigned int v37; // ebx
	_DWORD* v38; // rdi
	int* v39; // rax
	__int64 v40; // [rsp+28h] [rbp-E0h]
	_DWORD v41[2]; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v42; // [rsp+60h] [rbp-A8h]
	void* v43; // [rsp+68h] [rbp-A0h]
	__int64 v44; // [rsp+70h] [rbp-98h]
	int v45; // [rsp+78h] [rbp-90h]
	int v46; // [rsp+80h] [rbp-88h]
	int v47; // [rsp+84h] [rbp-84h]
	int v48; // [rsp+88h] [rbp-80h]
	char v49[48]; // [rsp+90h] [rbp-78h] BYREF

	v3 = sub_14034CA50((__int64)v49, flt_140C43E88, a2);
	v4 = *(_DWORD*)(v3 + 16);
	v5 = *(_DWORD*)(v3 + 48);
	v6 = *(_DWORD*)(v3 + 44);
	v7 = *(_DWORD*)(v3 + 40);
	v8 = *(_DWORD*)(v3 + 32);
	v9 = *(_DWORD*)(v3 + 28);
	v10 = fmaxf(*(float*)(v3 + 36), *(float*)&dword_140C43E74);
	v11 = fminf(*(float*)(v3 + 20), *(float*)&dword_140C43E64);
	v12 = *(_DWORD*)(v3 + 24);
	v13 = fminf(*(float*)(v3 + 8), *(float*)&dword_140C43E58);
	v14 = fminf(*(float*)(v3 + 12), *(float*)&dword_140C43E5C);
	v41[0] = dword_140C43E50 & *(_DWORD*)v3;
	v15 = dword_140C43E54 & *(_DWORD*)(v3 + 4);
	if (dword_140C43E60 < v4)
		v4 = dword_140C43E60;
	v41[1] = dword_140C43E54 & *(_DWORD*)(v3 + 4);
	if (dword_140C43E68 < v12)
		v12 = dword_140C43E68;
	LODWORD(v43) = v4;
	if (dword_140C43E6C < v9)
		v9 = dword_140C43E6C;
	LODWORD(v44) = v12;
	if (v8 < dword_140C43E70)
		v8 = dword_140C43E70;
	HIDWORD(v44) = v9;
	if (dword_140C43E78 < v7)
		v7 = dword_140C43E78;
	v45 = v8;
	if (dword_140C43E7C < v6)
		v6 = dword_140C43E7C;
	v46 = v7;
	if (dword_140C43E80 < v5)
		v5 = dword_140C43E80;
	v47 = v6;
	*(_DWORD*)(a1 + 16) = v41[0];
	v16 = (int)v43;
	*(_DWORD*)(a1 + 20) = v15;
	v48 = v5;
	v17 = HIDWORD(v44);
	*(float*)(a1 + 24) = v13;
	*(float*)(a1 + 28) = v14;
	*(_DWORD*)(a1 + 32) = v16;
	v18 = v44;
	*(float*)(a1 + 36) = v11;
	*(_DWORD*)(a1 + 40) = v18;
	v19 = v45;
	*(_DWORD*)(a1 + 44) = v17;
	v20 = v47;
	*(_DWORD*)(a1 + 48) = v19;
	v21 = v46;
	*(float*)(a1 + 52) = v10;
	*(_DWORD*)(a1 + 56) = v21;
	v22 = v48;
	*(_DWORD*)(a1 + 60) = v20;
	*(_DWORD*)(a1 + 64) = v22;
	v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670);
	v24 = *(_DWORD*)(a1 + 56);
	v25 = *(_DWORD*)(a1 + 64);
	if (*(_DWORD*)(v23 + 56) < v24)
		v24 = *(_DWORD*)(v23 + 56);
	*(_DWORD*)(a1 + 56) = v24;
	v26 = *(_DWORD*)(a1 + 60);
	if (*(_DWORD*)(v23 + 56) < v26)
		v26 = *(_DWORD*)(v23 + 56);
	*(_DWORD*)(a1 + 60) = v26;
	v27 = *(_DWORD*)(v23 + 56);
	if (v27 < v25)
		v25 = v27;
	*(_DWORD*)(a1 + 64) = v25;
	result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
		qword_140C65670,
		L"Shaders\\SimpleVS.sho",
		a1 + 80);
	if ((int)result < 0)
		return result;
	result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\SimplePS.sho",
		a1 + 88);
	if ((int)result < 0)
		return result;
	result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\FillPS.sho",
		a1 + 96);
	if ((int)result < 0)
		return result;
	if ((*(_BYTE*)(a1 + 16) & 4) != 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
			qword_140C65670,
			L"Shaders\\LandVS.sho",
			a1 + 104);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\LandPS.sho",
			a1 + 112);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 56i64))(
			qword_140C65670,
			2180i64,
			1i64,
			a1 + 120);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\landRoadTrailPS.sho",
			a1 + 128);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
			qword_140C65670,
			L"Shaders\\LandDepthVS.sho",
			a1 + 136);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\LandDepthPS.sho",
			a1 + 144);
		if ((int)result < 0)
			return result;
	}
	if ((*(_BYTE*)(a1 + 16) & 0x10) != 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
			qword_140C65670,
			L"Shaders\\LandWaterDepthVS.sho",
			a1 + 152);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\LandWaterDepthPS.sho",
			a1 + 160);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
			qword_140C65670,
			L"Shaders\\LandWaterVS.sho",
			a1 + 168);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\LandWaterPS.sho",
			a1 + 176);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
			qword_140C65670,
			L"Shaders\\LightShaftVS.sho",
			a1 + 400);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\LightShaftPS.sho",
			a1 + 408);
		if ((int)result < 0)
			return result;
		if ((*(_BYTE*)(a1 + 16) & 0x10) != 0)
		{
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
				qword_140C65670,
				L"Shaders\\OceanDepthVS.sho",
				a1 + 184);
			if ((int)result < 0)
				return result;
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
				qword_140C65670,
				L"Shaders\\OceanDepthPS.sho",
				a1 + 192);
			if ((int)result < 0)
				return result;
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
				qword_140C65670,
				L"Shaders\\OceanVS.sho",
				a1 + 200);
			if ((int)result < 0)
				return result;
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
				qword_140C65670,
				L"Shaders\\OceanPS.sho",
				a1 + 208);
			if ((int)result < 0)
				return result;
			result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 56i64))(
				qword_140C65670,
				64i64,
				1i64,
				a1 + 216);
			if ((int)result < 0)
				return result;
		}
	}
	if ((*(_DWORD*)(a1 + 16) & 0x4001) == 16385)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
			qword_140C65670,
			L"Shaders\\ClutterVS.sho",
			a1 + 320);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\ClutterPS.sho",
			a1 + 328);
		if ((int)result < 0)
			return result;
	}
	if ((*(_DWORD*)(a1 + 20) & 0x4000000) != 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\TopoMapPS.sho",
			a1 + 336);
		if ((int)result < 0)
			return result;
	}
	if ((*(_DWORD*)(a1 + 16) & 0x880) == 2176)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			L"Art\\Dev\\Default_Shadow_Blob.tex",
			0i64,
			1i64,
			1,
			0,
			0,
			0,
			a1 + 384);
		if ((int)result < 0)
			return result;
	}
	if ((*(_BYTE*)(a1 + 16) & 1) != 0)
	{
		if ((*(_BYTE*)(a1 + 20) & 0x88) != 0)
		{
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
				qword_140C65670,
				L"Shaders\\LandEdgeVS.sho",
				a1 + 224);
			if ((int)result < 0)
				return result;
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
				qword_140C65670,
				L"Shaders\\LandEdgePS.sho",
				a1 + 232);
			if ((int)result < 0)
				return result;
			if ((*(int(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670 + 64i64))(
				qword_140C65670,
				6144i64,
				0i64,
				1i64,
				a1 + 240) < 0)
				return 2685665281i64;
		}
		if ((*(_BYTE*)(a1 + 16) & 1) != 0)
		{
			if ((*(_DWORD*)(a1 + 20) & 0x2200004) != 0)
			{
				result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
					qword_140C65670,
					L"Shaders\\LandGridPS.sho",
					a1 + 248);
				if ((int)result < 0)
					return result;
			}
			if ((*(_BYTE*)(a1 + 16) & 1) != 0 && (*(_DWORD*)(a1 + 20) & 0x200) != 0)
			{
				result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
					qword_140C65670,
					L"Shaders\\LandSlopePS.sho",
					a1 + 256);
				if ((int)result < 0)
					return result;
			}
		}
	}
	if ((*(_BYTE*)(a1 + 16) & 9) != 9)
	{
	LABEL_69:
		if ((*(int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 64i64))(
			qword_140C65670,
			72i64,
			0i64) >= 0)
		{
			v40 = a1 + 352;
			if ((*(int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 64i64))(
				qword_140C65670,
				48i64,
				0i64) >= 0)
			{
				LODWORD(v40) = 0;
				result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
					qword_140C65670,
					1i64,
					1i64,
					0i64,
					v40,
					1,
					0,
					0,
					0,
					a1 + 360);
				if ((int)result >= 0)
				{
					result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
						qword_140C65670,
						1i64,
						1i64,
						0i64,
						0,
						1,
						0,
						0,
						0,
						a1 + 368);
					if ((int)result >= 0)
					{
						result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
							qword_140C65670,
							1i64,
							1i64,
							0i64,
							0,
							1,
							0,
							0,
							0,
							a1 + 376);
						if ((int)result >= 0)
						{
							*(_DWORD*)(a1 + 424) = 34;
							*(_DWORD*)(a1 + 440) = 192;
							result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 56i64))(
								qword_140C65670,
								816i64,
								1i64,
								a1 + 416);
							if ((int)result >= 0)
							{
								result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670
									+ 64i64))(
										qword_140C65670,
										(unsigned int)(2 * *(_DWORD*)(a1 + 440)),
										0i64,
										1i64,
										a1 + 432);
								if ((int)result >= 0)
								{
									if ((*(_BYTE*)(a1 + 16) & 0x10) == 0
										|| (result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
											+ 152i64))(
												qword_140C65670,
												L"Shaders\\RipplePS.sho",
												a1 + 392),
											(int)result >= 0))
									{
										if ((*(_BYTE*)(a1 + 16) & 1) == 0
											|| (result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
												+ 152i64))(
													qword_140C65670,
													L"Shaders\\edgePS.sho",
													a1 + 448),
												(int)result >= 0))
										{
											if ((*(_DWORD*)(a1 + 16) & 0x4800) == 0
												|| (result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670 + 64i64))(
													qword_140C65670,
													12000i64,
													0i64,
													1i64,
													a1 + 456),
													(int)result >= 0)
												&& (result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
													+ 152i64))(
														qword_140C65670,
														L"Shaders\\WindSine2dPS.sho",
														a1 + 464),
													(int)result >= 0)
												&& (result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
													+ 152i64))(
														qword_140C65670,
														L"Shaders\\WindLocalPS.sho",
														a1 + 472),
													(int)result >= 0)
												&& (result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
													+ 152i64))(
														qword_140C65670,
														L"Shaders\\WindPhysicsPS.sho",
														a1 + 480),
													(int)result >= 0)
												&& (result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670
													+ 152i64))(
														qword_140C65670,
														L"Shaders\\WindVisualPS.sho",
														a1 + 488),
													(int)result >= 0))
											{
												if ((*(_DWORD*)(a1 + 20) & 0x1800000) == 0
													|| (result = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670
														+ 88i64))(
															qword_140C65670,
															256i64,
															1i64),
														(int)result >= 0))
												{
													if ((*(_DWORD*)(a1 + 20) & 0x100000) == 0
														|| (result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670 + 64i64))(
															qword_140C65670,
															6144i64,
															0i64,
															1i64,
															a1 + 504),
															(int)result >= 0))
													{
														if ((*(_DWORD*)(a1 + 16) & 0x20001) == 131073
															&& !*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670)
																+ 80))
														{
															*(_DWORD*)(a1 + 16) &= ~0x20000u;
														}
														if ((*(_BYTE*)(a1 + 16) & 1) == 0
															|| (result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
																qword_140C65670,
																L"Art\\Dev\\TelegraphGray_Ramp.tex",
																0i64,
																1i64,
																1,
																0,
																0,
																0,
																a1 + 512),
																(int)result >= 0)
															&& (result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																qword_140C65670,
																L"Shaders\\TelegraphColorPS.sho",
																a1 + 520),
																(int)result >= 0))
														{
															if (a1 == -72)
															{
																return 2147500035i64;
															}
															else
															{
																v30 = sub_14018B280(24i64, 0);
																if (v30)
																	v31 = sub_1401AE310((__int64)v30);
																else
																	v31 = 0i64;
																*(_QWORD*)(a1 + 72) = v31;
																v32 = sub_140232E40(2u);
																if (v32)
																	*(_DWORD*)(a1 + 2816) = *(_DWORD*)(v32 + 4);
																(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670);
																*(_DWORD*)(a1 + 568) = 0;
																*(_DWORD*)(a1 + 572) = 1;
																*(_DWORD*)(a1 + 576) = 2;
																*(_DWORD*)(a1 + 580) = 7;
																*(_DWORD*)(a1 + 584) = 7;
																*(_DWORD*)(a1 + 588) = 8;
																*(_DWORD*)(a1 + 592) = 7;
																*(_DWORD*)(a1 + 596) = 7;
																*(_DWORD*)(a1 + 600) = 4;
																*(_DWORD*)(a1 + 604) = 3;
																*(_DWORD*)(a1 + 608) = 6;
																result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670
																	+ 184i64))(
																		qword_140C65670,
																		a1 + 528);
																if ((int)result >= 0)
																{
																	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670
																		+ 192i64))(
																			qword_140C65670,
																			a1 + 536);
																	if ((int)result >= 0)
																	{
																		v33 = *(__int64**)(a1 + 536);
																		v43 = sub_14034EA90;
																		v34 = *v33;
																		v41[0] = 0;
																		v42 = a1;
																		v44 = 0i64;
																		(*(void(__fastcall**)(__int64*, _QWORD, _DWORD*))(v34 + 24))(v33, 0i64, v41);
																		v35 = *(__int64**)(a1 + 536);
																		v43 = sub_140350400;
																		v36 = *v35;
																		v41[0] = 0;
																		v42 = a1;
																		v44 = 0i64;
																		(*(void(__fastcall**)(__int64*, __int64, _DWORD*))(v36 + 24))(v35, 1i64, v41);
																		sub_14034EA90(a1);
																		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																			qword_140C65670,
																			L"Shaders\\VisualizeEnvMapPS.sho",
																			a1 + 544);
																		if ((int)result >= 0)
																		{
																			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
																				qword_140C65670,
																				L"Shaders\\SampleCubeMapPS.sho",
																				a1 + 552);
																			if ((int)result >= 0)
																			{
																				v37 = 0;
																				v38 = (_DWORD*)(a1 + 1260);
																				do
																				{
																					sub_1403512D0((__int64)(v38 - 3), v37);
																					v39 = sub_140032640(a1 + 2784, v38);
																					v38 += 32;
																					*v39 = v37++;
																				} while (v37 < 0xC);
																				*(_DWORD*)(a1 + 68) = 0;
																				return 0i64;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				return result;
			}
		}
		return 2685665281i64;
	}
	result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
		qword_140C65670,
		L"Shaders\\LandLowVS.sho",
		a1 + 264);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\LandLowPS.sho",
			a1 + 272);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 56i64))(
				qword_140C65670,
				9800i64,
				1i64,
				a1 + 280);
			if ((int)result >= 0)
			{
				v29 = 0;
				while ((*(int(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670 + 64i64))(
					qword_140C65670,
					13836i64,
					0i64,
					1i64,
					a1 + 8 * (v29 + 36i64)) >= 0)
				{
					if (++v29 >= 4)
						goto LABEL_69;
				}
				return 2685665281i64;
			}
		}
	}
	return result;
}
// 140AF48F0: using guessed type wchar_t aShadersSimplep_7[21];
// 140AF4920: using guessed type wchar_t aShadersSimplev_2[21];
// 140AF4950: using guessed type wchar_t aShadersLandvsS[19];
// 140AF4978: using guessed type wchar_t aShadersFillpsS_0[19];
// 140AF49A0: using guessed type wchar_t aShadersLandroa[28];
// 140AF49D8: using guessed type wchar_t aShadersLandpsS[19];
// 140AF4A00: using guessed type wchar_t aShadersLanddep_0[24];
// 140AF4A30: using guessed type wchar_t aShadersLanddep[24];
// 140AF4A60: using guessed type wchar_t aShadersOceanps[20];
// 140AF4A88: using guessed type wchar_t aShadersOceanvs[20];
// 140AF4AB0: using guessed type wchar_t aShadersClutter_0[22];
// 140AF4AE0: using guessed type wchar_t aShadersClutter[22];
// 140AF4B10: using guessed type wchar_t aArtDevDefaultS[32];
// 140AF4B50: using guessed type wchar_t aShadersTopomap[22];
// 140AF4B80: using guessed type wchar_t aShadersLandedg_0[23];
// 140AF4BB0: using guessed type wchar_t aShadersLandedg[23];
// 140AF4BE0: using guessed type wchar_t aShadersLandwat_0[29];
// 140AF4C20: using guessed type wchar_t aShadersLandwat[29];
// 140AF4C60: using guessed type wchar_t aShadersLandwat_2[24];
// 140AF4C90: using guessed type wchar_t aShadersLandwat_1[24];
// 140AF4CC0: using guessed type wchar_t aShadersLightsh_0[25];
// 140AF4CF8: using guessed type wchar_t aShadersLightsh[25];
// 140AF4D30: using guessed type wchar_t aShadersOceande_0[25];
// 140AF4D68: using guessed type wchar_t aShadersOceande[25];
// 140AF4DA0: using guessed type wchar_t aShadersWindvis[25];
// 140AF4DD8: using guessed type wchar_t aShadersWindphy[26];
// 140AF4E10: using guessed type wchar_t aShadersTelegra_0[29];
// 140AF4E50: using guessed type wchar_t aArtDevTelegrap[31];
// 140AF4E90: using guessed type wchar_t aShadersSamplec[28];
// 140AF4EC8: using guessed type wchar_t aShadersVisuali[30];
// 140AF4F08: using guessed type wchar_t aShadersLandslo[24];
// 140AF4F38: using guessed type wchar_t aShadersLandgri[23];
// 140AF4F68: using guessed type wchar_t aShadersLandlow_0[22];
// 140AF4F98: using guessed type wchar_t aShadersLandlow[22];
// 140AF4FC8: using guessed type wchar_t aShadersEdgepsS[19];
// 140AF4FF0: using guessed type wchar_t aShadersRipplep[21];
// 140AF5020: using guessed type wchar_t aShadersWindloc[24];
// 140AF5050: using guessed type wchar_t aShadersWindsin[25];
// 140C43E50: using guessed type int dword_140C43E50;
// 140C43E54: using guessed type int dword_140C43E54;
// 140C43E58: using guessed type int dword_140C43E58;
// 140C43E5C: using guessed type int dword_140C43E5C;
// 140C43E60: using guessed type int dword_140C43E60;
// 140C43E64: using guessed type int dword_140C43E64;
// 140C43E68: using guessed type int dword_140C43E68;
// 140C43E6C: using guessed type int dword_140C43E6C;
// 140C43E70: using guessed type int dword_140C43E70;
// 140C43E74: using guessed type int dword_140C43E74;
// 140C43E78: using guessed type int dword_140C43E78;
// 140C43E7C: using guessed type int dword_140C43E7C;
// 140C43E80: using guessed type int dword_140C43E80;
// 140C43E88: using guessed type float flt_140C43E88[13];
// 140C65670: using guessed type __int64 qword_140C65670;
// 14034DC80: using guessed type char var_C8[48];

