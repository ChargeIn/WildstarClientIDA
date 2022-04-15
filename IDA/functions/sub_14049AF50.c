//----- (000000014049AF50) ----------------------------------------------------
__int64 __fastcall sub_14049AF50(__int64 a1)
{
	_QWORD* v2; // rbx
	int v3; // eax
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v2 = *(_QWORD**)(*(_QWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32i64))(*(_QWORD*)(a1 + 8))
		+ 8)
		+ 16i64);
	if (v2 == *(_QWORD**)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32i64))(*(_QWORD*)(a1 + 8)) + 8))
		return 1i64;
	while (1)
	{
		v3 = *(_DWORD*)(a1 + 16);
		if (!_bittest(&v3, *(_DWORD*)(v2[5] + 24i64)))
			break;
		v4 = v2[3];
		if (v4)
		{
			v2 = (_QWORD*)v2[3];
			for (i = *(_QWORD**)(v4 + 16); i; i = (_QWORD*)i[2])
				v2 = i;
		}
		else
		{
			for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v2 = (_QWORD*)j;
			if (v2[3] != j)
				v2 = (_QWORD*)j;
		}
		if (v2 == *(_QWORD**)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32i64))(*(_QWORD*)(a1 + 8)) + 8))
			return 1i64;
	}
	return 0i64;
}

