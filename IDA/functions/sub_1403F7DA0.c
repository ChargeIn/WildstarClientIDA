//----- (00000001403F7DA0) ----------------------------------------------------
__int64 __fastcall sub_1403F7DA0(__int64 a1)
{
	__int64 v1; // rdi
	_QWORD* v3; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 result; // rax
	__int64 v9; // rcx

	v1 = qword_140C65BB0;
	v3 = *(_QWORD**)(qword_140C65BB0 + 8);
	v4 = (_QWORD*)*v3;
	if ((_QWORD*)*v3 != v3)
	{
		do
		{
			v5 = v4[2];
			v4 = (_QWORD*)*v4;
			sub_140620C80(v5);
		} while (v4 != *(_QWORD**)(v1 + 8));
	}
	v6 = *(_QWORD*)(a1 + 120);
	if (v6)
	{
		v7 = *(_QWORD*)(v6 + 5864);
		if (v7)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 296i64))(v7, 1i64);
	}
	result = *(_QWORD*)(a1 + 25744);
	if (result && result != *(_QWORD*)(a1 + 120))
	{
		v9 = *(_QWORD*)(result + 5864);
		if (v9)
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 296i64))(v9, 1i64);
	}
	return result;
}
// 140C65BB0: using guessed type __int64 qword_140C65BB0;

