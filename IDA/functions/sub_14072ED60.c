//----- (000000014072ED60) ----------------------------------------------------
__int64 __fastcall sub_14072ED60(_QWORD* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rcx
	__int64 v4; // rdx
	unsigned int v5; // ebx
	_QWORD* v6; // rsi
	int* v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]

	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	if (v2
		&& ((v3 = *(_QWORD*)(qword_140C65898 + 7152)) == 0
			? (v4 = 0i64)
			: (v4 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3)),
			v5 = (*(__int64(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v2 + 128i64))(*v2, v4),
			sub_14022BFC0(v5)))
	{
		v6 = (_QWORD*)sub_140059170(a1, 0x10ui64);
		v7 = sub_14018B280(16i64, 0);
		if (v7)
		{
			v7[2] = v5;
			*(_QWORD*)v7 = off_140B6FE30;
		}
		*v6 = 14672i64;
		v6[1] = v7;
		v8 = a1[4];
		v9 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.QuestHub", 0xDui64);
		v10 = a1[2];
		v12 = v9;
		v13 = 4;
		sub_14005E8E0((__int64)a1, v8 + 160, (int*)&v12, v10);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140B6FE30: using guessed type __int64 (__fastcall *off_140B6FE30[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

