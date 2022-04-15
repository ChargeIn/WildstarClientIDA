//----- (000000014084C050) ----------------------------------------------------
void __fastcall sub_14084C050(_QWORD** a1)
{
	_QWORD* i; // rbx
	__int64 v3; // rax
	__int64 v4; // rdi

	if (*a1)
	{
		for (i = (_QWORD*)**a1; i; i = (_QWORD*)*i)
		{
			v3 = sub_140830EE0(qword_140C61BA8, (__int64)(i + 1));
			v4 = v3;
			if (v3)
			{
				(*(void(__fastcall**)(__int64, _QWORD**))(*(_QWORD*)v3 + 64i64))(v3, a1);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
			}
		}
	}
	sub_140839210(qword_140C61BB0, (unsigned __int64)a1);
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

