#include "../winhttp.h"

//----- (00000001406F53A0) ----------------------------------------------------
__int64 __fastcall sub_1406F53A0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rdx
	__int64 v4; // rax
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	unsigned __int64 v8; // rdx
	unsigned int v9; // ecx
	__int64 v10; // rax
	int* v11; // rsi
	__int64 v12; // rax
	__int64 v14; // r14
	__int64 v15; // rbx
	__int64 v16; // rcx
	int* v17; // r15
	int* v18; // r14
	__int64* v19; // rax
	__int64 v20; // rax
	int* v21; // r12
	unsigned __int64 v22; // rax
	unsigned __int64 v23; // rbx
	unsigned __int64 v24; // rbx
	__int64 v25; // rbx
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	__int64 v28; // [rsp+20h] [rbp-58h] BYREF
	int* v29; // [rsp+28h] [rbp-50h]
	int* v30; // [rsp+30h] [rbp-48h]
	__int64 v31; // [rsp+38h] [rbp-40h]
	__int64 v32; // [rsp+40h] [rbp-38h] BYREF
	__int64 v33; // [rsp+48h] [rbp-30h]

	v2 = *(_QWORD*)(qword_140C65898 + 30088);
	v3 = (unsigned int)sub_140056D60(a1, 1u);
	if (v2 && (v4 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 336i64))(v2, v3, 0i64)) != 0)
	{
		v5 = (unsigned __int64*)sub_14018F0E0(&v28, (unsigned __int16*)(v4 + 4))[1];
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v5 + v6));
			sub_140058710((__int64)a1, v5, v6);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v29)
		{
			sub_14018B900((__int64)v29, 0);
			return 1i64;
		}
	}
	else
	{
		v8 = *(_QWORD*)(qword_140C63650 + 768);
		v9 = 0;
		if (v8)
		{
			v10 = 0i64;
			do
			{
				if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v10) + 400i64) == a1)
					break;
				v10 = ++v9;
			} while (v9 < v8);
		}
		v11 = 0i64;
		v29 = 0i64;
		v31 = 0i64;
		v12 = 0i64;
		while (aError_4[++v12] != 0)
			;
		v14 = (2 * v12) >> 1;
		if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v11 = sub_14018B280(2 * (v14 + 1), 0);
			v29 = v11;
			v31 = (__int64)v11 + 2 * v14 + 2;
		}
		v15 = 2 * v14;
		sub_1407DB590(v11, (int*)L"Error", 2 * v14);
		v17 = (int*)((char*)v11 + 2 * v14);
		v30 = v17;
		if (v17)
			*(_WORD*)v17 = 0;
		v18 = (int*)sub_14034BDD0(v16, 63);
		if (v18)
		{
			v20 = 0i64;
			if (*(_WORD*)v18)
			{
				do
					++v20;
				while (*((_WORD*)v18 + v20));
			}
			v21 = (int*)((char*)v18 + 2 * v20);
			v22 = v15 >> 1;
			v23 = ((char*)v21 - (char*)v18) >> 1;
			if (v23 > v22)
			{
				v25 = 2 * v22;
				sub_1407DB590(v11, v18, 2 * v22);
				sub_14001C310(&v28, (int*)((char*)v18 + v25), v21);
				v11 = v29;
			}
			else
			{
				v24 = 2 * v23;
				sub_1407DB590(v11, v18, v24);
				if ((int*)((char*)v11 + v24) != v17)
					sub_1407DB590((int*)((char*)v11 + v24), v17, 2ui64);
			}
		}
		else
		{
			v19 = sub_14018EFA0(&v32, (__int64)L"<<%d>>", 63i64);
			if (v19 != &v28)
			{
				sub_14001C480((__int64)&v28, (int*)v19[1], (int*)v19[2]);
				v11 = v29;
			}
			if (v33)
				sub_14018B900(v33, 0);
		}
		v26 = (unsigned __int64*)sub_14018F0E0(&v28, (unsigned __int16*)v11)[1];
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
		if (v29)
			sub_14018B900((__int64)v29, 0);
		if (v11)
			sub_14018B900((__int64)v11, 0);
	}
	return 1i64;
}
// 1406F5520: variable 'v16' is possibly undefined
// 140A171C0: using guessed type wchar_t aD_17[7];
// 140B410E8: using guessed type wchar_t aError_4[6];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

