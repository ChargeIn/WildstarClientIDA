//----- (00000001405C3660) ----------------------------------------------------
void __fastcall sub_1405C3660(__int64 a1, int a2)
{
	__int64 v3; // r8
	__int64 v4; // rdx
	int v5; // [rsp+40h] [rbp+18h] BYREF

	if ((unsigned int)sub_1405BED30(qword_140C65B98, a2))
	{
		v3 = *(_QWORD*)(qword_140C65898 + 27728);
		if (v3)
		{
			if (*(_QWORD*)(v3 + 96))
			{
				v4 = *(_QWORD*)(*(_QWORD*)(v3 + 88) + 8i64 * *(_QWORD*)(v3 + 104));
				if (v4)
				{
					if (*(_DWORD*)(v4 + 16) == *(_DWORD*)(v3 + 16) && *(_QWORD*)(v4 + 24) == *(_QWORD*)(v3 + 24))
					{
						v5 = a2;
						sub_1403F4900(qword_140C65898, 0x5B6u, (__int64)&v5);
					}
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

