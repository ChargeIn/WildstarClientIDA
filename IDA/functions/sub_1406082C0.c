//----- (00000001406082C0) ----------------------------------------------------
__int64 __fastcall sub_1406082C0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r8
	__int64 v4; // r8
	__int64 v5; // r9
	_QWORD* v6; // rcx
	int v8; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD**)(a2 + 432);
	if (v2)
		*v2 = *(_QWORD*)(a2 + 440);
	v4 = a2 + 440;
	v5 = *(_QWORD*)(a2 + 440);
	if (v5)
		*(_QWORD*)(v5 + 432) = *(_QWORD*)(a2 + 432);
	v6 = (_QWORD*)(a1 + 112);
	*(_QWORD*)v4 = 0i64;
	*(_QWORD*)(a2 + 432) = v6;
	*(_QWORD*)v4 = *v6;
	*v6 = a2;
	if (*(_QWORD*)v4)
		*(_QWORD*)(*(_QWORD*)v4 + 432i64) = v4;
	v8 = *(_DWORD*)(a2 + 232);
	return sub_14060AB50(a1 + 120, &v8);
}

