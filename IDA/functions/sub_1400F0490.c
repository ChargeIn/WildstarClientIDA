//----- (00000001400F0490) ----------------------------------------------------
__int64 __fastcall sub_1400F0490(__int64 a1, __int64 a2, unsigned __int64* a3, __int64 a4, unsigned int a5)
{
	unsigned __int64 v8; // r8
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rbx
	__int64* v13; // rax
	__int64 result; // rax

	if (a3)
	{
		v8 = -1i64;
		do
			++v8;
		while (*((_BYTE*)a3 + v8));
		sub_140058710(a1, a3, v8);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v9 = *(_QWORD*)(a1 + 16);
	v10 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (a5)
	{
		v12 = a5;
		do
		{
			sub_1400F06F0(a1, v11, *(unsigned __int16**)a4, *(_DWORD*)(a4 + 8));
			a4 += 16i64;
			--v12;
		} while (v12);
	}
	v13 = (__int64*)sub_1400580E0(a1, -3);
	result = sub_14005EA50(a1, v13, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}
// 1400F052A: variable 'v11' is possibly undefined

