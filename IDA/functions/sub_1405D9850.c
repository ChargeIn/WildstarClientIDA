//----- (00000001405D9850) ----------------------------------------------------
__int64 __fastcall sub_1405D9850(__int64 a1, unsigned int* a2, __int64* a3)
{
	__int64 v7; // rax
	int* v8; // rdx
	__int64 v9; // rax

	if (!a2)
		return 2147500037i64;
	v7 = sub_1404E1C50(a1, *a2, *(_QWORD*)(qword_140C65898 + 120));
	*(_QWORD*)(a1 + 176) = v7;
	if (!v7)
		return 2147500037i64;
	v8 = sub_14018B280(16i64, 0);
	if (v8)
	{
		*(_QWORD*)v8 = 0i64;
		*((_QWORD*)v8 + 1) = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	v9 = *(_QWORD*)(a1 + 176);
	*(_QWORD*)(a1 + 336) = v8;
	*v8 = *(_DWORD*)(v9 + 64);
	*(_DWORD*)(*(_QWORD*)(a1 + 336) + 4i64) = *(_DWORD*)(*(_QWORD*)(a1 + 176) + 68i64);
	*(_DWORD*)(*(_QWORD*)(a1 + 336) + 8i64) = *(_DWORD*)(*(_QWORD*)(a1 + 176) + 72i64);
	*(_DWORD*)(*(_QWORD*)(a1 + 336) + 12i64) = *(_DWORD*)(*(_QWORD*)(a1 + 176) + 76i64);
	return sub_1405D6880(a1, (__int64)a2, a3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

