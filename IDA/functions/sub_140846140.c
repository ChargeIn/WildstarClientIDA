//----- (0000000140846140) ----------------------------------------------------
void __fastcall sub_140846140(__int64 a1)
{
	unsigned int v1; // esi
	char v2; // r8
	unsigned int v4; // ebx
	__int64 v5; // rdx
	__int64* v6; // rdi
	__int64 v7; // rcx
	int v8; // edx
	int SpinCount; // ecx

	v1 = 0;
	v2 = 0;
	if (*(_BYTE*)(a1 + 137))
	{
		while (!v2)
		{
			v4 = 0;
			v5 = *(_QWORD*)(a1 + 24 * (v1 + 1i64));
			v6 = (__int64*)(a1 + 24 * (v1 + 1i64));
			if ((unsigned int)((v6[1] - v5) >> 4))
			{
				do
				{
					if (v2)
						break;
					v7 = *(_QWORD*)(v5 + 16i64 * v4 + 8);
					if (v7)
						v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 104i64))(v7);
					v5 = *v6;
					++v4;
				} while (v4 < (unsigned int)((v6[1] - *v6) >> 4));
			}
			if (++v1 >= *(unsigned __int8*)(a1 + 137))
			{
				if (!v2)
					return;
				break;
			}
		}
		v8 = *(_DWORD*)(a1 + 132);
		SpinCount = qword_140C61B68[4].SpinCount;
		if (!v8 || (unsigned int)(SpinCount - v8) > 8)
			*(_DWORD*)(a1 + 132) = SpinCount;
	}
}

