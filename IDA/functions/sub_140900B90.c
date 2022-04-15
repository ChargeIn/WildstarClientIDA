//----- (0000000140900B90) ----------------------------------------------------
_BYTE* __fastcall sub_140900B90(_BYTE* a1, int a2, unsigned __int64 a3)
{
	int v4; // esi
	_BYTE* v6; // r14
	_BYTE* v7; // rdi
	int v9; // eax
	_BYTE* v10; // rdx
	char* v11; // rcx
	int v13; // ecx

	v4 = a2;
	v6 = a1;
	v7 = a1;
	if (!a1 && a2 || a2 < 0 || !a3)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0i64;
	}
	if (!a2)
		return 0i64;
	sub_1407DDFA8(a3);
	if ((*(_BYTE*)(a3 + 24) & 0x40) == 0)
	{
		v9 = sub_1407EA35C(a3);
		if ((unsigned int)(v9 + 2) <= 1)
		{
			v11 = (char*)&unk_140C0FFB0;
			v10 = &unk_140C0FFB0;
		}
		else
		{
			v10 = (_BYTE*)(qword_140C60410[(__int64)v9 >> 5] + 88i64 * (v9 & 0x1F));
			v11 = (char*)&unk_140C0FFB0;
		}
		if ((v10[56] & 0x7F) != 0)
			goto LABEL_16;
		if ((unsigned int)(v9 + 2) > 1)
			v11 = (char*)(qword_140C60410[(__int64)v9 >> 5] + 88i64 * (v9 & 0x1F));
		if (v11[56] < 0)
		{
		LABEL_16:
			*(_DWORD*)sub_1407DE1B0() = 22;
			sub_1407DC370();
			v7 = 0i64;
		}
	}
	if (v7)
	{
		do
		{
			if (!--v4)
				break;
			if (-- * (_DWORD*)(a3 + 8) < 0)
				v13 = sub_1407F6FDC(a3);
			else
				v13 = *(unsigned __int8*)(*(_QWORD*)a3)++;
			if (v13 == -1)
			{
				if (v6 == a1)
				{
					v7 = 0i64;
					goto LABEL_27;
				}
				break;
			}
			*v6++ = v13;
		} while ((_BYTE)v13 != 10);
		*v6 = 0;
	}
LABEL_27:
	sub_1407DE044(a3);
	return v7;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

