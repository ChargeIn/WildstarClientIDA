#include "../winhttp.h"

//----- (00000001400E4E80) ----------------------------------------------------
__int64 __fastcall sub_1400E4E80(__int64 a1, int a2)
{
	int* v4; // r13
	int* v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rdi
	bool v8; // zf
	__int64 v9; // rbx
	int* v10; // rax
	__m128i* v11; // r14
	int v12; // edi
	int v13; // eax
	void* v14; // rdx
	int** v15; // rcx
	int* v16; // rsi
	__int64 v17; // rbx
	int* v18; // rax
	__int64 v19; // rdi
	__m128i* v20; // rbx
	__int64 v21; // rcx
	__int64* v22; // rbx
	unsigned int v23; // esi
	__m128i* v24; // r14
	_DWORD* v25; // rcx
	__int64 v26; // rax
	int v27; // ebx
	__int64 v28; // rbx
	int* v29; // rax
	int v30; // ebx
	__int64 v31; // rdi
	__int64 v32; // rbx
	int* v33; // rax
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rbx
	__int64* v37; // rax
	__int64 v38; // rax
	int v40; // ebx
	_OWORD TlsValue[2]; // [rsp+30h] [rbp-A9h] BYREF
	const wchar_t* v42; // [rsp+50h] [rbp-89h] BYREF
	_BYTE v43[24]; // [rsp+58h] [rbp-81h] BYREF
	__m256 v44; // [rsp+70h] [rbp-69h] BYREF
	__int128 v45; // [rsp+90h] [rbp-49h] BYREF
	LPVOID v46[2]; // [rsp+A0h] [rbp-39h]
	const wchar_t** v47; // [rsp+B0h] [rbp-29h]
	__m256 v48; // [rsp+C0h] [rbp-19h] BYREF
	__m256 v49[2]; // [rsp+E0h] [rbp+7h] BYREF
	__int64 v50; // [rsp+140h] [rbp+67h] BYREF
	__m128i* v51; // [rsp+150h] [rbp+77h]
	__int64* v52; // [rsp+158h] [rbp+7Fh] BYREF

	v4 = sub_14018B280(2i64, 0);
	sub_1407DB590(v4, dword_1409D37FC, 0i64);
	if (v4)
		*(_WORD*)v4 = 0;
	v5 = sub_14018B280(16i64, 0);
	v6 = (__int64)v5;
	if (v5)
		*(_WORD*)v5 = 0;
	v7 = 0i64;
	do
		v8 = aUiClientsprite_0[++v7] == 0;
	while (!v8);
	memset(v43, 0, sizeof(v43));
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v9 = 2 * (v7 + 1);
		v10 = sub_14018B280(v9, 0);
		*(_QWORD*)v43 = v10;
		*(_QWORD*)&v43[8] = v10;
		*(_QWORD*)&v43[16] = (char*)v10 + v9;
		if (v10)
			*(_WORD*)v10 = 0;
	}
	sub_14001C310(&v42, v4, v4);
	sub_14001C310(&v42, (int*)L"UI\\ClientSprites.xml", (int*)&aUiClientsprite_0[v7]);
	*(_OWORD*)&v44.m256_f32[4] = *(_OWORD*)&v43[8];
	v11 = *(__m128i**)v43;
	if (v6)
		sub_14018B900(v6, 0);
	v12 = sub_140109290((__int64*)(a1 + 240), (WCHAR*)v11, 0i64);
	if (v12 >= 0)
	{
		v15 = (int**)&v42;
		v42 = L"UI\\SpriteDocs\\*.xml";
		v47 = &v42;
		*(_QWORD*)v43 = L"UI\\Assets\\Docs\\Sprites\\*.xml";
		*(_QWORD*)&v43[8] = L"UI\\Assets\\Docs\\General\\*.xml";
		LODWORD(v50) = 0;
		do
		{
			v16 = *v15;
			v52 = 0i64;
			v17 = 0i64;
			if (*(_WORD*)v16)
			{
				do
					++v17;
				while (*((_WORD*)v16 + v17));
			}
			memset((char*)TlsValue + 8, 0, 24);
			if ((unsigned __int64)(v17 + 1) > 0x7FFFFFFFFFFFFFFEi64)
			{
				v19 = 0i64;
			}
			else
			{
				v18 = sub_14018B280(2 * (v17 + 1), 0);
				*((_QWORD*)&TlsValue[0] + 1) = v18;
				*(_QWORD*)&TlsValue[1] = v18;
				v19 = 0i64;
				*((_QWORD*)&TlsValue[1] + 1) = (char*)v18 + 2 * v17 + 2;
				if (v18)
					*(_WORD*)v18 = 0;
			}
			sub_14001C310(TlsValue, v4, v4);
			sub_14001C310(TlsValue, v16, (int*)((char*)v16 + 2 * v17));
			v20 = (__m128i*) * ((_QWORD*)&TlsValue[0] + 1);
			v21 = (__int64)v11;
			*(_OWORD*)&v44.m256_f32[4] = TlsValue[1];
			v11 = (__m128i*) * ((_QWORD*)&TlsValue[0] + 1);
			v51 = (__m128i*) * ((_QWORD*)&TlsValue[0] + 1);
			if (v21)
				sub_14018B900(v21, 0);
			sub_1401B54E0(v21, v20, 0i64, &v52);
			v22 = v52;
			v23 = 0;
			if ((*(__int64(__fastcall**)(__int64*))(*v52 + 16))(v52))
			{
				while (1)
				{
					v24 = (__m128i*)(*(__int64(__fastcall**)(__int64*, __int64))(*v22 + 24))(v22, v19);
					v12 = sub_140109290((__int64*)(a1 + 240), (WCHAR*)v24, 0i64);
					if (v12 < 0)
						break;
					if (!a2)
					{
						v12 = sub_14010DD80(*(_QWORD***)(a1 + 368), v24);
						if (v12 < 0)
						{
							*(_QWORD*)&TlsValue[0] = &off_140B5E648;
							*((_QWORD*)&TlsValue[0] + 1) = 0i64;
							*(_QWORD*)&TlsValue[1] = TlsGetValue(dwTlsIndex);
							TlsSetValue(dwTlsIndex, TlsValue);
							v42 = *(const wchar_t**)&TlsValue[0];
							*(_OWORD*)v43 = *(_OWORD*)((char*)TlsValue + 8);
							*(_QWORD*)v44.m256_f32 = &off_140B5E648;
							*(_QWORD*)&v44.m256_f32[2] = L"Result";
							*(_QWORD*)&v44.m256_f32[4] = TlsGetValue(dwTlsIndex);
							TlsSetValue(dwTlsIndex, &v44);
							v25 = &unk_140C8A0B0;
							*(_QWORD*)v44.m256_f32 = &off_140B5E640;
							v26 = 0x141D11B20i64;
							goto LABEL_32;
						}
					}
					v19 = ++v23;
					if (v23 >= (unsigned __int64)(*(__int64(__fastcall**)(__int64*))(*v22 + 16))(v22))
					{
						v11 = v51;
						v19 = 0i64;
						goto LABEL_29;
					}
				}
				*(_QWORD*)&TlsValue[0] = &off_140B5E648;
				*((_QWORD*)&TlsValue[0] + 1) = 0i64;
				*(_QWORD*)&TlsValue[1] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, TlsValue);
				v42 = *(const wchar_t**)&TlsValue[0];
				*(_OWORD*)v43 = *(_OWORD*)((char*)TlsValue + 8);
				*(_QWORD*)v44.m256_f32 = &off_140B5E648;
				*(_QWORD*)&v44.m256_f32[2] = L"Result";
				*(_QWORD*)&v44.m256_f32[4] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v44);
				v25 = &unk_140C8A0A8;
				*(_QWORD*)v44.m256_f32 = &off_140B5E640;
				v26 = 0x141D11AE8i64;
			LABEL_32:
				v50 = v26;
				LODWORD(v44.m256_f32[6]) = v12;
				v45 = *(_OWORD*)v44.m256_f32;
				*(_OWORD*)v46 = *(_OWORD*)&v44.m256_f32[4];
				v27 = sub_1401971E0(v25, 22, &v50, v24, &v45, &v42);
				*(_QWORD*)v44.m256_f32 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *(LPVOID*)&v44.m256_f32[4]);
				*(_QWORD*)&TlsValue[0] = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *(LPVOID*)&TlsValue[1]);
				if (v27)
					DebugBreak();
				v11 = v51;
				goto LABEL_62;
			}
		LABEL_29:
			(*(void(__fastcall**)(__int64*))(*v22 + 8))(v22);
			v15 = (int**)(v47 + 1);
			LODWORD(v50) = v50 + 1;
			++v47;
		} while ((unsigned __int64)(int)v50 < 3);
		if (!a2)
		{
			do
				v8 = aUiClientwindow[++v19] == 0;
			while (!v8);
			memset(v43, 0, sizeof(v43));
			if ((unsigned __int64)(v19 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v28 = 2 * (v19 + 1);
				v29 = sub_14018B280(v28, 0);
				*(_QWORD*)v43 = v29;
				*(_QWORD*)&v43[8] = v29;
				*(_QWORD*)&v43[16] = (char*)v29 + v28;
				if (v29)
					*(_WORD*)v29 = 0;
			}
			sub_14001C310(&v42, v4, v4);
			sub_14001C310(&v42, (int*)L"UI\\ClientWindowTemplates.xml", (int*)&aUiClientwindow[v19]);
			v11 = *(__m128i**)v43;
			*(_OWORD*)&v44.m256_f32[2] = *(_OWORD*)v43;
			*(_QWORD*)&v44.m256_f32[6] = *(_QWORD*)&v43[16];
			if (*((_QWORD*)&TlsValue[0] + 1))
				sub_14018B900(*((__int64*)&TlsValue[0] + 1), 0);
			v12 = sub_14010DD80(*(_QWORD***)(a1 + 368), v11);
			if (v12 < 0)
			{
				*(_QWORD*)&TlsValue[0] = &off_140B5E648;
				*((_QWORD*)&TlsValue[0] + 1) = 0i64;
				*(_QWORD*)&TlsValue[1] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, TlsValue);
				v42 = *(const wchar_t**)&TlsValue[0];
				*(_OWORD*)v43 = *(_OWORD*)((char*)TlsValue + 8);
				*(_QWORD*)&v45 = &off_140B5E648;
				*((_QWORD*)&v45 + 1) = L"Result";
				v46[0] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v45);
				LODWORD(v46[1]) = v12;
				*(_QWORD*)&v45 = &off_140B5E640;
				*(_OWORD*)&v48.m256_f32[4] = *(_OWORD*)v46;
				v50 = 0x141D11A00i64;
				v49[0] = v44;
				*(_OWORD*)v48.m256_f32 = v45;
				v13 = sub_1401971E0(&dword_140C8A0AC, 22, &v50, v49, &v48, &v42);
			LABEL_45:
				v14 = v46[0];
				*(_QWORD*)&v45 = &off_140B5E648;
				goto LABEL_46;
			}
		}
		v31 = 0i64;
		do
			v8 = aUiAnimationsXm[++v31] == 0;
		while (!v8);
		memset(v43, 0, sizeof(v43));
		if ((unsigned __int64)(v31 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v32 = 2 * (v31 + 1);
			v33 = sub_14018B280(v32, 0);
			*(_QWORD*)v43 = v33;
			*(_QWORD*)&v43[8] = v33;
			*(_QWORD*)&v43[16] = (char*)v33 + v32;
			if (v33)
				*(_WORD*)v33 = 0;
		}
		sub_14001C310(&v42, v4, v4);
		sub_14001C310(&v42, (int*)L"UI\\Animations.xml", (int*)&aUiAnimationsXm[v31]);
		v34 = (__int64)v11;
		v11 = *(__m128i**)v43;
		*(_QWORD*)&v44.m256_f32[6] = *(_QWORD*)&v43[16];
		*(_OWORD*)&v44.m256_f32[2] = *(_OWORD*)v43;
		if (v34)
			sub_14018B900(v34, 0);
		v12 = sub_140152230(*(_QWORD*)(a1 + 376), v11, 0);
		if (v12 < 0)
		{
			*(_QWORD*)&TlsValue[0] = &off_140B5E648;
			*((_QWORD*)&TlsValue[0] + 1) = 0i64;
			*(_QWORD*)&TlsValue[1] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, TlsValue);
			v42 = *(const wchar_t**)&TlsValue[0];
			*(_OWORD*)v43 = *(_OWORD*)((char*)TlsValue + 8);
			*(_QWORD*)&v45 = &off_140B5E648;
			*((_QWORD*)&v45 + 1) = L"Result";
			v46[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v45);
			LODWORD(v46[1]) = v12;
			*(_QWORD*)&v45 = &off_140B5E640;
			*(_OWORD*)&v49[0].m256_f32[4] = *(_OWORD*)v46;
			v50 = 0x141D11A60i64;
			v48 = v44;
			*(_OWORD*)v49[0].m256_f32 = v45;
			v13 = sub_1401971E0(&dword_140C8A0A0, 22, &v50, &v48, v49, &v42);
			goto LABEL_45;
		}
		if (a2)
			goto LABEL_61;
		v35 = *(_QWORD*)(a1 + 368);
		v36 = *(_QWORD*)(v35 + 24);
		v37 = sub_14010E2E0(*(_QWORD**)(v35 + 16), v36, L"Default");
		if (v37 != (__int64*)v36)
		{
			v38 = *v37;
			if (v38)
			{
				*(_QWORD*)(a1 + 2928) = v38;
			LABEL_61:
				v12 = 0;
				goto LABEL_62;
			}
		}
		*(_QWORD*)&TlsValue[0] = &off_140B5E648;
		*((_QWORD*)&TlsValue[0] + 1) = 0i64;
		*(_QWORD*)&TlsValue[1] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, TlsValue);
		v42 = *(const wchar_t**)&TlsValue[0];
		v50 = 0x141D11B98i64;
		*(_OWORD*)v43 = *(_OWORD*)((char*)TlsValue + 8);
		v40 = sub_1401971E0(&dword_140C8A0A4, 22, &v50, &v42);
		*(_QWORD*)&TlsValue[0] = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *(LPVOID*)&TlsValue[1]);
		if (v40)
			DebugBreak();
		v12 = -2147467259;
	}
	else
	{
		*(_QWORD*)&TlsValue[0] = &off_140B5E648;
		*((_QWORD*)&TlsValue[0] + 1) = 0i64;
		*(_QWORD*)&TlsValue[1] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, TlsValue);
		v42 = *(const wchar_t**)&TlsValue[0];
		*(_OWORD*)v43 = *(_OWORD*)((char*)TlsValue + 8);
		*(_QWORD*)v44.m256_f32 = &off_140B5E648;
		*(_QWORD*)&v44.m256_f32[2] = L"Result";
		*(_QWORD*)&v44.m256_f32[4] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v44);
		LODWORD(v44.m256_f32[6]) = v12;
		*(_QWORD*)v44.m256_f32 = &off_140B5E640;
		*(_OWORD*)v46 = *(_OWORD*)&v44.m256_f32[4];
		v50 = 0x141D11918i64;
		v45 = *(_OWORD*)v44.m256_f32;
		v13 = sub_1401971E0(&dword_140C8A0B4, 22, &v50, v11, &v45, &v42);
		v14 = *(void**)&v44.m256_f32[4];
		*(_QWORD*)v44.m256_f32 = &off_140B5E648;
	LABEL_46:
		v30 = v13;
		TlsSetValue(dwTlsIndex, v14);
		*(_QWORD*)&TlsValue[0] = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *(LPVOID*)&TlsValue[1]);
		if (v30)
			DebugBreak();
	}
LABEL_62:
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return (unsigned int)v12;
}
// 1400E5192: variable 'v21' is possibly undefined
// 1409D37FC: using guessed type int dword_1409D37FC[10];
// 140A172A8: using guessed type wchar_t aUiClientsprite_0[21];
// 140A17310: using guessed type wchar_t aUiSpritedocsXm[20];
// 140A17338: using guessed type wchar_t aUiAssetsDocsSp_1[29];
// 140A173F8: using guessed type wchar_t aUiAnimationsXm[18];
// 140A17458: using guessed type wchar_t aDefault_3[8];
// 140A17468: using guessed type wchar_t aUiAssetsDocsGe_8[29];
// 140A17518: using guessed type wchar_t aUiClientwindow[29];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A0A0: using guessed type _DWORD dword_140C8A0A0;
// 140C8A0A4: using guessed type _DWORD dword_140C8A0A4;
// 140C8A0AC: using guessed type _DWORD dword_140C8A0AC;
// 140C8A0B4: using guessed type _DWORD dword_140C8A0B4;

