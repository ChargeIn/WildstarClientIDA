//----- (000000014071FDD0) ----------------------------------------------------
void __fastcall sub_14071FDD0(__int64 a1)
{
	int v1; // edx
	__int64 v3; // rax
	__int64 v4; // rbx

	v1 = *(_DWORD*)(a1 + 376);
	if (v1)
	{
		if (*(_QWORD*)(a1 + 384))
		{
			v3 = sub_1403D90D0(qword_140C65898, v1);
			v4 = v3;
			if (v3)
			{
				if (*(_DWORD*)(v3 + 128) != 20)
				{
					sub_140720860(v3, *(int**)(a1 + 384));
					*(_DWORD*)(v4 + 3352) = 1;
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

