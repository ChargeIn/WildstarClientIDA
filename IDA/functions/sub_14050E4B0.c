#include "../winhttp.h"

//----- (000000014050E4B0) ----------------------------------------------------
__int64 __fastcall sub_14050E4B0(_QWORD* a1)
{
	unsigned int v2; // ecx
	unsigned __int64 v3; // rdx
	__int64 v4; // rax
	__int64 result; // rax
	int v6; // r13d
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64(__fastcall * v9)(wchar_t**, __int64); // rax
	unsigned int v10; // eax
	unsigned int v11; // r15d
	unsigned int v12; // ebp
	int v13; // r12d
	__int64 v14; // rax
	__int64 v15; // rcx
	unsigned int* v16; // rsi
	__int16* v17; // r14
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rbx
	__int64 v21; // rax
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // r8
	__m128i v24; // xmm0
	__int64 v25; // rax
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // r8
	__int64 v30; // [rsp+20h] [rbp-48h] BYREF
	__int64 v31; // [rsp+28h] [rbp-40h]

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	result = sub_140056D60(a1, 1u);
	v6 = result;
	if (!(_DWORD)result)
		return result;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	v9 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	a1[2] += 16i64;
	if (v9)
	{
		v10 = v9(off_140A6DA80, qword_140C63858);
	LABEL_15:
		v11 = v10;
		goto LABEL_16;
	}
	if (dword_140C65238)
	{
		v11 = 0;
	}
	else
	{
		if ((int)sub_140242260() >= 0)
		{
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65120 + 40i64))(qword_140C65120);
			goto LABEL_15;
		}
		v11 = 0;
	}
LABEL_16:
	v12 = 0;
	if (v11)
	{
		v13 = 1;
		while (!qword_140C63848)
		{
			if (!dword_140C65238 && (int)sub_140242260() >= 0)
			{
				v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65120 + 32i64))(qword_140C65120, v12);
				goto LABEL_23;
			}
		LABEL_50:
			if (++v12 >= v11)
				return 1i64;
		}
		v14 = qword_140C63848(off_140A6DA80, v12, qword_140C63858);
	LABEL_23:
		v16 = (unsigned int*)v14;
		if (v14)
		{
			if (*(_DWORD*)(v14 + 4) == v6)
			{
				v17 = sub_14034BDD0(v15, *(_DWORD*)(v14 + 8));
				if (v17)
				{
					v18 = a1[2];
					*(_DWORD*)(v18 + 8) = 3;
					*(double*)v18 = (double)v13;
					v19 = a1[4];
					a1[2] += 16i64;
					if (*(_QWORD*)(v19 + 120) >= *(_QWORD*)(v19 + 112))
						sub_14005E2C0((__int64)a1);
					v20 = a1[2];
					v21 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v20 + 8) = 5;
					*(_QWORD*)v20 = v21;
					a1[2] += 16i64;
					v22 = (unsigned __int64*)sub_14018F0E0(&v30, L"index")[1];
					if (v22)
					{
						v23 = -1i64;
						do
							++v23;
						while (*((_BYTE*)v22 + v23));
						sub_140058710((__int64)a1, v22, v23);
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v31)
						sub_14018B900(v31, 0);
					v24 = _mm_cvtsi32_si128(*v16);
					v25 = a1[2];
					*(_DWORD*)(v25 + 8) = 3;
					*(_QWORD*)v25 = *(_OWORD*)&_mm_cvtepi32_pd(v24);
					a1[2] += 16i64;
					sub_14005EA50(
						(__int64)a1,
						(__int64*)(a1[2] - 48i64),
						(int*)(a1[2] - 32i64),
						(unsigned int*)(a1[2] - 16i64));
					a1[2] -= 32i64;
					v26 = (unsigned __int64*)sub_14018F0E0(&v30, L"localizedText")[1];
					if (v26)
					{
						v27 = -1i64;
						do
							++v27;
						while (*((_BYTE*)v26 + v27));
						sub_140058710((__int64)a1, v26, v27);
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v31)
						sub_14018B900(v31, 0);
					v28 = (unsigned __int64*)sub_14018F0E0(&v30, (unsigned __int16*)v17)[1];
					if (v28)
					{
						v29 = -1i64;
						do
							++v29;
						while (*((_BYTE*)v28 + v29));
						sub_140058710((__int64)a1, v28, v29);
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v31)
						sub_14018B900(v31, 0);
					sub_14005EA50(
						(__int64)a1,
						(__int64*)(a1[2] - 48i64),
						(int*)(a1[2] - 32i64),
						(unsigned int*)(a1[2] - 16i64));
					a1[2] -= 32i64;
					sub_14005EA50(
						(__int64)a1,
						(__int64*)(a1[2] - 48i64),
						(int*)(a1[2] - 32i64),
						(unsigned int*)(a1[2] - 16i64));
					a1[2] -= 32i64;
					++v13;
				}
			}
		}
		goto LABEL_50;
	}
	return 1i64;
}
// 14050E624: variable 'v15' is possibly undefined
// 140A6DA80: using guessed type wchar_t *off_140A6DA80[2];
// 140B113B8: using guessed type wchar_t aLocalizedtext_1[14];
// 140B11440: using guessed type wchar_t aIndex_44[6];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65120: using guessed type __int64 qword_140C65120;
// 140C65238: using guessed type int dword_140C65238;

