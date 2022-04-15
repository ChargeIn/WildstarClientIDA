#include "../winhttp.h"

//----- (0000000140182F80) ----------------------------------------------------
__int64* __fastcall sub_140182F80(__int64* a1, __int64 a2)
{
	__int64 v4; // rax
	WCHAR* v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // r12
	__int64 v11; // rax
	__int64 v12; // r15
	__int64 v13; // rax
	WCHAR* v14; // r13
	__int64 v15; // rax
	WCHAR* v16; // r14
	__int64 v17; // rax
	WCHAR* v18; // rbp
	__int64 v19; // rax
	__int64 v20; // rbx
	unsigned int v21; // eax
	__int64 v22; // rbx
	unsigned int v23; // eax
	__int64 v24; // rbx
	unsigned int v25; // eax
	__int64 v26; // rbx
	unsigned int v27; // eax
	__int64 v28; // rbx
	unsigned int v29; // eax
	__int64 v30; // rbx
	unsigned int v31; // eax
	__int64 v33; // [rsp+20h] [rbp-48h]
	__int64 v34; // [rsp+70h] [rbp+8h]
	WCHAR* v35; // [rsp+80h] [rbp+18h]
	WCHAR* v36; // [rsp+88h] [rbp+20h]

	v4 = sub_1401A6B80(a2, L"Movie");
	v5 = 0i64;
	if (v4)
		v34 = sub_1401A4F40(v4 + 32);
	else
		v34 = 0i64;
	v6 = sub_1401A6B80(a2, L"MovieWidth");
	if (v6)
		v35 = (WCHAR*)sub_1401A4F40(v6 + 32);
	else
		v35 = 0i64;
	v7 = sub_1401A6B80(a2, L"MovieHeight");
	if (v7)
		v36 = (WCHAR*)sub_1401A4F40(v7 + 32);
	else
		v36 = 0i64;
	v8 = sub_1401A6B80(a2, L"AudioTrack");
	if (v8)
		v33 = sub_1401A4F40(v8 + 32);
	else
		v33 = 0i64;
	v9 = sub_1401A6B80(a2, L"Overlay");
	if (v9)
		v10 = sub_1401A4F40(v9 + 32);
	else
		v10 = 0i64;
	v11 = sub_1401A6B80(a2, L"Mask");
	if (v11)
		v12 = sub_1401A4F40(v11 + 32);
	else
		v12 = 0i64;
	v13 = sub_1401A6B80(a2, L"Looping");
	if (v13)
		v14 = (WCHAR*)sub_1401A4F40(v13 + 32);
	else
		v14 = 0i64;
	v15 = sub_1401A6B80(a2, L"HoldLastFrame");
	if (v15)
		v16 = (WCHAR*)sub_1401A4F40(v15 + 32);
	else
		v16 = 0i64;
	v17 = sub_1401A6B80(a2, L"DefaultAudioTrack");
	if (v17)
		v18 = (WCHAR*)sub_1401A4F40(v17 + 32);
	else
		v18 = 0i64;
	v19 = sub_1401A6B80(a2, L"MaintainAspectRatio");
	if (v19)
		v5 = (WCHAR*)sub_1401A4F40(v19 + 32);
	if (v34)
		(*(void(__fastcall**)(__int64*, __int64))(*a1 + 568))(a1, v34);
	if (v10)
		(*(void(__fastcall**)(__int64*, __int64))(*a1 + 576))(a1, v10);
	if (v12)
		(*(void(__fastcall**)(__int64*, __int64))(*a1 + 584))(a1, v12);
	if (v35)
	{
		v20 = *a1;
		v21 = sub_14018E820(v35);
		(*(void(__fastcall**)(__int64*, _QWORD))(v20 + 592))(a1, v21);
	}
	if (v36)
	{
		v22 = *a1;
		v23 = sub_14018E820(v36);
		(*(void(__fastcall**)(__int64*, _QWORD))(v22 + 600))(a1, v23);
	}
	if (v33)
		(*(void(__fastcall**)(__int64*))(*a1 + 608))(a1);
	if (v14)
	{
		v24 = *a1;
		v25 = sub_14018E820(v14);
		(*(void(__fastcall**)(__int64*, _QWORD))(v24 + 624))(a1, v25);
	}
	if (v16)
	{
		v26 = *a1;
		v27 = sub_14018E820(v16);
		(*(void(__fastcall**)(__int64*, _QWORD))(v26 + 616))(a1, v27);
	}
	if (v18)
	{
		v28 = *a1;
		v29 = sub_14018E820(v18);
		(*(void(__fastcall**)(__int64*, _QWORD))(v28 + 632))(a1, v29);
	}
	if (v5)
	{
		v30 = *a1;
		v31 = sub_14018E820(v5);
		(*(void(__fastcall**)(__int64*, _QWORD))(v30 + 640))(a1, v31);
	}
	(*(void(__fastcall**)(__int64*))(*a1 + 648))(a1);
	return a1;
}
// 140A3DAF0: using guessed type wchar_t aMask_0[5];
// 140A3DB00: using guessed type wchar_t aOverlay_0[8];
// 140A3DB10: using guessed type wchar_t aMovieheight[12];
// 140A3DB28: using guessed type wchar_t aMoviewidth[11];
// 140A3DB80: using guessed type wchar_t aMovie[6];
// 140A3DBE0: using guessed type wchar_t aMaintainaspect[20];
// 140A3DCA0: using guessed type wchar_t aLooping[8];
// 140A3DCB0: using guessed type wchar_t aAudiotrack[11];
// 140A3DCC8: using guessed type wchar_t aDefaultaudiotr[18];
// 140A3DCF0: using guessed type wchar_t aHoldlastframe[14];

