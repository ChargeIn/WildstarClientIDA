//----- (00000001404DE340) ----------------------------------------------------
__int64 __fastcall sub_1404DE340(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v5; // rcx
	int* v6; // rax
	__int64 v7; // rdx
	_QWORD* v8; // rax
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	result = sub_1401E94A0(a2);
	if (result)
	{
		v6 = (int*)sub_14034BDD0(v5, *(_DWORD*)(result + 20));
		if (v6)
		{
			v7 = 0i64;
			if (*(_WORD*)v6)
			{
				do
					++v7;
				while (*((_WORD*)v6 + v7));
			}
			sub_14001C480(a1 + 120, v6, (int*)((char*)v6 + 2 * v7));
			return *(_QWORD*)(a1 + 128);
		}
		else
		{
			v8 = sub_14018EFA0(&v9, (__int64)L"##-- Achievement %d not found -##", a2);
			if (v8 != (_QWORD*)(a1 + 120))
				sub_14001C480(a1 + 120, (int*)v8[1], (int*)v8[2]);
			if (v10)
				sub_14018B900(v10, 0);
			return *(_QWORD*)(a1 + 128);
		}
	}
	return result;
}
// 1404DE369: variable 'v5' is possibly undefined
// 140B0AD50: using guessed type wchar_t aAchievementDNo[34];

