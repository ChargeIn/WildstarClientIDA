//----- (000000014063D220) ----------------------------------------------------
void sub_14063D220()
{
	unsigned int v0; // eax
	int v1; // edx

	if (!*(_DWORD*)(qword_140C65B98 + 328))
	{
		v0 = *(_DWORD*)(qword_140C65B98 + 268);
		if (v0 <= 8)
		{
			v1 = 278;
			if (_bittest(&v1, v0))
				sub_1405C1480((_DWORD*)(qword_140C65B98 + 264));
		}
	}
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

