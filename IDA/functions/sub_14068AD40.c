//----- (000000014068AD40) ----------------------------------------------------
__int64 __fastcall sub_14068AD40(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	unsigned int v3; // eax
	__int64 v4; // rax

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v1 = sub_140056AB0(a1, 1u);
		if (v1)
		{
			v2 = *(_QWORD*)(v1 + 8);
			if (v2)
			{
				v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 8) + 32i64))(*(_QWORD*)(v2 + 8));
				v4 = sub_140498A40(qword_140C65980, v3, 0);
				if (v4)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 392i64))(v4);
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

