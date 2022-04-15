//----- (00000001404BB2F0) ----------------------------------------------------
__int64 __fastcall sub_1404BB2F0(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	__int64* v3; // rax
	__int64 v4; // rcx
	int v5; // eax
	__int64 v6; // r9
	__int64 v7; // r10

	v2 = *(_QWORD*)(a2 + 8);
	if (v2)
	{
		v3 = (__int64*)xmmword_140C7DFC0;
		if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
		{
			while (1)
			{
				v4 = *v3;
				if (*(_DWORD*)(*v3 + 8) == *(_DWORD*)a2 && *(_QWORD*)(v4 + 16) == v2)
					break;
				if (++v3 == *((__int64**)&xmmword_140C7DFC0 + 1))
					return 0i64;
			}
			if (v4)
			{
				v5 = *(_DWORD*)(a2 + 24);
				if (v5)
				{
					v6 = *(unsigned int*)(a2 + 16);
					if ((unsigned int)v6 < *(_DWORD*)(v4 + 272))
					{
						v7 = *(_QWORD*)(v4 + 232);
						if (v7)
							sub_1405A9A00(v7 + 192 * v6, *(_DWORD*)(a2 + 20), v5 == 4);
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

