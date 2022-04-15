//----- (0000000140403D70) ----------------------------------------------------
__int64 __fastcall sub_140403D70(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rbx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx

	v2 = (_QWORD*)qword_140C658A0;
	v4 = sub_140407590((__int64*)qword_140C658A0, (int*)a2);
	if (v4 < v2[1])
	{
		v5 = *(_QWORD*)(*v2 + 8 * v4);
		if (**(_DWORD**)(v5 + 8) == *(_DWORD*)a2 && *(_QWORD*)(v5 + 16) == *(_QWORD*)(a2 + 8) && v5)
		{
			sub_140401B70(v5, *(_QWORD*)(a2 + 24), *(_QWORD*)(a2 + 32), *(unsigned int*)(a2 + 16));
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatList", L"H", v5);
		}
	}
	return 0i64;
}
// 1409EE7BC: using guessed type wchar_t asc_1409EE7BC[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

