//----- (0000000140755000) ----------------------------------------------------
__int64 __fastcall sub_140755000(__int64 a1)
{
	__int64 v3; // rcx
	__int64 v4; // rdx
	int* v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int16* v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rdx

	if (qword_140C65898 && (v3 = *(_QWORD*)(qword_140C65898 + 29064)) != 0)
	{
		v5 = (int*)(*(__int64 (**)(void))(*(_QWORD*)v3 + 104i64))();
		if (v5)
		{
			sub_140058900(a1, v4, 0);
			sub_1400EFF50(a1, v6, (unsigned __int64*)"eType", v5[1]);
			v8 = sub_14034BDD0(v7, v5[24]);
			sub_1400F0090(a1, v9, (unsigned __int64*)"strContext", (unsigned __int16*)v8);
			if (v5[1] == 3)
				sub_1400EFF50(a1, v10, (unsigned __int64*)"nThreshold", v5[2]);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140755071: variable 'v4' is possibly undefined
// 140755084: variable 'v6' is possibly undefined
// 14075508C: variable 'v7' is possibly undefined
// 14075509E: variable 'v9' is possibly undefined
// 1407550B7: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

