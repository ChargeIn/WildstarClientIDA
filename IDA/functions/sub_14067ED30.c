//----- (000000014067ED30) ----------------------------------------------------
__int64 __fastcall sub_14067ED30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rdx
	__int64 v5; // rcx
	int v6; // eax
	__int64 v7; // rdx
	__int64 v8; // rax

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (!v2
		|| (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) < 2
		|| (v4 = *(_QWORD*)(v3 + 48), v5 = *(unsigned int*)(*(_QWORD*)v4 + 12i64), (unsigned int)v5 > 0x1B)
		|| (v6 = 134250504, !_bittest(&v6, v5)))
	{
		v8 = a1[2];
		goto LABEL_8;
	}
	v7 = sub_140721EF0(v5, *(_DWORD*)(*(_QWORD*)v4 + 20i64));
	v8 = a1[2];
	if (!v7)
	{
	LABEL_8:
		*(_QWORD*)v8 = 0i64;
		goto LABEL_9;
	}
	*(double*)v8 = (double)*(int*)(v7 + 24);
LABEL_9:
	*(_DWORD*)(v8 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}

