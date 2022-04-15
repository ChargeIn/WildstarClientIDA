#include "../winhttp.h"

//----- (00000001403F42E0) ----------------------------------------------------
__int64 __fastcall sub_1403F42E0(__int64 a1, int* a2)
{
	unsigned __int64 v2; // rsi
	int* v3; // r14
	__int64 v4; // rbx
	__int64 v5; // rdi
	int* v6; // rax
	int* v7; // r13
	unsigned __int64 v8; // r15
	__int64 v9; // r12
	__int64 v10; // rdi
	__int64 v11; // rdi
	__int64 v12; // rbp
	__int64 v13; // r14
	int* v14; // rbx
	int* v15; // r14
	int* v16; // rdi
	unsigned __int64 v17; // rax
	int* v18; // rax
	int* v19; // rbx
	int* v20; // rcx
	__int64 v21; // rax
	__int128 v22; // xmm0
	unsigned __int64 v23; // r13
	int* v24; // rax
	__int64 v25; // rdi
	int* v26; // rcx
	int* v27; // rbp
	_QWORD* v28; // rdi
	char* v29; // r14
	int v30; // eax
	int v31; // eax
	__int64 v32; // rcx
	int* v34; // [rsp+20h] [rbp-98h]
	__int64 v35; // [rsp+28h] [rbp-90h]
	__int64 v36; // [rsp+30h] [rbp-88h]
	__int64 v37; // [rsp+38h] [rbp-80h]
	int* v38; // [rsp+40h] [rbp-78h]
	__int64 v39; // [rsp+48h] [rbp-70h] BYREF
	__int64 v40; // [rsp+50h] [rbp-68h]
	__int64 v41; // [rsp+58h] [rbp-60h]
	int* v42; // [rsp+60h] [rbp-58h]
	unsigned int v45; // [rsp+D0h] [rbp+18h]
	__int64 v46; // [rsp+D8h] [rbp+20h]

	v2 = 0i64;
	v3 = a2;
	v4 = 0i64;
	v5 = *(_QWORD*)(qword_140C65898 + 29504) + 2496i64;
	v46 = 0i64;
	v36 = v5;
	v6 = sub_14018DBC0(0i64, *(unsigned int*)(*(_QWORD*)(qword_140C65898 + 29504) + 2520i64), 24i64);
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0i64;
	v45 = 0;
	if (v6)
		v7 = v6;
	v34 = v7;
	if (*(_DWORD*)(v5 + 24))
	{
		v10 = 0i64;
		v35 = 0i64;
		do
		{
			v11 = *(_QWORD*)(v10 + *(_QWORD*)(v36 + 16));
			if (v11
				&& *(_BYTE*)(v11 + 312)
				&& !sub_140137390(v11, (int*)L"OptionsScreen")
				&& !sub_140137390(v11, (int*)L"FrontEndScreen")
				&& !sub_140137390(v11, (int*)L"ExternalTool"))
			{
				v12 = v4 + 1;
				v13 = v4;
				v14 = sub_14018DB00((__int64)v7, v4 + 1, 24i64);
				if (v7 != v14)
				{
					sub_1407DB590(v14, v7, 24 * v46);
					if (v7)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
					v7 = v14;
					v34 = v14;
				}
				v4 = v12;
				v46 = v12;
				v15 = &v7[6 * v13];
				v38 = v15;
				*(_BYTE*)v15 = *(_BYTE*)(v11 + 536);
				v15[1] = *(unsigned __int8*)(v11 + 264);
				*((_BYTE*)v15 + 8) = *(_BYTE*)(v11 + 248);
				v16 = *(int**)(v11 + 24);
				v17 = 0i64;
				*((_QWORD*)v15 + 2) = v16;
				if (*(_WORD*)v16)
				{
					do
						++v17;
					while (*((_WORD*)v16 + v17));
					if (v17 > 0x80)
					{
						if (v16)
						{
							v18 = sub_14018B280(274i64, 0);
							if (v18)
							{
								*((_QWORD*)v18 + 1) = 128i64;
								*(_QWORD*)v18 = off_140B55060;
							}
							else
							{
								v18 = 0i64;
							}
							v19 = v18 + 4;
							v20 = v18 + 4;
							if ((((unsigned __int8)((_BYTE)v18 + 16) | (unsigned __int8)v16) & 0xF) != 0)
							{
								sub_1407DB590(v20, v16, 0x100ui64);
								*((_WORD*)v19 + 128) = 0;
							}
							else
							{
								v21 = 2i64;
								do
								{
									v22 = *(_OWORD*)v16;
									v20 += 32;
									v16 += 32;
									*((_OWORD*)v20 - 8) = v22;
									*((_OWORD*)v20 - 7) = *((_OWORD*)v16 - 7);
									*((_OWORD*)v20 - 6) = *((_OWORD*)v16 - 6);
									*((_OWORD*)v20 - 5) = *((_OWORD*)v16 - 5);
									*((_OWORD*)v20 - 4) = *((_OWORD*)v16 - 4);
									*((_OWORD*)v20 - 3) = *((_OWORD*)v16 - 3);
									*((_OWORD*)v20 - 2) = *((_OWORD*)v16 - 2);
									*((_OWORD*)v20 - 1) = *((_OWORD*)v16 - 1);
									--v21;
								} while (v21);
								*((_WORD*)v19 + 128) = 0;
							}
						}
						else
						{
							v19 = 0i64;
						}
						v23 = v8 + 1;
						v24 = sub_14018DB00(v9, v8 + 1, 8i64);
						v25 = 8 * v8;
						v26 = &v24[2 * v8];
						v27 = v24;
						v37 = 8 * v8;
						if (v26)
						{
							*(_QWORD*)v26 = v19;
							v19 = 0i64;
						}
						if ((int*)v9 != v24)
						{
							if (v8)
							{
								v28 = (_QWORD*)v9;
								v29 = (char*)v24 - v9;
								do
								{
									if ((_QWORD*)((char*)v28 + (_QWORD)v29))
									{
										*(_QWORD*)((char*)v28 + (_QWORD)v29) = *v28;
										*v28 = 0i64;
									}
									if (*v28)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v28 - 16i64) + 8i64))(*v28 - 16i64);
									++v28;
									--v8;
								} while (v8);
								v25 = v37;
								v15 = v38;
							}
							if (v9)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
							v9 = (__int64)v27;
						}
						v8 = v23;
						if (v19)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v19 - 2) + 8i64))(v19 - 4);
						v7 = v34;
						v4 = v46;
						*((_QWORD*)v15 + 2) = *(_QWORD*)(v25 + v9);
					}
				}
			}
			v10 = v35 + 8;
			++v45;
			v35 += 8i64;
		} while (v45 < *(_DWORD*)(v36 + 24));
		v3 = a2;
	}
	v39 = 0i64;
	v40 = 0i64;
	v41 = 0i64;
	v42 = 0i64;
	LODWORD(v40) = v3[2];
	v30 = *v3;
	v42 = v7;
	LODWORD(v39) = v30;
	v31 = v3[1];
	LODWORD(v41) = v4;
	HIDWORD(v39) = v31;
	HIDWORD(v40) = v3[3];
	sub_1403F4740(a1, 0x7B6u, (__int64)&v39);
	if (v8)
	{
		do
		{
			v32 = *(_QWORD*)(v9 + 8 * v2);
			if (v32)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v32 - 16) + 8i64))(v32 - 16);
			++v2;
		} while (v2 < v8);
	}
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	if (v7)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
	return 0i64;
}
// 140B00158: using guessed type wchar_t aFrontendscreen[15];
// 140B00178: using guessed type wchar_t aOptionsscreen_2[14];
// 140B001F0: using guessed type wchar_t aExternaltool[13];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

