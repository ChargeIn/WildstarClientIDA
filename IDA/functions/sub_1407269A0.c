//----- (00000001407269A0) ----------------------------------------------------
void __fastcall sub_1407269A0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	_QWORD** v5; // rax
	_QWORD* v6; // rdi
	__int64 v7; // rcx
	_QWORD** v8; // rax
	_QWORD* v9; // rdi
	__int64 v10; // rcx

	sub_140726AC0((__int64*)a1);
	v2 = *(_QWORD*)(a1 + 1424);
	if (v2)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 8i64))(v2, 1i64);
		*(_QWORD*)(a1 + 1424) = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 1520);
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	v4 = *(_QWORD*)(a1 + 1504);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = *(_QWORD***)(a1 + 1496);
	v6 = *v5;
	if (*v5 != v5)
	{
		do
		{
			v7 = (__int64)v6;
			v6 = (_QWORD*)*v6;
			sub_14018B900(v7, 0);
		} while (v6 != *(_QWORD**)(a1 + 1496));
	}
	**(_QWORD**)(a1 + 1496) = *(_QWORD*)(a1 + 1496);
	*(_QWORD*)(*(_QWORD*)(a1 + 1496) + 8i64) = *(_QWORD*)(a1 + 1496);
	sub_14018B900(*(_QWORD*)(a1 + 1496), 0);
	v8 = *(_QWORD***)(a1 + 1472);
	v9 = *v8;
	if (*v8 != v8)
	{
		do
		{
			v10 = (__int64)v9;
			v9 = (_QWORD*)*v9;
			sub_14018B900(v10, 0);
		} while (v9 != *(_QWORD**)(a1 + 1472));
	}
	**(_QWORD**)(a1 + 1472) = *(_QWORD*)(a1 + 1472);
	*(_QWORD*)(*(_QWORD*)(a1 + 1472) + 8i64) = *(_QWORD*)(a1 + 1472);
	sub_14018B900(*(_QWORD*)(a1 + 1472), 0);
	if (*(_QWORD*)(a1 + 1208))
		sub_1401A4A00((const void***)(a1 + 1208));
}

