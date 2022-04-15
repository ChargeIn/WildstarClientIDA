//----- (0000000140154180) ----------------------------------------------------
void __fastcall sub_140154180(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx
	_QWORD** v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rcx

	v1 = *(_QWORD**)(a1 + 16);
	v3 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			v4 = v3[2];
			if (v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 16));
	}
	v5 = *(_QWORD***)(a1 + 16);
	v6 = *v5;
	if (*v5 != v5)
	{
		do
		{
			v7 = (__int64)v6;
			v6 = (_QWORD*)*v6;
			sub_14018B900(v7, 0);
		} while (v6 != *(_QWORD**)(a1 + 16));
	}
	**(_QWORD**)(a1 + 16) = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = *(_QWORD*)(a1 + 16);
	sub_14018B900(*(_QWORD*)(a1 + 16), 0);
}

