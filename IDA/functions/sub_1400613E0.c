//----- (00000001400613E0) ----------------------------------------------------
__int64 __fastcall sub_1400613E0(__int64 a1, int a2, int a3)
{
	void(__fastcall * v3)(__int64, int*); // rdi
	__int64 v6; // r8
	__int64 v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // r14
	__int64 v10; // r14
	int v11; // edx
	int v12; // edx
	__int64 result; // rax
	__int64 v14; // rcx
	int v15[29]; // [rsp+20h] [rbp-A8h] BYREF
	int v16; // [rsp+94h] [rbp-34h]

	v3 = *(void(__fastcall**)(__int64, int*))(a1 + 112);
	if (v3 && *(_BYTE*)(a1 + 101))
	{
		v6 = *(_QWORD*)(a1 + 16);
		v7 = v6 - *(_QWORD*)(a1 + 64);
		v8 = *(_QWORD*)(a1 + 40);
		v9 = *(_QWORD*)(v8 + 16);
		v15[0] = a2;
		v15[10] = a3;
		v10 = v9 - *(_QWORD*)(a1 + 64);
		if (a2 == 4)
			v16 = 0;
		else
			v16 = (v8 - *(_QWORD*)(a1 + 80)) / 40;
		if (*(_QWORD*)(a1 + 56) - v6 <= 320)
		{
			v11 = *(_DWORD*)(a1 + 88);
			if (v11 < 20)
				v12 = v11 + 20;
			else
				v12 = 2 * v11;
			sub_140061210(a1, v12);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) = *(_QWORD*)(a1 + 16) + 320i64;
		*(_BYTE*)(a1 + 101) = 0;
		v3(a1, v15);
		result = *(_QWORD*)(a1 + 40);
		v14 = v10 + *(_QWORD*)(a1 + 64);
		*(_BYTE*)(a1 + 101) = 1;
		*(_QWORD*)(result + 16) = v14;
		*(_QWORD*)(a1 + 16) = v7 + *(_QWORD*)(a1 + 64);
	}
	return result;
}
// 1400613E0: using guessed type int var_A8[29];

