//----- (00000001404BBF60) ----------------------------------------------------
__int64 __fastcall sub_1404BBF60(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	__int64* v3; // rax
	__int64 v4; // rcx

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
				sub_1405ADD40(v4, *(_DWORD*)(a2 + 16));
		}
	}
	return 0i64;
}
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

