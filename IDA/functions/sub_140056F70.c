//----- (0000000140056F70) ----------------------------------------------------
__int64 __fastcall sub_140056F70(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	_DWORD* v6; // rax
	__int64 v7; // rdx

	v2 = (int*)sub_1400580E0(a1, 1);
	v3 = v2[2];
	if ((_DWORD)v3 == 5 || (_DWORD)v3 == 7)
		v4 = *(_QWORD*)(*(_QWORD*)v2 + 16i64);
	else
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v3 + 224);
	if (!v4)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v5 = v4;
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (!(unsigned int)sub_140056EB0(a1, (unsigned __int64*)aTostring))
		return 0i64;
	v6 = sub_1400580E0(a1, 1);
	v7 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v7 = *(_QWORD*)v6;
	*(_DWORD*)(v7 + 8) = v6[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140061D30(a1, (char*)(*(_QWORD*)(a1 + 16) - 32i64), 1);
	return 1i64;
}

