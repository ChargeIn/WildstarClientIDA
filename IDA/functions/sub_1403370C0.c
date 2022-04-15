//----- (00000001403370C0) ----------------------------------------------------
__int64 __fastcall sub_1403370C0(_QWORD* a1, unsigned __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rax
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // rcx

	if (a1[2] || (result = sub_140336B00((__int64)a1), !(_DWORD)result))
	{
		if (a1[4])
		{
			++a1[3];
			a1[4] = 0i64;
		}
		if ((v5 = a1[2]) != 0 && a1[3] != *(_QWORD*)(v5 + 32) || (result = sub_140336B00((__int64)a1), !(_DWORD)result))
		{
			while (a2)
			{
				v6 = sub_1403374C0((__int64)a1);
				v7 = a2;
				if (v6 < a2)
					v7 = v6;
				if (v7)
				{
					a2 -= v7;
					a1[3] += v7;
				}
				else
				{
					result = sub_140336B00((__int64)a1);
					if ((_DWORD)result)
						return result;
				}
			}
			return 0i64;
		}
	}
	return result;
}

