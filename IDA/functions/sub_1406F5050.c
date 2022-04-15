//----- (00000001406F5050) ----------------------------------------------------
__int64 __fastcall sub_1406F5050(_QWORD* a1)
{
	__int64 v1; // rbx
	__int64 v3; // rdx
	unsigned int* v4; // rcx
	unsigned __int64 v5; // rdx
	unsigned int v6; // ecx
	__int64 v7; // rax
	int* v8; // rdi
	__int64 v9; // rax
	__int64 v11; // rsi
	__int64 v12; // rbx
	__int64 v13; // rcx
	int* v14; // r14
	int* v15; // rsi
	__int64* v16; // rax
	__int64 v17; // rax
	int* v18; // r15
	unsigned __int64 v19; // rax
	unsigned __int64 v20; // rbx
	unsigned __int64 v21; // rbx
	__int64 v22; // rbx
	__int64 v23; // rdx
	unsigned __int16* v24; // rcx
	unsigned __int16 v25; // ax
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	__int64 v29; // [rsp+30h] [rbp-F8h] BYREF
	int* v30; // [rsp+38h] [rbp-F0h]
	int* v31; // [rsp+40h] [rbp-E8h]
	__int64 v32; // [rsp+48h] [rbp-E0h]
	__int64 v33; // [rsp+50h] [rbp-D8h] BYREF
	__int64 v34; // [rsp+58h] [rbp-D0h]
	unsigned __int16 v35[64]; // [rsp+70h] [rbp-B8h] BYREF

	v1 = *(_QWORD*)(qword_140C65898 + 30088);
	v3 = (unsigned int)sub_140056D60(a1, 1u);
	if (v1
		&& (v4 = (unsigned int*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v1 + 336i64))(
			v1,
			v3,
			0i64)) != 0i64)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, unsigned __int16*, int, int))(*(_QWORD*)v1 + 240i64))(
			v1,
			*v4,
			0i64,
			v35,
			64,
			1);
	}
	else
	{
		v5 = *(_QWORD*)(qword_140C63650 + 768);
		v6 = 0;
		if (v5)
		{
			v7 = 0i64;
			do
			{
				if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v7) + 400i64) == a1)
					break;
				v7 = ++v6;
			} while (v6 < v5);
		}
		v8 = 0i64;
		v30 = 0i64;
		v32 = 0i64;
		v9 = 0i64;
		while (aError_3[++v9] != 0)
			;
		v11 = (2 * v9) >> 1;
		if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v8 = sub_14018B280(2 * (v11 + 1), 0);
			v30 = v8;
			v32 = (__int64)v8 + 2 * v11 + 2;
		}
		v12 = 2 * v11;
		sub_1407DB590(v8, (int*)L"Error", 2 * v11);
		v14 = (int*)((char*)v8 + 2 * v11);
		v31 = v14;
		if (v14)
			*(_WORD*)v14 = 0;
		v15 = (int*)sub_14034BDD0(v13, 63);
		if (v15)
		{
			v17 = 0i64;
			if (*(_WORD*)v15)
			{
				do
					++v17;
				while (*((_WORD*)v15 + v17));
			}
			v18 = (int*)((char*)v15 + 2 * v17);
			v19 = v12 >> 1;
			v20 = ((char*)v18 - (char*)v15) >> 1;
			if (v20 > v19)
			{
				v22 = 2 * v19;
				sub_1407DB590(v8, v15, 2 * v19);
				sub_14001C310(&v29, (int*)((char*)v15 + v22), v18);
				v8 = v30;
			}
			else
			{
				v21 = 2 * v20;
				sub_1407DB590(v8, v15, v21);
				if ((int*)((char*)v8 + v21) != v14)
					sub_1407DB590((int*)((char*)v8 + v21), v14, 2ui64);
			}
		}
		else
		{
			v16 = sub_14018EFA0(&v33, (__int64)L"<<%d>>", 63i64);
			if (v16 != &v29)
			{
				sub_14001C480((__int64)&v29, (int*)v16[1], (int*)v16[2]);
				v8 = v30;
			}
			if (v34)
				sub_14018B900(v34, 0);
		}
		v23 = 64i64;
		v24 = v35;
		while (v23 != -2147483582)
		{
			v25 = *(unsigned __int16*)((char*)v24 + (char*)v8 - (char*)v35);
			if (!v25)
				break;
			*v24++ = v25;
			if (!--v23)
			{
				--v24;
				break;
			}
		}
		*v24 = 0;
		if (v8)
			sub_14018B900((__int64)v8, 0);
	}
	v26 = (unsigned __int64*)sub_14018F0E0(&v33, v35)[1];
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
	if (v34)
		sub_14018B900(v34, 0);
	return 1i64;
}
// 1406F52F7: conditional instruction was optimized away because rdx.8!=0
// 1406F51BF: variable 'v13' is possibly undefined
// 140A171C0: using guessed type wchar_t aD_17[7];
// 140B410F8: using guessed type wchar_t aError_3[6];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406F5050: using guessed type unsigned __int16 var_B8[64];

