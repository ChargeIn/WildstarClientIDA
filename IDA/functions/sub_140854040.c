//----- (0000000140854040) ----------------------------------------------------
__int64 __fastcall sub_140854040(_QWORD* a1, char a2)
{
	__int64 v2; // rbx
	int* i; // r8
	int v6; // esi
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 result; // rax

	v2 = a1[4];
	if (v2)
	{
		do
		{
			a1[4] = *(_QWORD*)(v2 + 16);
			sub_14082A860((__int64*)qword_140C61B78, *(_DWORD*)(v2 + 64), v2);
			for (i = *(int**)(v2 + 40); (unsigned int)((*(_QWORD*)(v2 + 48) - (_QWORD)i) / 24i64); i = *(int**)(v2 + 40))
				sub_140853F80(v2, *i);
			v6 = dword_140C10F20;
			*(_QWORD*)v2 = off_1409A3618;
			v7 = *(_QWORD*)(v2 + 40);
			if (v7)
			{
				*(_QWORD*)(v2 + 48) = v7;
				sub_140881720(dword_140C10F20, v7);
				*(_QWORD*)(v2 + 40) = 0i64;
				*(_QWORD*)(v2 + 48) = 0i64;
				*(_DWORD*)(v2 + 56) = 0;
			}
			v8 = *(_QWORD*)(v2 + 32);
			if (v8)
				sub_140881720(dword_140C10F20, v8);
			*(_QWORD*)(v2 + 32) = 0i64;
			result = sub_140881720(v6, v2);
			v2 = a1[4];
		} while (v2);
		if (a2)
			return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 416i64))(a1);
	}
	return result;
}
// 140854086: conditional instruction was optimized away because rbx.8!=0
// 1409A3618: using guessed type __int64 (__fastcall *off_1409A3618[5])();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B78: using guessed type __int64 qword_140C61B78;

