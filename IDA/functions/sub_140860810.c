//----- (0000000140860810) ----------------------------------------------------
char __fastcall sub_140860810(__int64 a1)
{
	char result; // al
	bool v3; // zf
	unsigned __int16* v4; // rax

	*(_WORD*)(a1 + 376) = sub_14086FD20(*(_QWORD*)(a1 + 160));
	result = *(_BYTE*)(a1 + 381);
	if (result >= 0)
	{
		result |= 0x80u;
		v3 = *(_QWORD*)(a1 + 504) == 0i64;
		*(_BYTE*)(a1 + 381) = result;
		if (!v3)
		{
			v4 = (unsigned __int16*)sub_14084EB00(*(_QWORD*)(a1 + 160));
			return sub_14083A800(qword_140C61B98, *(_QWORD*)(a1 + 504), v4);
		}
	}
	return result;
}
// 140C61B98: using guessed type __int64 qword_140C61B98;

