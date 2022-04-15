#include "../winhttp.h"

//----- (00000001408557D0) ----------------------------------------------------
_QWORD* __fastcall sub_1408557D0(__int16 a1, int a2)
{
	unsigned int v2; // r8d

	v2 = a1 & 0xFF00;
	if (v2 <= 0xE00)
	{
		if (v2 != 3584)
		{
			if ((a1 & 0xFF00u) > 0x800)
			{
				if (v2 != 2304)
				{
					if (((v2 - 2560) & 0xFFFFFEFF) == 0)
						return sub_1408754B0(a1, a2, 0);
					if (((v2 - 3072) & 0xFFFFFEFF) == 0)
						return sub_1408754B0(a1, a2, 4);
					return 0i64;
				}
			}
			else if (v2 != 2048)
			{
				if ((a1 & 0xFF00u) > 0x400)
				{
					if (((v2 - 1536) & 0xFFFFFEFF) == 0)
						return sub_140875140(a1, a2);
				}
				else
				{
					switch (v2)
					{
					case 0x400u:
						return (_QWORD*)sub_1408748C0(a1, a2);
					case 0x100u:
						return (_QWORD*)sub_140856810(a1, a2);
					case 0x200u:
						return (_QWORD*)sub_140874B90(a1, a2);
					case 0x300u:
						return (_QWORD*)sub_140874DC0(a1, a2);
					}
				}
				return 0i64;
			}
			return sub_1408754B0(a1, a2, 2);
		}
		return sub_1408754B0(a1, a2, 3);
	}
	if ((a1 & 0xFF00u) <= 0x1900)
	{
		if (v2 == 6400)
			return (_QWORD*)sub_140875A20(a1, a2);
		if ((a1 & 0xFF00u) > 0x1200)
		{
			if (((v2 - 4864) & 0xFFFFFEFF) == 0)
				return sub_140875B10(a1, a2);
			return 0i64;
		}
		if (v2 == 4608)
			return (_QWORD*)sub_140875900(a1, a2);
		if (v2 != 3840)
		{
			if (((v2 - 4096) & 0xFFFFFEFF) == 0)
				return (_QWORD*)sub_140875DD0(a1, a2);
			return 0i64;
		}
		return sub_1408754B0(a1, a2, 3);
	}
	if (((v2 - 6656) & 0xFFFFFEFF) == 0)
		return (_QWORD*)sub_140875ED0(a1, a2);
	if (v2 == 7168)
		return (_QWORD*)sub_140874FE0(a1, a2);
	if (v2 == 7424)
		return (_QWORD*)sub_1408763D0(a1, a2);
	if (v2 != 7680)
		return 0i64;
	return (_QWORD*)sub_140876690(a1, a2);
}

