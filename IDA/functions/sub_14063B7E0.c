//----- (000000014063B7E0) ----------------------------------------------------
__int64 __fastcall sub_14063B7E0(__int64 a1, _DWORD* a2)
{
	__int16* v4; // rax
	__int64 v5; // rcx
	__int16* v7; // rax

	v4 = sub_14034BDD0(a1, 326782);
	if ((unsigned int)sub_14018E2C0(*(_QWORD*)(a1 + 8), (unsigned __int16*)v4))
	{
		v7 = sub_14034BDD0(v5, 326781);
		if ((unsigned int)sub_14018E2C0(*(_QWORD*)(a1 + 8), (unsigned __int16*)v7))
		{
			return 2147500037i64;
		}
		else
		{
			if (a2)
				*a2 = 0;
			return 0i64;
		}
	}
	else
	{
		if (a2)
			*a2 = 1;
		return 0i64;
	}
}
// 14063B827: variable 'v5' is possibly undefined

