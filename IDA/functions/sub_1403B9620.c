//----- (00000001403B9620) ----------------------------------------------------
__int64 __fastcall sub_1403B9620(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rcx
	__int64 v4; // rax
	unsigned int v5; // edx
	__int64 v6; // rcx

	if (qword_140C65B80)
	{
		if (*(_QWORD*)qword_140C65B80)
		{
			if (sub_1403F8270(a1, a2[2], 0))
			{
				v3 = sub_1405FC7B0(*(_QWORD*)qword_140C65B80, *a2);
				if (v3)
				{
					v4 = a2[1];
					if (*(_QWORD*)v3)
					{
						v5 = *(_DWORD*)(*(_QWORD*)v3 + 16i64);
						if ((_DWORD)v4 != v5 && (unsigned int)v4 <= v5)
						{
							v6 = *(_QWORD*)(v3 + 8 * v4 + 16);
							if (v6)
								*(_DWORD*)(v6 + 56) = a2[2];
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

