//----- (00000001402CDB90) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402CDB90(_QWORD* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v6[0] = -1;
	(*(void(__fastcall**)(_QWORD*, int*, __int64))(v2 + 64))(a1, v6, 5i64);
	return a1[40]
		+ ((unsigned __int64)*(unsigned __int16*)(*(_QWORD*)((*(__int64(__fastcall**)(_QWORD*))(*a1 + 24i64))(a1)
			+ 184)
			+ 2 * v3) << 6);
}
// 1402CDB90: using guessed type int var_18[6];

