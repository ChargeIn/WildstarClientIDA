//----- (0000000140600750) ----------------------------------------------------
__int64 __fastcall sub_140600750(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdx
	_QWORD** v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rcx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 8);
	v3 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			v4 = v3[2];
			v3 = (_QWORD*)*v3;
			sub_1406012B0(a1, v4);
		} while (v3 != *(_QWORD**)(a1 + 8));
	}
	v5 = *(_QWORD***)(a1 + 8);
	v6 = *v5;
	if (*v5 != v5)
	{
		do
		{
			v7 = (__int64)v6;
			v6 = (_QWORD*)*v6;
			sub_14018B900(v7, 0);
		} while (v6 != *(_QWORD**)(a1 + 8));
	}
	**(_QWORD**)(a1 + 8) = *(_QWORD*)(a1 + 8);
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(result + 8) = result;
	return result;
}

