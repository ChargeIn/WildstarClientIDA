//----- (00000001405B19B0) ----------------------------------------------------
__int64 sub_1405B19B0()
{
	__int64* v0; // r9
	__int64 v1; // rax
	__int64 v2; // r10
	unsigned int v3; // r8d
	__int64 v4; // rax
	__int64 v5; // rdx
	int v6; // ecx

	v0 = (__int64*)xmmword_140C7DFC0;
LABEL_2:
	if (v0 == *((__int64**)&xmmword_140C7DFC0 + 1))
		return 0i64;
	v1 = *v0;
	if (!*(_DWORD*)(*v0 + 500))
	{
		v2 = *(_QWORD*)(v1 + 232);
		if (v2)
		{
			v3 = *(_DWORD*)(v1 + 272);
			if (v3)
			{
				if (*(_DWORD*)(v2 + 184))
				{
					v4 = 0i64;
					while (1)
					{
						v5 = v2 + 192 * v4;
						if (!v5)
							break;
						v6 = *(_DWORD*)(v5 + 184);
						if (v6)
						{
							if ((unsigned int)(v6 - 4) > 1)
								break;
						}
						v4 = (unsigned int)(v4 + 1);
						if ((unsigned int)v4 >= v3)
						{
							++v0;
							goto LABEL_2;
						}
					}
				}
			}
		}
	}
	return 1i64;
}
// 1405B19F6: conditional instruction was optimized away because r8d.4!=0
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

