//----- (00000001407F0084) ----------------------------------------------------
void __fastcall sub_1407F0084(__int64 a1)
{
	__int64 v2; // rax
	void* v3; // rcx
	_QWORD* v4; // rdx

	sub_1407E2340(14);
	v2 = *(_QWORD*)(a1 + 8);
	if (v2)
	{
		v3 = qword_140C60838;
		v4 = &unk_140C60830;
		while (qword_140C60838)
		{
			if (*(_QWORD*)qword_140C60838 == v2)
			{
				v4[1] = *((_QWORD*)qword_140C60838 + 1);
				sub_1407E14C0(v3);
				break;
			}
			v4 = qword_140C60838;
		}
		sub_1407E14C0(*(LPVOID*)(a1 + 8));
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	sub_1407E2528(14);
}

