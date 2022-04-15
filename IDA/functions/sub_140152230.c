#include "../winhttp.h"

//----- (0000000140152230) ----------------------------------------------------
__int64 __fastcall sub_140152230(__int64 a1, __m128i* a2, int a3)
{
	unsigned int v3; // r12d
	__m128i* v4; // rsi
	__int64 v5; // r15
	int v6; // r13d
	int v7; // ebx
	__int64 v9; // rcx
	__int64 v10; // r8
	int* v11; // r14
	_WORD* v12; // rdi
	__int64 v13; // rax
	bool v14; // zf
	int* v15; // rdx
	__int64 v16; // rax
	__int64 i; // rax
	__int64 v18; // rcx
	__int64 v19; // r8
	int* v20; // rax
	__int64 v21; // rdi
	char v22; // al
	__int64 v23; // rbx
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rax
	int* v28; // r14
	__int64 v29; // rbx
	__int64 v30; // rax
	int* v31; // rsi
	__int64 v32; // rax
	__int64 v33; // rdi
	unsigned __int64 v34; // rdi
	_WORD* v35; // r15
	__int64 v36; // r13
	__int64 v37; // rsi
	_QWORD* v38; // rdi
	__int64* v39; // rax
	__int64 v40; // rax
	char v41; // di
	__int64 v42; // [rsp+20h] [rbp-49h] BYREF
	__int64 v43; // [rsp+28h] [rbp-41h] BYREF
	__int64(__fastcall * *v44)(); // [rsp+30h] [rbp-39h] BYREF
	__int128 v45; // [rsp+38h] [rbp-31h]
	int* v46; // [rsp+48h] [rbp-21h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-19h] BYREF
	__int128 v48; // [rsp+58h] [rbp-11h]
	__int64 v49; // [rsp+68h] [rbp-1h] BYREF
	int* v50; // [rsp+70h] [rbp+7h]
	__int64 v52; // [rsp+D8h] [rbp+6Fh] BYREF
	int v53; // [rsp+E0h] [rbp+77h]
	int* v54; // [rsp+E8h] [rbp+7Fh]

	v53 = a3;
	v3 = 0;
	v4 = a2;
	v5 = a1;
	v6 = 0;
	LODWORD(v52) = 0;
	if (!a2)
	{
		*(_QWORD*)&v48 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v48 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v44 = TlsValue;
		v52 = 0x141D2B730i64;
		v45 = v48;
		v7 = sub_1401971E0(&dword_140C8A140, 13, &v52, &v44);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v48 + 1));
		if (v7)
			DebugBreak();
		return 2147942487i64;
	}
	v11 = sub_14018B280(16i64, 0);
	v54 = v11;
	*(_QWORD*)&v45 = v11;
	*((_QWORD*)&v45 + 1) = v11;
	v46 = v11 + 4;
	if (v11)
		*(_WORD*)v11 = 0;
	v12 = *(_WORD**)(qword_140C63650 + 784);
	if (v12 && *v12)
	{
		v13 = 0i64;
		do
			v14 = v12[++v13] == 0;
		while (!v14);
		v15 = *(int**)(qword_140C63650 + 784);
		if ((2 * v13) >> 1)
			sub_14001C310(&v44, v15, (int*)&v12[v13]);
		else
			sub_1407DB590(v11, v15, 0i64);
		v16 = 0i64;
		do
			v14 = asc_1409DB434[++v16] == 0;
		while (!v14);
		sub_14001C310(&v44, (int*)L"\\", (int*)&asc_1409DB434[v16]);
		v11 = (int*)v45;
		v54 = (int*)v45;
	}
	if ((unsigned int)sub_1401B58D0(v9, v4, v10))
		goto LABEL_24;
	if (v12 && *v12)
	{
		for (i = 0i64; v4->m128i_i16[i]; ++i)
			;
		sub_14001C310(&v44, v4->m128i_i32, (int*)((char*)v4->m128i_i32 + 2 * i));
		v11 = (int*)v45;
		v54 = (int*)v45;
		v4 = (__m128i*)v45;
		if ((unsigned int)sub_1401B58D0(v18, (const __m128i*)v45, v19))
		{
		LABEL_24:
			v20 = sub_14018B280(16i64, 0);
			v21 = (__int64)v20;
			v50 = v20;
			if (v20)
				*(_WORD*)v20 = 0;
			v43 = 0i64;
			v22 = sub_1400E27B0(qword_140C63650, v4, &v43);
			v23 = v43;
			if (!v22
				|| (v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v43 + 16i64))(v43)) == 0
				|| (v25 = sub_1401A5AE0(v24, L"Animations")) == 0
				|| (v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25)) == 0)
			{
				v3 = -2147467259;
			LABEL_62:
				if (v23)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
				if (v21)
					sub_14018B900(v21, 0);
				v11 = v54;
				goto LABEL_67;
			}
			v27 = sub_1401A5AE0(v26, L"Animation");
			if (!v27)
				goto LABEL_62;
			v28 = (int*)v45;
			v29 = v27;
			while (1)
			{
				v30 = sub_1401A6B80(v29, L"ID");
				if (v30)
				{
					v31 = (int*)sub_1401A4F40(v30 + 32);
					if (v31)
					{
						v32 = 0i64;
						v28 = 0i64;
						if (*(_WORD*)v31)
						{
							do
								++v32;
							while (*((_WORD*)v31 + v32));
						}
						v33 = (2 * v32) >> 1;
						if ((unsigned __int64)(v33 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
							v28 = sub_14018B280(2 * (v33 + 1), 0);
						v34 = 2 * v33;
						sub_1407DB590(v28, v31, v34);
						v35 = (_WORD*)((char*)v28 + v34);
						if ((int*)((char*)v28 + v34))
							*v35 = 0;
						LODWORD(v52) = v6 | 1;
						v36 = *(_QWORD*)(a1 + 24);
						v37 = v36;
						v38 = *(_QWORD**)(v36 + 8);
						while (v38)
						{
							if ((int)sub_1400454D0(v38[5], v38[6], (unsigned __int16*)v28, (__int64)v35) < 0)
							{
								v38 = (_QWORD*)v38[3];
							}
							else
							{
								v37 = (__int64)v38;
								v38 = (_QWORD*)v38[2];
							}
						}
						if (v37 == v36
							|| (int)sub_1400454D0((__int64)v28, (__int64)v35, *(unsigned __int16**)(v37 + 40), *(_QWORD*)(v37 + 48)) < 0)
						{
							v49 = v36;
							v39 = &v49;
						}
						else
						{
							v42 = v37;
							v39 = &v42;
						}
						v5 = a1;
						v40 = *v39;
						if (v40 == *(_QWORD*)(a1 + 24) || !*(_QWORD*)(v40 + 64))
						{
							v6 = v52;
							v41 = 1;
							goto LABEL_54;
						}
						v6 = v52;
					}
				}
				v41 = 0;
			LABEL_54:
				if ((v6 & 1) != 0)
				{
					v6 &= ~1u;
					if (v28)
						sub_14018B900((__int64)v28, 0);
				}
				if (v41)
					sub_1401526C0(v5, v29, v53);
				v29 = sub_1401A5BC0(v29, L"Animation");
				if (!v29)
				{
					v23 = v43;
					v21 = (__int64)v50;
					goto LABEL_62;
				}
			}
		}
	}
	v3 = -2147467259;
LABEL_67:
	if (v11)
		sub_14018B900((__int64)v11, 0);
	return v3;
}
// 1401523F4: variable 'v9' is possibly undefined
// 1401523F4: variable 'v10' is possibly undefined
// 140152438: variable 'v18' is possibly undefined
// 140152438: variable 'v19' is possibly undefined
// 1409DB42C: using guessed type wchar_t aId[3];
// 1409DB434: using guessed type wchar_t asc_1409DB434[2];
// 140A31048: using guessed type wchar_t aAnimation[10];
// 140A31060: using guessed type wchar_t aAnimations[11];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C8A140: using guessed type _DWORD dword_140C8A140;

