//----- (000000014015D130) ----------------------------------------------------
void __fastcall sub_14015D130(__int64 a1, void* a2, __int64 a3)
{
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rbx
	void* v8; // r8

	if (a2 || a3)
	{
		v6 = *(_QWORD*)(a1 + 16);
		v7 = a1 + 16;
		if (v6)
		{
			if (!a2)
				a2 = &unk_1409DC37C;
			(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)v6 + 56i64))(v6, a2, -1i64);
		}
		else
		{
			v8 = &unk_1409DC39C;
			if (a2)
				v8 = a2;
			(*(void(__fastcall**)(__int64, _QWORD, void*, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
				qword_140C65680,
				*(_QWORD*)(a3 + 96),
				v8,
				-1i64,
				v7);
		}
	}
	else
	{
		v5 = *(_QWORD*)(a1 + 16);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(a1 + 16) = 0i64;
		}
	}
}
// 140C65680: using guessed type __int64 qword_140C65680;

