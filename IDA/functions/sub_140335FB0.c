//----- (0000000140335FB0) ----------------------------------------------------
__int64 __fastcall sub_140335FB0(__int64 a1, unsigned __int16* a2)
{
	unsigned __int64 v4; // rbx
	__int64 result; // rax
	unsigned __int64 v6; // r8

	if (a2)
	{
		v4 = -1i64;
		do
			++v4;
		while (*((_BYTE*)a2 + v4));
		if (v4 > 0x7F)
		{
			result = sub_140336380(a1, 1ui64, 1ui64);
			if ((_DWORD)result)
				return result;
			v6 = 15i64;
			goto LABEL_10;
		}
	}
	else
	{
		v4 = 0i64;
	}
	result = sub_140336380(a1, 0i64, 1ui64);
	if ((_DWORD)result)
		return result;
	v6 = 7i64;
LABEL_10:
	result = sub_140336380(a1, v4, v6);
	if (!(_DWORD)result)
		return sub_1403360D0(a1, a2, (__int64)a2 + v4);
	return result;
}

