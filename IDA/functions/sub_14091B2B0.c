//----- (000000014091B2B0) ----------------------------------------------------
__int64 __fastcall sub_14091B2B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
	__int64 v7; // r11
	int v9; // eax
	__int64(__fastcall * *v10)(_QWORD*, _QWORD, __int64, __int64); // rsi
	__int64 result; // rax
	bool v12; // zf
	int v13; // ebx
	__int64 v14; // kr00_8
	__int64(__fastcall * v15)(_QWORD); // rax
	__int64 v16; // rax
	__int64 v17[6]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v18; // [rsp+50h] [rbp-28h]
	int v19; // [rsp+58h] [rbp-20h]
	int v20; // [rsp+5Ch] [rbp-1Ch]
	bool v21; // [rsp+60h] [rbp-18h]
	char v22; // [rsp+61h] [rbp-17h]
	bool v23; // [rsp+62h] [rbp-16h]
	bool v24; // [rsp+63h] [rbp-15h]

	v7 = *(_QWORD*)(a1 + 56);
	if ((a5 & 0x8000000) != 0)
		v9 = 2;
	else
		v9 = (a5 & 0x8000) != 0;
	v10 = (__int64(__fastcall**)(_QWORD*, _QWORD, __int64, __int64))(v7 + 8i64 * v9);
	if (!*v10)
		return 4294967265i64;
	v12 = (*(_BYTE*)a1 & 2) == 0;
	v17[2] = a2;
	v17[1] = a2 + 2i64 * (int)a4;
	v18 = 0i64;
	v17[3] = a2 + 2i64 * (int)a3;
	if (v12)
		v20 = 10000000;
	else
		v20 = *(_DWORD*)(a1 + 16);
	v13 = a7;
	v21 = (a5 & 0x80) != 0;
	v22 = BYTE1(a5) & 1;
	v24 = (a5 & 0x10000000) != 0;
	v23 = (a5 & 0x400) != 0;
	v17[4] = a6;
	if (a7 != 2)
	{
		v14 = 1431655766i64
			* (int)(-6
				* (((unsigned int)(((unsigned __int64)(1431655765i64 * a7) >> 32) - a7) >> 31)
					+ ((int)(((unsigned __int64)(1431655765i64 * a7) >> 32) - a7) >> 1)));
		v13 = HIDWORD(v14) + (HIDWORD(v14) >> 31);
	}
	if (v13 > *(_DWORD*)(v7 + 40))
		v13 = *(_DWORD*)(v7 + 40);
	v19 = v13;
	v15 = *(__int64(__fastcall**)(_QWORD))(v7 + 24);
	if (v15)
		v16 = v15(*(_QWORD*)(v7 + 32));
	else
		v16 = *(_QWORD*)(v7 + 32);
	v17[0] = v16;
	if (v16)
		result = ((__int64(__fastcall*)(__int64*)) * v10)(v17);
	else
		result = sub_14092FFA0(v17, *v10, a3, a4);
	if (2 * (int)result > v13)
		result = 0i64;
	if ((*(_BYTE*)a1 & 0x20) != 0)
		**(_QWORD**)(a1 + 48) = v18;
	return result;
}
// 14091B3EE: variable 'a3' is possibly undefined
// 14091B3EE: variable 'a4' is possibly undefined

